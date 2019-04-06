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

ll n, q, a[100000], tree[400000]; 

void build(ll node, ll start, ll end)
{
    if(start == end)
        tree[node] = a[start];
    else
    {
        ll mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}

void update(int node, int start, int end, int idx, int val)
{
    if(start == end)
    {
        a[idx] += val;
        tree[node] += val;
    }
    else
    {
        ll mid = (start + end) / 2;
        if(start <= idx and idx <= mid)
            update(2*node, start, mid, idx, val);
        else
            update(2*node+1, mid+1, end, idx, val);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}

ll query(ll l, ll r, ll start, ll end, ll node)
{
	if(r<start || l>end)
		return 0;
	if(l<=start && r>=end)
		return tree[node];
	ll mid = (start+end)/2;
	return query(l,r,start,mid,2*node)+query(l,r,mid+1,end,2*node+1);
}

int main()
{
	cin >> n;
	fr(i,1,n+1)
		cin >> a[i];
	build(1,1,n);
	output(a,4*n);cout << endl;
	output(tree,4*n);cout << endl;
	cin >> q;
	while(q--)
	{
		ll l,r;
		cin >> l >> r;
		cout << query(l,r,1,n,1) << endl;
	}
	ll idx,val;
	cin >> idx >> val;
	update(1,1,n,idx,val);
	output(a,4*n);cout << endl;
	output(tree,4*n);cout << endl;
	cin >> q;
	while(q--)
	{
		ll l,r;
		cin >> l >> r;
		cout << query(l,r,1,n,1) << endl;
	}
}
