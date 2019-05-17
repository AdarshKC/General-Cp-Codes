// Solution of 1166C (codeforces)

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi vector<ll>
#define all(v) (v).begin(),(v).end()
#define pb push_back
#define mp(i,j) make_pair(i,j)
#define fi first
#define se second
#define input(a,n) fr(i,0,n)cin>>a[i]
#define output(a,n) fr(i,0,n)cout<<a[i]<<" "
#define dbg cout<<"hurr"<<endl;
#define dbg2 cout<<"hurr2"<<endl;
#define md 1000003
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

int main()
{
	fast;
	ll n,ans=0;
	cin >> n;
	vi a(n);
	input(a,n);
	fr(i,0,n)
		a[i]=abs(a[i]);
	sort(all(a));
	vi::iterator x;
    fr(i,0,n)
    {
    	x=upper_bound (all(a), 2*a[i]);
    	ll y = x - a.begin();
    	if(y>i+1)
    		ans+=(y-i-1);
    }
    cout << ans;
}
