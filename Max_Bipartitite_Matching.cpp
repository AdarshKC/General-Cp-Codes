// Question link: https://codeforces.com/group/wpICdKII7N/contest/101873/problem/F

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll int
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

ll m,n,k;
vi edge,edge_cp;
vii adj[5010], adj_cp[5010];
pair <ll,ll> par[5010];

bool aug_path()
{
	ll vis[5010]={0};
	queue<ll> q;
	q.push(0);vis[0]=1;
	ll flag=0;

	while(!q.empty())
	{
		ll x=q.front();
		q.pop();
		if(x==1)
		{
			flag=1;
			break;
		}
		fr(i,0,adj[x].sz)
		{
			ll y=adj[x][i].fi,e=adj[x][i].se;
			if(vis[y] || edge[e]==0)continue;
			vis[y]=1;
			q.push(y);
			par[y]=mp(x,e);
		}
	}
	if(!flag)return 0;
	
	ll x=1;
	while(x!=0)
	{
		ll e=par[x].se;
		edge[e]--;
		edge[e^1]++;
		x=par[x].fi;
	}
	return 1;
}

ll max_flow()
{
	ll ans=0;
	while(aug_path())ans++;
	return ans;
}

void add_edge(ll x, ll y)
{
	edge.pb(1);
	adj[x].pb(mp(y,edge.sz-1));
	edge.pb(0);
	adj[y].pb(mp(x,edge.sz-1));
}

int main()
{
	fast;
	// 0 is source and 1 is sink...
	cin >> m >> n >> k;
	fr(i,0,k)
	{
		ll x,y;
		cin >> x >> y;
		add_edge(x+1,y+m+1);
	}

	fr(i,1,m+1)add_edge(0,i+1);
	fr(i,1,n+1)add_edge(m+i+1,1);

	ll ans_cp=max_flow(),ans=0;
	fr(i,0,m+n+2)adj_cp[i].assign(all(adj[i]));
	edge_cp.assign(all(edge));
	
	fr(i,1,m+1)
	{
		fr(j,0,m+n+4)adj[j].assign(all(adj_cp[j]));
		edge.assign(all(edge_cp));
		add_edge(0,m+n+2);
		add_edge(0,m+n+3);
		fr(j,0,adj[i+1].sz)
		{
			add_edge(m+n+2,adj[i+1][j].fi);
			add_edge(m+n+3,adj[i+1][j].fi);
		}
		ans=max(ans,ans_cp+max_flow());
	}
	cout << ans << endl;
}
