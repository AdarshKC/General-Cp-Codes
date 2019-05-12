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

vi v[300005];
ll a[300005],r,b,ans;

pair<ll,ll> dfs(ll ind,ll par)
{
	ll rr=0,bb=0;
	if(a[ind]==1)
		rr++;
	if(a[ind]==2)
		bb++;
	fr(i,0,v[ind].size())
	{
		if(v[ind][i]==par)
			continue;
		pair <ll,ll> p = dfs(v[ind][i],ind);
		if(p.fi==r && p.se==0 || p.fi==0 && p.se==b)
			ans++;
		rr+=p.fi;
		bb+=p.se;
	}
	return mp(rr,bb);
}

int main()
{
	fast;
	ll n;
	cin >> n;
	ans=r=b=0;
	fr(i,1,n+1)
	{
		cin >> a[i];
		if(a[i]==1)
			r++;
		if(a[i]==2)
			b++;
	}
	fr(i,0,n-1)
	{
		ll x,y;
		cin >> x >> y;
		v[x].pb(y);
		v[y].pb(x);
	}
	dfs(1,0);
	cout << ans;
}
