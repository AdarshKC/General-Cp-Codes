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
#define input(a,n) fr(i,0,n)cin>>arr[i]
#define output(a,n) fr(i,0,n)cout<<arr[i]<<" "
#define dbg cout<<"hurr"<<endl;
#define dbg2 cout<<"hurr2"<<endl;
#define md 1000000007
#define inf 999999999999999999
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);
#define sz size()
 
ll n, q, a[150002], tree[600008];
 
ll power(ll a,ll b)
{
    ll res = 1;
    while (b > 0) 
    {
        if (b & 1)
            res = res * a;
        a=a*a;
        b=b/2;
    }
    return res;
}
 
ll build(ll node, ll start, ll end)
{
    if(start == end)
    {
        tree[node] = a[start];
        return 0;
    }
    else
    {
        ll mid = (start + end) / 2;
        ll x=build(2*node, start, mid);
        x=build(2*node+1, mid+1, end);
        if(!x)
        	tree[node] = (tree[2*node] | tree[2*node+1]);
        else
        	tree[node] = (tree[2*node] ^ tree[2*node+1]);
        return !x;
    }
}
 
ll update(int node, int start, int end, int idx, int val)
{
    if(start == end)
    {
        a[idx] = val;
        tree[node] = val;
        return 0;
    }
    else
    {
        ll mid = (start + end) / 2,x;
        if(start <= idx and idx <= mid)
            x=update(2*node, start, mid, idx, val);
        else
            x=update(2*node+1, mid+1, end, idx, val);
        if(!x)
        	tree[node] = (tree[2*node] | tree[2*node+1]);
        else
        	tree[node] = (tree[2*node] ^ tree[2*node+1]);
        return !x;
    }
}
 
int main()
{
	cin >> n >> q;
	n=power(2,n);
	fr(i,1,n+1)
		cin >> a[i];
	build(1,1,n);
	while(q--)
	{
		ll idx,val;
		cin >> idx >> val;
		update(1,1,n,idx,val);
		cout << tree[1] << endl;
	}
}
