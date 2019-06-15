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
	ll n,k,sum=0,y;
	cin >> n >> k;
	ll r[n+1]={0};
	ll lim=min(n-k+1,k);
	if(n==k)
	{
		fr(i,1,n+1)
			r[i]=1;
	}
	else if(n%2)
	{
		y=1;
		fr(i,1,min((n+1)/2,lim)+1)
			r[i]=y,y++;
		y=1;
		fr1(i,n,max((n+1)/2,n-lim+1))
			r[i]=y,y++;
		fr(i,1,n+1)
			if(!r[i])
				r[i]=lim;
	}
	else
	{
		y=1;
		fr(i,1,min(n/2,lim)+1)
			r[i]=y,y++;
		y=1;
		fr1(i,n,max(n/2,n-lim)+1)
			r[i]=y,y++;
		fr(i,1,n+1)
			if(!r[i])
				r[i]=lim;
	}
	fr(i,1,n+1)
	{
		cin >> y;
		sum+=r[i]*y;
	}
	fixd(10);
	cout << (ld)sum/(n-k+1);
}
