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
	ll n;
	cin >> n;
	ll a[n];
	input(a,n);
	if(n==1)
	{
		cout << -1;
		return 0;
	}
	sort(a,a+n);
	if(n==2)
	{
		if(a[0]==a[1])
			cout << 1 << endl << a[0];
		else if((a[0]+a[1])%2)
			cout << 2 << endl << a[0]-(a[1]-a[0]) sp a[n-1]+(a[1]-a[0]);
		else
			cout << 3 << endl << a[0]-(a[1]-a[0]) sp (a[0]+a[1])/2 sp a[n-1]+(a[1]-a[0]) ;
		return 0;
	}
	map <ll,ll> m;
	fr(i,1,n)
		m[a[i]-a[i-1]]++;
	if(m.sz==1)
	{
		if(m.begin()->fi==0)
			cout << 1 << endl << a[0];
		else
			cout << 2 << endl << a[0]-(a[1]-a[0]) sp a[n-1]+(a[1]-a[0]);
		return 0; 
	}
	if(m.sz>2)
	{
		cout << 0;
		return 0;
	}
	ll x[2];
	map <ll,ll> :: iterator it=m.begin();
	x[0]=it->fi;
	it++;
	x[1]=it->fi;
	sort(x,x+2);
	if(m[x[1]]>1 || x[0]*2!=x[1])
	{
		cout << 0;
		return 0;
	}
	fr(i,1,n)
	{
		if(a[i]-a[i-1]==x[1])
		{
			cout << 1 << endl << (a[i]+a[i-1])/2 ;
			return 0;
		}
	}
}
