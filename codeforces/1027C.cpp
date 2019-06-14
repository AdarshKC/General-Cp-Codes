#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define ll long long int
#define ld long double
#define pb push_back
#define input(a,n) fr(i,0,n)cin>>a[i]
#define sp << " " <<

int main()
{
	fast;
	ll z;
	cin >> z;
	fr(i,0,z)
	{
		vector <ld> v;
		ll n,nn=0;
		cin >> n;
		ll a[n];
		input(a,n);
		sort(a,a+n);
		fr(i,0,n-1)
		{
			if(a[i+1]==a[i])
			{
				v.pb(a[i]);
				nn++;
				i++;
			}
		}
		ll l=v[0],b=v[1];
		fr(i,2,nn)
		{
			ll lll=v[i-1],bbb=v[i];
			if((ld)lll/bbb+(ld)bbb/lll<(ld)l/b+(ld)b/l)
			{
				l=lll;
				b=bbb;
			}
		}
		cout << l sp l sp b sp b << endl;
	}
}
