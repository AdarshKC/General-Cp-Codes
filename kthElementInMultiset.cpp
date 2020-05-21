//https://codeforces.com/contest/1354/problem/D

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll int
#define ld long double
#define vi vector<ll>
#define pb push_back
#define mp(i,j) make_pair(i,j)
#define fi first
#define se second
#define input(a,n) fr(i,0,n)cin>>a[i]
#define output(a,n) fr(i,0,n)cout<<a[i]<<" "
#define dbg cout<<"hurr"<<endl;
#define dbg2 cout<<"hurr2"<<endl;
#define md 1000000007
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

ll n, x, q, a[1000010], tree[4000040]; 

void build(ll node, ll start, ll end){
    if(start == end) tree[node] = a[start];
    else{
        ll mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}

void update(ll node, ll start, ll end, ll idx, ll val){
    if(start == end){
        a[idx] += val;
        tree[node] += val;
    }
    else{
        ll mid = (start + end) / 2;
        if(idx <= mid) update(2*node, start, mid, idx, val);
        else update(2*node+1, mid+1, end, idx, val);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}

ll query(ll start, ll end, ll node, ll pos){
	if(start==end)return start;
	ll mid = (start+end)/2;
	if(tree[2*node]>=pos) return query(start,mid,2*node,pos);
	else return query(mid+1,end,2*node+1,pos-tree[2*node]);
}

int main()
{
	fast;
	cin >> n >> q;
	fr(i,1,n+1){
		cin >> x;
		a[x]++;
	}
	build(1,1,n);
	while(q--){
		cin >> x;
		if(x>0)update(1,1,n,x,1);
		else{
			x=query(1,n,1,-x);
			update(1,1,n,x,-1);
		} 
	}
	if(tree[1]==0)cout << 0;
	else cout << query(1,n,1,1);
}
