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
#define N 200005

ll par[N],child[N];
vi v[N],pre;

ll calculateChilds(ll x)
{
	ll total=0;
	pre.pb(x);
	fr(i,0,v[x].sz)
		if(par[x]!=v[x][i])
			total+=calculateChilds(v[x][i]);
	child[x]=total;
	return total+1;
}

int main()
{
    fast;
    ll n,x,q,y;
    cin >> n >> q;
    par[1]=-1;
    fr(i,2,n+1)
    {
    	cin >> x;
    	v[x].pb(i);
    	v[i].pb(x);
    	par[i]=x;
    }
    calculateChilds(1);
    map<ll,ll> m;
    fr(i,0,pre.sz)
    	m[pre[i]]=i;
    while(q--)
    {
    	cin >> x >> y;
    	if(child[x]+1<y)
    		cout << -1 << endl;
    	else
    		cout << pre[m[x]+y-1] << endl;
    }
}
