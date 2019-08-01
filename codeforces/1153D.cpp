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

vi v[300005];
ll a[300005];

ll count_leaves(ll index)
{
	if(v[index].sz==0)
		return 1;
	ll count=0;
	fr(i,0,v[index].sz)
		count+=count_leaves(v[index][i]);
	return count;
}

ll dfs(ll index)
{
	if(v[index].sz==0)
		return 0;
	ll mi=inf,ma=0;
	fr(i,0,v[index].sz)
	{
		ll x=dfs(v[index][i]);
		mi=min(mi,x);
		ma+=x;
	}
	if(a[index])
		return mi;
	return ma+v[index].sz-1;
}

int main()
{
    fast;
    ll n,x;
    cin >> n;
    fr(i,1,n+1)
    	cin >> a[i];
    fr(i,2,n+1)
    {
    	cin >> x;
    	v[x].pb(i);
    }
    ll leaves=count_leaves(1);
    ll rejected=dfs(1);
    cout << leaves-rejected;
}
