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
	ll q,x,l=0,r=0;
	cin >> q;
	map <ll,ll> m1;
	map <ll,ll> m2;
	char c;
	while (q--)
	{
		cin >> c >> x;
		if(c=='L')
		{
			m1[x]=l;
			m2[x]=0;
			l++;
		}
		if(c=='R')
		{
			m1[x]=r;
			m2[x]=1;
			r++;
		}
		if(c=='?')
		{
			if(m2[x]==0)
			{
				ll a=l-m1[x]-1;
				ll b=r+m1[x];
				cout << min(a,b) << endl;
			}
			else
			{
				ll a=r-m1[x]-1;
				ll b=l+m1[x];
				cout << min(a,b) << endl;
			}
		}
	}
}
