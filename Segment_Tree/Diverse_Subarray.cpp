// https://codingcompetitions.withgoogle.com/kickstart/round/0000000000050eda/00000000001198c1

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

ll a[100002],n,s,t;
pair <ll,ll> tree[400008];

void build(ll node, ll start, ll end)
{
    if(start == end)
    {
        tree[node].se=tree[node].fi=a[start];
        if(tree[node].se<0)tree[node].se=0;
    }
    else
    {
        ll mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        tree[node].fi = tree[2*node].fi + tree[2*node+1].fi;
        tree[node].se = max(tree[2*node].se,tree[2*node].fi+tree[2*node+1].se);
    }
}

void update(ll node, ll start, ll end, ll idx, ll val)
{
    if(start == end)
    {
        a[idx] = val;
        tree[node].fi=val;
        tree[node].se=val;
        if(tree[node].se<0)tree[node].se=0;
    }
    else
    {
        ll mid = (start + end) / 2;
        if(start <= idx and idx <= mid)
            update(2*node, start, mid, idx, val);
        else
            update(2*node+1, mid+1, end, idx, val);
        tree[node].fi = tree[2*node].fi + tree[2*node+1].fi;
        tree[node].se = max(tree[2*node].se,tree[2*node].fi+tree[2*node+1].se);
    }
}

pair<ll,ll> query(ll l, ll r, ll start, ll end, ll node)
{
    if(r<start || l>end)
        return mp(0,0);//
    if(l<=start && r>=end)
        return tree[node];
    ll mid = (start+end)/2;
    pair <ll,ll> t1=query(l,r,start,mid,2*node);
    pair <ll,ll> t2=query(l,r,mid+1,end,2*node+1);
    return mp(t1.fi+t2.fi,max(t1.se,t1.fi+t2.se));
}

void func(ll arr[],ll tt)
{
    queue<ll> v[100010];
    map <ll,ll> m;
    fr(i,1,n+1)a[i]=0;
    fr(i,1,4*n+1)tree[i].fi=tree[i].se=0;
    fr(i,1,n+1)
    {
        if(m[arr[i]]<s)
        {
            m[arr[i]]++;
            a[i]=1;
        }
        else
        {
            if(m[arr[i]]==s)
            {
                m[arr[i]]++;
                a[i]=-s;
            }
            v[arr[i]].push(i);
        }
    }
    build(1,1,n);
    ll ans=query(1,n,1,n,1).se,idx,val;
    fr(i,2,n+1)
    {
        if(!v[arr[i-1]].empty())
        {
            idx=v[arr[i-1]].front();
            val=1;
            update(1,1,n,idx,val);
            v[arr[i-1]].pop();
        }
        if(!v[arr[i-1]].empty())
        {
            idx=v[arr[i-1]].front();
            val=-s;
            update(1,1,n,idx,val);
        }
        ans=max(ans,query(i,n,1,n,1).se);
    }
    cout << "Case #" << tt << ": " << ans << endl;
}


int main()
{
    fast;
    cin >> t;
    fr(tt,1,t+1)
    {
        cin >> n >> s;
        ll arr[n+1];
        fr(i,1,n+1)
            cin >> arr[i];
        func(arr,tt);
    }
}
