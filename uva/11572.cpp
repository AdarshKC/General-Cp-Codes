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

int main() 
{
    fast;
    ll t,n,x;
    cin >> t;
    while(t--)
    {
    	ll ans=0,temp=0;
    	cin >> n;
    	map <ll,ll> m;
    	fr(i,0,n)
    	{
    		cin >> x;
    		if(m.find(x)!=m.end() && m[x]>=temp)
    		{
    			if(ans<i-temp)
    				ans=i-temp;
    			temp=m[x]+1;
    		}
    		m[x]=i;
    	}
    	if(ans<n-temp)
    		ans=n-temp;
    	cout << ans << endl;
     }
}
