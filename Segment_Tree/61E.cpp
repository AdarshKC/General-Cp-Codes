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

ll a[1000002], tree[4000008],tree1[4000008];
unordered_map <ll,ll> m;

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

void update1(int node, int start, int end, int idx)
{
    if(start == end)
        tree1[node]++;
    else
    {
        ll mid = (start + end) / 2;
        if(start <= idx and idx <= mid)
            update1(2*node, start, mid, idx);
        else
            update1(2*node+1, mid+1, end, idx);
        tree1[node] = tree1[2*node] + tree1[2*node+1];
    }
}

ll query1(ll l, ll r, ll start, ll end, ll node)
{
    if(r<start || l>end)
        return 0;
    if(l<=start && r>=end)
        return tree1[node];
    ll mid = (start+end)/2;
    return query1(l,r,start,mid,2*node)+query1(l,r,mid+1,end,2*node+1);
}

int main()
{
    fast;
    ll n,id=1,ans=0;
    cin >> n;
    ll b[n],c[n],d[n];
    fr(i,1,n+1)
    {
        cin >> a[i];
        b[i-1]=a[i];
    }
    sort(b,b+n);
    fr(i,0,n)
    {
        m[b[i]]=id;
        id++;
    }
    fr(i,1,n+1)
    {
        c[i-1]=query(m[a[i]]+1,n,1,n,1);
        update(1,1,n,m[a[i]]);
    }
    fr1(i,n,1)
    {
        d[i-1]=query1(1,m[a[i]]-1,1,n,1);
        update1(1,1,n,m[a[i]]);
    }
    fr(i,0,n)
    {
        //cout << c[i] sp d[i] << ", ";
        ans+=c[i]*d[i];
    }
    cout << ans;
}
