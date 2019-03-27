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

vi ans;
ll mi;

void fuc(vi v,ll t, ll s,ll i,ll a[],ll n) 
{
    if(s>t)
        return;
    if(t-s<mi)
    {
        ans=v;
        mi=t-s;
    }
    if(i==n)
        return;
    fuc(v,t,s,i+1,a,n);
    v.pb(a[i]);
    s+=a[i];
    fuc(v,t,s,i+1,a,n);
}

int main() 
{
    fast;
    ll t,n;
    while(cin >> t)
    {
        ans.clear();
        mi=t;
        cin >> n;
        ll a[n],tt=0;
        input(a,n);
        vi v;
        fuc(v,t,0,0,a,n);
        fr(i,0,ans.size())
        {
            tt+=ans[i];
            cout << ans[i] << " ";
        }
        cout << "sum:" << tt << endl;
    }
}
