//https://codeforces.com/contest/1328/problem/E

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define pii pair<ll,ll>
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
#define maxn 200010

vi g[maxn];
ll t=0,in[maxn],out[maxn],dep[maxn],par[maxn];

void dfs(ll v){
	in[v]=t++;
	for(auto i:g[v]){
		if(i==par[v])continue;
		dep[i]=dep[v]+1;
		par[i]=v;
		dfs(i);
	}
	out[v]=t++;
}

bool is_ancestor(ll v, ll p){
	return (in[p]<=in[v]&&out[p]>=out[v]);
}

int main()
{
	fast;
	ll n,q,k,x;
	cin >> n >> q;
	fr(i,1,n){
		ll x,y;
		cin >> x >> y;
		g[x].pb(y);
		g[y].pb(x);
	}
	dfs(1);
	par[1]=1;
	while(q--){
		bool flag=1;
		cin >> k;
		set <pii> s;
		fr(i,0,k){
			cin >> x;
			s.insert(mp(dep[x],par[x]));
		}
		for(auto it1=s.begin();it1!=s.end();it1++){
			auto it2=it1;
			it2++;
			if(it2==s.end())continue;
			flag&=is_ancestor(it2->se,it1->se);
		}
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}
}
