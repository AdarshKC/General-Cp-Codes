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
 
ll a[1000002], tree[4000008];
 
void update(int node, int start, int end, int idx)
{
    if(start == end)
        tree[node]++;
    else
    {
        ll mid = (start + end) / 2;
        if(start <= idx and idx <= mid)
            update(2*node, start, mid, idx);
        else
            update(2*node+1, mid+1, end, idx);
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
	fast;
	ll n,ans=0;
	cin >> n;
	fr(i,1,n+1)
		cin >> a[i];
	map <ll,ll> l,r;
	ll b[n+1];
	fr(i,1,n+1)
	{
		l[a[i]]++;
		b[i]=l[a[i]];
	}
	fr1(i,n,1)
	{
		ans+=query(1,b[i]-1,1,n,1);
		r[a[i]]++;
		update(1,1,n,r[a[i]]);
		//cout << b[i] sp ans << ", ";
	}
	cout << ans << endl;
}
