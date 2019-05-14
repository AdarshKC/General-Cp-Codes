#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define ll int
#define vi vector<ll>
#define pb push_back

vi v[2000];
ll n,ans=0;

ll dfs(ll ind)
{
	fr(i,0,v[ind].size())
	{
		if(v[ind][i]==-1)
			return 0;
		else
			return 1+dfs(v[ind][i]);
	}
}

int main()
{
	fast;
	cin >> n;
	v[0].pb(-1);
	fr(i,1,n+1)
	{
		ll x;
		cin >> x;
		v[i].pb(x);
	}
	fr(i,1,n+1)
		ans=max(ans,dfs(i));
	cout << ans+1;
}
