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
	string s;
	ll a,b,n,x=1;
	cin >> s >> a >> b;
	n=s.sz;
	vi r(n+2),l(n+2);
	l[0]=0;
	fr(i,0,n)
		l[i+1]=(l[i]*10+s[i]-'0')%a;
	r[n+1]=0;
	fr1(i,n-1,0)
	{
		r[i+1]=((s[i]-'0')*x+r[i+2])%b;
		(x*=10)%=b;
	}
	fr(i,1,n)
	{
		if(!l[i] && !r[i+1] && s[i]!='0')
		{
			cout << "YES" << endl << s.substr(0,i) << endl << s.substr(i,n-i);
			return 0;
		}
	}
	cout << "NO";
}
