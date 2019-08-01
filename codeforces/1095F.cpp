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

ll parent[500001],size[500001];

void make_set(ll x)
{
	parent[x]=x;
	size[x]=1;
}

ll find_set_reduced(ll x)
{
	if(parent[x]!=x)
		return parent[x]=find_set_reduced(parent[x]);
	return x;
}

void union_set(ll x,ll y)
{
	x=find_set_reduced(x);
	y=find_set_reduced(y);
	if(x!=y)
	{
		if(x<y)
		{
			parent[x]=y;
			size[y]+=size[x];
		}
		else
		{
			parent[y]=x;
			size[x]+=size[y];
		}
	}
}

int main()
{
	fast;
	ll n,m,x,y,z,ans=0;
	cin >> n >> m;
	fr(i,1,n+1)
		make_set(i);
	viii edge;
	vii v;
	fr(i,0,n)
	{
		cin >> x;
		v.pb(mp(x,i+1));
	}
	sort(all(v));
	fr(i,1,v.sz)
		edge.pb(mp(v[0].fi+v[i].fi,mp(v[0].se,v[i].se)));
	while(m--)
	{
		cin >> x >> y >> z;
		edge.pb(mp(z,mp(x,y)));
	}
	sort(all(edge));
	//fr(i,0,edge.sz)
	//	cout << edge[i].fi sp edge[i].se.fi sp edge[i].se.se << endl ;
	fr(i,0,edge.sz)
	{
		x=edge[i].se.fi,y=edge[i].se.se;
		if (find_set_reduced(x) != find_set_reduced(y)) 
		{
        	ans += edge[i].fi;
        	union_set(x, y);
    	}
	}
	cout << ans;
}
