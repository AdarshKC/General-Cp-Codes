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

struct ds
{
    ll a,l,r;
};

string s;
ds tree[4000008],emp;

ds combine(ds x,ds y)
{
    ds temp;
    temp.a=x.a+y.a+2*min(x.r,y.l);
    temp.l=x.l+y.l-min(x.r,y.l);
    temp.r=x.r+y.r-min(x.r,y.l);
    return temp;
}

void build(ll node, ll start, ll end)
{
    if(start == end)
    {
        ds temp;
        temp.a=temp.l=temp.r=0;
        if(s[start-1]=='(')
            temp.r=1;
        else
            temp.l=1;
        tree[node]=temp;
    }
    else
    {
        ll mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        tree[node]=combine(tree[2*node],tree[2*node+1]);
    }
}

ds query(ll l, ll r, ll start, ll end, ll node)
{
    if(r<start || l>end)
        return emp;
    if(l<=start && r>=end)
        return tree[node];
    ll mid = (start+end)/2;
    ds x=query(l,r,start,mid,2*node);
    ds y=query(l,r,mid+1,end,2*node+1);
    return combine(x,y);;
}

int main()
{
    fast;
    cin >> s;
    ll n=s.sz,q,l,r;
    emp.a=emp.l=emp.r=0;
    build(1,1,n);
    cin >> q;
    while(q--)
    {
        cin >> l >> r;
        cout << query(l,r,1,n,1).a << endl;
    }
}
