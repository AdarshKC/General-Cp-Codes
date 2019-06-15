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
	ll n,ans=0;
	cin >> n;
	ll arr[n];
	input(arr,n);
	sort(arr, arr + n);
	fr1(j,n-2,0)
	{
		if (ans >= arr[j])
			break; 
		if (arr[j] == arr[j + 1]) 
			continue; 
		for (ll i = 2 * arr[j]; i <= arr[n - 1] + arr[j]; i += arr[j])
		{ 
			ll ind = lower_bound(arr, arr + n, i) - arr; 
			ans = max(ans, arr[ind - 1] % arr[j]); 
		} 
	}
	cout << ans; 
}
