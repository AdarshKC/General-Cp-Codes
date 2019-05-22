/* There is a directed graph G with N vertices and M edges. The vertices are numbered1,2,…,N, and for each i(1≤i≤M), the i-th directed edge goes from Vertex xi to yi.
G does not contain directed cycles.Find the length of the longest directed path in G. Here, the length of a directed path is the number of edges in it. */
// SOLUTION

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi vector<ll>
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define mp(i,j) make_pair(i,j)
#define fi first
#define se second
#define input(a,n) fr(i,0,n)cin>>a[i]
#define output(a,n) fr(i,0,n)cout<<a[i]<<" "
#define dbg cout<<"hurr"<<endl;
#define dbg2 cout<<"hurr2"<<endl;
#define md 1000000007
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

vi v[100001];
bool vis[100001]={0};

void dfs(ll ind, ll count, ll dp[])
{
    vis[ind]=1;
    fr(i,0,v[ind].size())
    {
        if(!vis[v[ind][i]])
            dfs(v[ind][i],count,dp);
        dp[ind]=max(dp[ind],1+dp[v[ind][i]]);
    }
}

int main()
{
    fast;
    ll n,m;
    cin >> n >> m;
    fr(i,0,m)
    {
        ll x,y;
        cin >> x >> y;
        v[x].pb(y);
    }
    ll dp[n+1]={0},ans=0;
    fr(i,1,n+1)
        if(!vis[i])
            dfs(i,0,dp);
    fr(i,0,n+1)
        ans=max(ans,dp[i]);
    cout << ans;
}
