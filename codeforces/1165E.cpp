#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define ll long long int
#define input(a,n) fr(i,0,n)cin>>a[i]
#define md 998244353

int main()
{
	ll n,ans=0;
	cin >> n;
	ll a[n],b[n];
	input(a,n);
	input(b,n);
	fr(i,0,n)
		a[i]*=(i+1) * (n-i);
	sort(a,a+n);
	sort(b,b+n);
	fr(i,0,n)
		a[i]%=md,b[i]%=md;
	fr(i,0,n)
		ans = (ans + (a[n-1-i]*b[i]) %md)%md;
	cout << ans;
}
