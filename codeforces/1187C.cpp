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

int main()
{
    fast;
    ll n,m;
    cin >> n >> m;
    vii u,v;
    fr(i,0,m)
    {
    	ll x,y,z;
    	cin >> x >> y >> z;
    	if(x)
    		v.pb(mp(y,z));
    	else
    		u.pb(mp(y,z));
    }
    ll a[n];
    set<pair<ll,ll> > check;
    fr(i,0,n)
    	a[i]=2*(i+1)+100000;
    fr(i,0,v.sz)
    {
    	ll x=v[i].fi,y=v[i].se;
   	fr(j,x,y)
    		check.insert(mp(j,j+1));
    }
    sort(all(u));
    fr(i,0,u.sz)
    {
    	ll x=u[i].fi,y=u[i].se,w=0;
    	fr(j,x,y)
    	{
    		if(check.find(mp(j,j+1))==check.end())
    		{
    			a[j]=a[j-1]-3;
    			w=1;
    			break;
    		}
    	}
    	if(!w)
    	{
    		cout << "NO";
    		return 0;
    	}
    }
    cout << "YES\n";
    output(a,n);
}
