#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define fr(i,a,b) for(ll i=a; i<b; i++)

int main() 
{ 
	fast;
	ll n,ans=0,x,ma=0;
	cin >> n;
	ll c[100001]={0},f[100001]={0};
	fr(i,1,n+1)
	{
		cin >> x;
		c[x]++;
		if(c[x]!=1)
			f[c[x]-1]--;
		f[c[x]]++;
		ma=max(ma,c[x]);
		if( c[x]==i || f[c[x]]==i || f[ma]*ma==i-1 || f[ma]+f[ma-1]*(ma-1)==i-ma+1 )
			ans=i;
	}
	cout << ans;
}
