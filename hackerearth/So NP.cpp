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
#define md 1000003
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

ll n,m,k,x,y,connect=0,vis[100001]={0},temp_e,temp_v,ans=0;
vi v[100001];

void dfs(ll var)
{
	vis[var]=1;
	temp_e+=v[var].size();
	temp_v++;
	fr(i,0,v[var].size())
		if(!vis[v[var][i]])
			dfs(v[var][i]);
}

int main()
{
	fast;
	cin >> n >> m >> k;
	fr(i,0,m)
	{
		cin >> x >> y;
		v[x].pb(y);
		v[y].pb(x);
	}
	fr(i,1,n+1)
	{
		if(!vis[i])
		{
			connect++;
			temp_v=temp_e=0;
			dfs(i);
			ans+=temp_e/2-temp_v+1;
		}
	}
	ans+=k-connect;
	if(connect>k)
		cout << -1;
	else
		cout << ans;
}
