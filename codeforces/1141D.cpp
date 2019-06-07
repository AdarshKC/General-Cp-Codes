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
	ll n,t;
	cin >> n;
	map<char, vi > a, b;
	vii ans;
	char l[n+1],r[n+1];
	fr(i,1,n+1)
	{
		cin>>l[i];
		a[l[i]].pb(i);
	}
	fr(i,1,n+1)
	{
		cin>>r[i];
		b[r[i]].pb(i);
	}	
	for(char c='a';c<='z';c++)
	{
		t = min(a[c].sz, b[c].sz);
		while(t--)
		{
			ll i = a[c].back();
			a[c].pop_back();
			ll j = b[c].back();
			b[c].pop_back();
			ans.pb(mp(i,j));
		}
	}
	for(char c='a';c<='z';c++)
	{
		t = min(a['?'].sz, b[c].sz);
		while(t--)
		{
			ll i = a['?'].back();
			a['?'].pop_back();
			ll j = b[c].back();
			b[c].pop_back();
			ans.pb(mp(i,j));
		}
	}
	for(char c='a';c<='z';c++)
	{
		t = min(a[c].sz, b['?'].sz);
		while(t--)
		{
			ll i = a[c].back();
			a[c].pop_back();
			ll j = b['?'].back();
			b['?'].pop_back();
			ans.pb(mp(i,j));
		}
	}
	for(char c='a';c<='z';c++)
	{
		t = min(a['?'].sz, b['?'].sz);
		while(t--)
		{
			ll i = a['?'].back();
			a['?'].pop_back();
			ll j = b['?'].back();
			b['?'].pop_back();
			ans.pb(mp(i,j));
		}
	}
	cout << ans.sz << endl;
	fr(i,0,ans.sz)
		cout << ans[i].fi sp ans[i].se << endl;
}
