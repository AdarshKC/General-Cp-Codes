// https://www.hackerearth.com/practice/algorithms/graphs/topological-sort/practice-problems/algorithm/lonelyisland-49054110/

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi vector<ll>
#define vii vector <pair<ll,ll> >
#define viii vector <pair<ll,pair<ll,ll> > >
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
#define inf 999999999999999999
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);
#define sz size()

ll n,m,s,id=0;
vi ans,vis(200010),adj[200010];

void dfs(int v) 
{
    vis[v] = 1;
    fr(i,0,adj[v].sz)
        if (!vis[adj[v][i]])
            dfs(adj[v][i]);
    ans.pb(v);
}

void topological_sort() 
{
    fr(i,1,n+1)
        if (!vis[i])
            dfs(i);
    reverse(all(ans));
}

int main()
{
    cin >> n >> m >> s;
    fr(i,0,m)
    {
        ll x,y;
        cin >> x >> y;
        adj[x].pb(y);
    }
    topological_sort();
    while(ans[id]!=s)
        id++;
    map <ll,ld> o;
    o[s]=1.0;
    ld res=0.0;
    while(id<n)
    {
        fr(i,0,adj[ans[id]].sz)
            o[adj[ans[id]][i]]+=(ld)o[ans[id]]/adj[ans[id]].sz;
        id++;
    }
    fr(i,0,n)
        if(adj[ans[i]].sz==0 && o[ans[i]]>res)
           res=o[ans[i]];
    vi ss; 
    fr(i,0,n)
        if(res==o[ans[i]] && !adj[ans[i]].sz)
            ss.pb(ans[i]);
    output(ss,ss.sz);
}
