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
#define all(v) (v).begin(),(v).end()
#define mp(i,j) make_pair(i,j)
#define fi first
#define se second
#define input(a,n) fr(i,0,n)cin>>a[i]
#define output(a,n) fr(i,0,n)cout<<a[i]<<" "
#define dbg cout<<"hurr"<<endl;
#define dbg2 cout<<"hurr2"<<endl;
#define md 1000000007
#define sp << " " <<
#define inf 100000000000000000
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

vi v[100005];
ll colour[100005];
map <ll,set <ll> > mp;

ll bfs(ll x)
{
	fr(i,0,v[x].size())
		if(colour[x]!=colour[v[x][i]])
			mp[colour[x]].insert(colour[v[x][i]]);
}

int main() 
{
    fast;
    ll n,m,x,y,ans=inf,ma=-1;
    cin >> n >> m;
    fr(i,1,n+1)
    {
    	cin >> colour[i];
    	ans=min(ans,colour[i]);
    }
    while(m--)
    {
    	cin >> x >> y;
    	v[x].pb(y);
    	v[y].pb(x);
    }
    fr(i,1,n+1)
    	bfs(i);
    map <ll,set <ll> > :: iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
    	if(it->se.size()>ma)
    	{
    		ma=it->se.size();
    		ans=it->fi;
    	}
    }
    cout << ans;
}
