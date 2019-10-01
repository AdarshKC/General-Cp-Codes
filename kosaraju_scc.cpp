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

ll n,m,id=1;
vi g[100010],gr[100010],used(100010),order,component;

void dfs1(ll v) 
{
    used[v] = 1;
    fr(i,0,g[v].sz)
        if (!used[g[v][i]])
            dfs1(g[v][i]);
    order.pb(v);
}

void dfs2(ll v) 
{
    used[v] = 1;
    //cout << v << " ";
    component.pb(v);
    fr(i,0,gr[v].sz)
        if(!used[gr[v][i]])
            dfs2(gr[v][i]);
}

int main() 
{
    cin >> n >> m;
    fr(i,0,m)
    {
        ll x,y;
        cin >> x >> y;
        g[x].pb(y);
        gr[y].pb(x);
    }
    fr(i,0,n)
        if (!used[i])
            dfs1 (i);
    used.assign(n,false);
    reverse(all(order));
    fr(i,0,n)
    {
        if (!used[order[i]]) 
        {
            cout << id++ << ": ";
            dfs2(order[i]);
            fr(j,0,component.sz)
                cout << component[j] << " ";
            cout << endl;
            component.clear();
        }
    }
}
