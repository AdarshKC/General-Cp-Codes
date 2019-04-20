#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll int
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
	string s;
	cin >> s;
	ll n=s.size();
	fr(i,0,n-1)
	{
		if(s[i]=='A' && s[i+1]=='B')
		{
			fr(j,i+2,n-1)
			{
				if(s[j]=='B' && s[j+1]=='A')
				{
					cout << "YES";
					return 0;
				}		
			}
		}
		if(s[i+1]=='A' && s[i]=='B')
		{
			fr(j,i+2,n-1)
			{
				if(s[j+1]=='B' && s[j]=='A')
				{
					cout << "YES";
					return 0;
				}		
			}
		}
	}
	cout << "NO";
}
