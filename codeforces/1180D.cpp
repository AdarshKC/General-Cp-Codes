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
	ll a[n+1][m+1];
	vii v;
	fr(i,1,(n+1)/2+1)
	{
		ll x=i,y=1,z=1;
		fr(j,0,2*m)
		{
			if(z)
			{
				v.pb(mp(x,y));
			}
			else
			{
				v.pb(mp(n+1-x,m+1-y));
				y++;
			}
			z^=1;
		}
	}
	fr(i,0,n*m)
		cout << v[i].fi sp  v[i].se << endl;
}
