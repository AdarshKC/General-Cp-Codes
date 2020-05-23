#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define ll int
#define maxn 100010
#define bit_ 25

ll n,q,arr[maxn][bit_],lazy[4*maxn][bit_],tree[4*maxn][bit_];

void build(ll node, ll start, ll end, ll id) {
    if(start == end) tree[node][id] = arr[start][id];
    else {
        ll mid = (start + end) / 2;
        build(2*node, start, mid, id);
        build(2*node+1, mid+1, end, id);
        tree[node][id] = tree[2*node][id]+tree[2*node+1][id];
    }
}

void push(ll node, ll l ,ll r, ll id){
	ll mid=(l+r)/2;
	ll len1=(mid-l+1),len2=(r-mid);	
	if(lazy[node][id]%2){
		tree[2*node][id]=(len1-tree[2*node][id]);
		tree[2*node+1][id]=(len2-tree[2*node+1][id]);
	}
	lazy[2*node][id]+=lazy[node][id];
	lazy[2*node+1][id]+=lazy[node][id];
	lazy[node][id]=0;
}

void update(ll node, ll start, ll end, ll l, ll r, ll val, ll id){
	if(l>end || r<start || l>r)return;
	if(start==l && end==r){
		lazy[node][id]+=val;
		tree[node][id]=(end-start+1)-tree[node][id];
		return;
	}
	push(node,start,end,id);
	ll mid=(start+end)/2;
    update(2*node,start,mid,l,min(r,mid),val,id);
    update(2*node+1,mid+1,end,max(mid+1,l),r,val,id);
    tree[node][id]=tree[2*node][id]+tree[2*node+1][id];
}

ll query(ll node, ll start, ll end, ll l, ll r, ll id){
	if(l>end || r<start || l>r)return 0;
    if(l==start && end==r) return tree[node][id];
    push(node,start,end,id);
    ll mid=(start+end)/2;
    return query(2*node,start,mid,l,min(r,mid),id)+
    	query(2*node+1,mid+1,end,max(mid+1,l),r,id);
}

int main()
{
	fast;
    cin >> n;
    fr(i,1,n+1){
    	ll x;
    	cin >> x;
    	fr(j,0,bit_)if(x&(1LL<<j))arr[i][j]=1;
    }
    fr(j,0,bit_)build(1,1,n,j);
    cin >> q;
    while(q--){
    	ll type;
    	cin >> type;
    	if(type==1){
    		ll l,r,ans=0;
    		cin >> l >> r;
    		fr(j,0,bit_)ans+=(1LL<<j)*query(1,1,n,l,r,j);
    		cout << ans << endl;
    	}
    	else{
    		ll l,r,x;
    		cin >> l >> r >> x;
    		fr(j,0,bit_)if((1LL<<j)&x)update(1,1,n,l,r,1,j);
    	}
    }
}
