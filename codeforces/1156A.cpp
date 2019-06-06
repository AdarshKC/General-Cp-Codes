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
#define N 200005
#define inf 100000000000000000
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

int main() 
{
    fast;
	ll n,ans=0;
	cin >> n;
	ll a[n];
	input(a,n);
	fr(i,1,n)
	{
		if(a[i-1]==2 && a[i]==3 || a[i-1]==3 && a[i]==2)
		{
			cout << "Infinite";
			return 0;
		}
		else
			ans+=abs(a[i]-a[i-1])+2;
		if(i>1 && a[i-2]==3 && a[i]==2)
			ans--;
	}
	cout << "Finite" << endl << ans;
}
