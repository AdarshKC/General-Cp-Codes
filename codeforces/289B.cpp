#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; ++i)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi vector<ll>
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
#define inf 100000000000000000
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);
#define MAX 15000005

int main() 
{
    ll n,m,d;
    cin >> n >> m >> d;
    n*=m;
    ll a[n];
    input(a,n);
    sort(a,a+n);
    if(n%2==0)
    {
        ll x=a[n/2],y=a[(n+1)/2],t1=0,t2=0,w=0;
        fr(i,0,n)
        {
            if(abs(a[i]-x)%d!=0 || abs(a[i]-y)%d!=0)
                w=1;
            t1+=abs(a[i]-x)/d;
            t2+=abs(a[i]-y)/d;
        }
        if(w)
            cout << -1;
        else
            cout << min(t1,t2);
    }
    else
    {
        ll x=a[n/2],t=0,w=0;
        fr(i,0,n)
        {
            if(abs(a[i]-x)%d!=0)
                w=1;
            t+=abs(a[i]-x)/d;
        }
        if(w)
            cout << -1;
        else
            cout << t;
    }
}
