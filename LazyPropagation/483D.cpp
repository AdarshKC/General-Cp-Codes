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
#define maxn 2000010

ll lazy[4*maxn],tree[4*maxn]; 

void push(ll node){
	tree[2*node]|=lazy[node];
	tree[2*node+1]|=lazy[node];
	lazy[2*node]|=lazy[node];
	lazy[2*node+1]|=lazy[node];
	lazy[node]=0;
}

void update(ll node, ll start, ll end, ll l, ll r, ll val){
	if(l>end || r<start || l>r)return;
	if(start==l && end==r){
		lazy[node]|=val;
		tree[node]|=val;
		return;
	}
	push(node);
	ll mid=(start+end)/2;
    update(2*node,start,mid,l,min(r,mid),val);
    update(2*node+1,mid+1,end,max(mid+1,l),r,val);
    tree[node]=tree[2*node]&tree[2*node+1];
}

ll query(ll node, ll start, ll end, ll l, ll r){
	if(l>end || r<start || l>r)return -1;
    if(l==start && end==r) return tree[node];
    push(node);
    ll mid=(start+end)/2;
    return query(2*node,start,mid,l,min(r,mid))&query(2*node+1,mid+1,end,max(mid+1,l),r);
}

void err(){
	cout << "NO\n";
	exit(0);
}

int main()
{
	fast;
	ll n,q;
    cin >> n >> q;
    viii v(q);
    fr(i,0,q){
    	cin >> v[i].fi >> v[i].se.fi >> v[i].se.se;
    	update(1,1,n,v[i].fi,v[i].se.fi,v[i].se.se);
    }
    fr(i,0,q){
    	ll x=query(1,1,n,v[i].fi,v[i].se.fi);
    	if(x!=v[i].se.se)err();
    }
    cout << "YES\n";
    fr(i,1,n+1)cout << query(1,1,n,i,i) << " ";
}
