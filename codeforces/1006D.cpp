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
	string s,t;
	cin >> s >> t;
	fr(i,0,n/2)
	{
		char a=s[i],b=s[n-1-i],c=t[i],d=t[n-1-i];
		if(a==c && b==d || a==d && b==c || a==b && c==d)
			continue;
		if(a==c || a==d || b==c || b==d || c==d)
			ans+=1;
		else
			ans+=2;
	}
	if(s[n/2]!=t[n/2] && n%2)
		ans++;
	cout << ans;
}
