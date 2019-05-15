#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi vector<ll>
#define all(v) (v).begin(),(v).end()
#define pb push_back
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

vi v[500001];
ll ans[500001],n,rr;
vi d;

void dfs(ll ind,bool ch[])
{
    fr(i,0,v[ind].size())
    {
        if(!ch[v[ind][i]])
        {//cout << ans[var] << " " << v[ind][i] << ", ";
            rr++;
            ch[v[ind][i]]=1;
            d.pb(v[ind][i]);
            dfs(v[ind][i],ch);
        }
    }
}

int main()
{
    fast;
    ll m,x,y;
    cin >> n >> m;
    while(m--)
    {
        cin >> x;
        ll a[x];
        input(a,x);
        fr(i,0,x-1)
        {
            v[a[i]].pb(a[i+1]);
            v[a[i+1]].pb(a[i]);
        }
    }
    bool ch[n+1]={0};
    fr(i,1,n+1)
    {
        d.clear();
        rr=0;
        if(!ch[i])
            dfs(i,ch);
        fr(j,0,d.size())
            ans[d[j]]=rr;
        if(ans[i]==0)
            ans[i]=1;
        cout << ans[i] << " ";
    }
}
