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
#define md 998244353
#define inf 999999999999999999
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);
#define sz size()
 
int main() 
{
    fast;
    ll n,c=0,ans=0,m=1;
    cin >> n;
    ll a[n];
    input(a,n);
    while(1)
    {
    	ll w=0;
    	fr(j,0,n)
    		if(a[j]!=0)
    			w=1;
    	if(!w)
    		break;
    	ll r=0;
    	fr(j,0,n)
    	{
    		r+=(a[j]%10)%md;
    		a[j]/=10;
    	}
    	r=(r*n)%md;
    	ll temp=((((r*10)%md)*m)%md+(r*m)%md)%md;
    	m=(m*100)%md;
    	ans=(temp+ans)%md;
    }
    cout << ans;
}
