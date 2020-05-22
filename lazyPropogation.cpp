/******************** LAZY PROPOGATION *******************/
//https://codeforces.com/contest/52/problem/C

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
#define maxn 5000010

ll arr[200002], tree[800008], lazy[800008]; 

void build(ll node, ll start, ll end) {
    if(start == end) tree[node] = arr[start];
    else {
        ll mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        tree[node] = min(tree[2*node],tree[2*node+1]);
    }
}

void update(ll node, ll start, ll end, ll l, ll r, ll val){
	if(lazy[node]!=0){
		tree[node]+=lazy[node];
		if(start!=end){
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(l>end || r<start || l>r)return;
    if(l<=start && end<=r){
    	tree[node]+=val;
		if(start!=end){
			lazy[2*node]+=val;
			lazy[2*node+1]+=val;
		}
		lazy[node]=0;
		return;
    }
    ll mid=(start+end)/2;
    update(2*node,start,mid,l,r,val);
    update(2*node+1,mid+1,end,l,r,val);
    tree[node]=min(tree[2*node],tree[2*node+1]);
}

ll query(ll node, ll start, ll end, ll l, ll r){
	if(lazy[node]!=0){
		tree[node]+=lazy[node];
		if(start!=end){
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(l>end || r<start || l>r)return inf;
    if(l<=start && end<=r) return tree[node];
    ll mid=(start+end)/2;
    return min(query(2*node,start,mid,l,r),query(2*node+1,mid+1,end,l,r));
}

int main()
{
	fast;
	ll n,m;
    cin >> n;
    fr(i,1,n+1)cin >> arr[i];
    build(1,1,n);
    cin >> m;
    cin.ignore();
    fr(i,0,m){
    	ll a[3];
    	string w;
    	getline(cin,w);
		stringstream in(w);
		in >> a[0] >> a[1];
       	if(in >> a[2]){
       		if(a[0]<=a[1]) update(1,1,n,a[0]+1,a[1]+1,a[2]);
            else {
               update(1,1,n,a[0]+1,n,a[2]);
               update(1,1,n,1,a[1]+1,a[2]);
            }
        }
      	else{ 
      		if(a[0]<=a[1]) cout << query(1,1,n,a[0]+1,a[1]+1) << endl;
       		else cout << min(query(1,1,n,a[0]+1,n),query(1,1,n,1,a[1]+1)) << endl;
       }
    }
}
