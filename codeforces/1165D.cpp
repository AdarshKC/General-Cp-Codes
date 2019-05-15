#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define ll long long int
#define vi vector<ll>
#define pb push_back
#define input(a,n) fr(i,0,n)cin>>a[i]

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,cnt = 0;
        cin >> n;
        ll a[n];
        input(a,n);
        sort(a,a+n);
        ll ans=a[0]*a[n-1];
        vi v;
        for (ll i = 2; i <= sqrt(ans); i++) 
    	{	
        	if (ans % i == 0) 
        	{ 
        		v.pb(i);
            	if (ans / i != i) 
            		v.pb(ans/i); 
        	} 
    	}
    	sort(v.begin(),v.end());
    	if(n!=v.size())
    		cnt=1;
    	else
    	{
    		fr(i,0,n)
    			if(a[i]!=v[i])
    				cnt=1;
    	}
        if(!cnt)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
}
