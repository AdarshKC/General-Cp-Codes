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

int main() 
{
    fast;
    ll n,u=0,l=1;
    cin >> n;
    ll a[n],b[n];
    input(a,n);
    input(b,n);
    pair <ll,ll> p[n];
    p[0].fi=a[0];
    p[0].se=b[0];
    p[1].fi=a[1]+b[0];
    p[1].se=b[1]+a[0];
    fr(i,2,n)
    {
    	p[i].fi=a[i]+max(p[i-1].se,p[i-2].se);
    	p[i].se=b[i]+max(p[i-1].fi,p[i-2].fi);
    }
    cout << max(p[n-1].fi,p[n-1].se);
}
