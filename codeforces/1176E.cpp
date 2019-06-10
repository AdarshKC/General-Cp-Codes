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
#define md 998244353
#define inf 999999999999999999
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);
#define sz size()

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n >> m;
        vi v[n+1];
        while(m--)
        {
            ll x,y;
            cin >> x >> y;
            v[x].pb(y);
            v[y].pb(x);
        }
        vi c(n+1,0);
        set <ll> a,b;
        fr(i,1,n+1)
        {
            if(!c[i])
            {
                a.insert(i);
                fr(j,0,v[i].sz)
                {
                    if(!c[v[i][j]])
                    {
                        c[v[i][j]]=1;
                        b.insert(v[i][j]);
                    }
                }
            }
        }
        if(a.sz>b.sz)
            a=b;
        cout << a.sz << endl;
        set <ll> :: iterator it;
        for(it=a.begin();it!=a.end();it++)
            cout << *it << " ";
        cout << endl;
    }
}
