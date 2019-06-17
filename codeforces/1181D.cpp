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
	ll n,m,q,x,last=1;
	cin >> n >> m >> q;
	ll a[n+1],can[m+1]={0};
	fr(i,0,n)
	{
		cin >> x;
		a[i+1]=can[x]*m+x;
		can[x]++;
	}
	sort(a+1,a+1+n);
	fr(i,1,n+1)
		a[i]-=i;
	while(q--)
	{
		cin >> x;x-=n;
		if(x<=a[n])
			x+=lower_bound(a+1,a+n+1,x)-a-1;
		else
			x+=n;
		cout << (x-1)%m+1 << endl;
	}		
}
