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
	ll n,s,l=0,r=0;
	cin >> n >> s;
	ll a[n][2];
	fr(i,0,n)
	{
		cin >> a[i][0] >> a[i][1];
		l+=a[i][0];
		r+=a[i][1];
	}
	if(s<l || s>r)
		cout << "NO";
	else
	{
		cout << "YES\n";
		ll rr=s-l;
		fr(i,0,n)
		{
			if(rr<=0)
				break;
			if(a[i][1]-a[i][0]<=rr)
			{
				rr-=a[i][1]-a[i][0];
				a[i][0]=a[i][1];
			}
			else
			{
				a[i][0]+=rr;
				rr=0;
			}
		}
		fr(i,0,n)
			cout << a[i][0] << " ";
	}
}
