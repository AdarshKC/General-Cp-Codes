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
    ll n,x;
    while(1)
    {
    	cin >> n;
    	if(n==0)
    		break;
    	map <vi,ll> m;
    	fr(i,0,n)
    	{
    		ll z=5;
    		vi v;
    		while(z--)
    		{
    			cin >> x;
    			v.pb(x);
    		}
    		sort(v.begin(),v.end());
    		if(m.find(v)==m.end() || i==0)
    			m[v]=1;
    		else
    			m[v]++;
    	}
    	ll temp=0,ans=0;
	  for(map<vi,ll> :: iterator it=m.begin();it!=m.end();it++)
		if(temp<(it->second))
    			temp=it->second;
    	for(map<vi,ll> :: iterator it=m.begin();it!=m.end();it++)
		if(temp==(it->second))
    			ans++;
    	cout << ans*temp << endl;
	}
}
