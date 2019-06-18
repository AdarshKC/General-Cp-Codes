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
	ll a,b,x,y;
	cin >> a >> b;
	vii u,v;
	fr(i,-a,a+1)
	{
		fr(j,i+1,a+1)
		{
			if(i==0 || j==0)
				continue;
			x=i*i+j*j;
			if(x==a*a)
				v.pb(mp(i,j));
		}
	}
	fr(i,-b,b+1)
	{
		fr(j,i+1,b+1)
		{
			if(i==0 || j==0)
				continue;
			x=i*i+j*j;
			if(x==b*b)
				u.pb(mp(i,j));
		}
	}
	fr(i,0,v.sz)
	{
		fr(j,0,u.sz)
		{
			x=v[i].fi-u[j].fi;
			y=v[i].se-u[j].se;
			if(x*x+y*y==a*a+b*b && v[i].fi != u[j].fi && v[i].se != u[j].se)
			{
				cout << "YES" << endl << 0 sp 0 << endl << v[i].fi sp v[i].se << endl << u[j].fi sp u[j].se;
				return 0;  
			}
		}
	}
	cout << "NO";
}
