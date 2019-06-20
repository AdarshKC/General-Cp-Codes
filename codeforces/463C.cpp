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
	ll n;
	cin >> n;
	ll arr[n+1][n+1],d[n+1][n+1],e[n+1][n+1],ans[n+1][n+1];
	fr(i,1,n+1)
	{
		fr(j,1,n+1)
		{
			cin >> arr[i][j];
			e[i][j]=d[i][j]=arr[i][j];
		}
	}
	fr(i,1,n)
	{
		ll a=2,b=i+1;
		while(a<n+1 && b<n+1)
		{
			d[a][b]+=d[a-1][b-1];
			a++,b++;
		}
		ll x=1,y=i;
		while(x<n && y<n)
		{
			d[x][y]=d[a-1][b-1];
			x++,y++;
		}
	}
	fr(i,2,n)
	{
		ll a=i+1,b=2;
		while(a<n+1 && b<n+1)
		{
			d[a][b]+=d[a-1][b-1];
			a++,b++;
		}
		ll x=i,y=1;
		while(x<n && y<n)
		{
			d[x][y]=d[a-1][b-1];
			x++,y++;
		}
	}
	fr(i,1,n)
	{
		ll a=n-1,b=i+1;
		while(a>0 && b<n+1)
		{
			e[a][b]+=e[a+1][b-1];
			a--,b++;
		}
		ll x=n,y=i;
		while(x>1 && y<n)
		{
			e[x][y]=e[a+1][b-1];
			x--,y++;
		}
	}
	fr1(i,n-1,2)
	{
		ll a=i-1,b=2;
		while(a>0 && b<n+1)
		{
			e[a][b]+=e[a+1][b-1];
			a--,b++;
		}
		ll x=i,y=1;
		while(x>1 && y<n)
		{
			e[x][y]=e[a+1][b-1];
			x--,y++;
		}
	}
	fr(i,1,n+1)
		fr(j,1,n+1)
			ans[i][j]=d[i][j]+e[i][j]-arr[i][j];
	ll a=-1,b=-1,x1,y1,x2,y2;
	fr(i,1,n+1)
	{
		fr(j,1,n+1)
		{
			if((i+j)%2==0 && a<ans[i][j])
				x1=i,y1=j,a=ans[i][j];
			if((i+j)%2==1 && b<ans[i][j])
				x2=i,y2=j,b=ans[i][j];
		}
	}
	cout << a+b << endl << x1 sp y1 sp x2 sp y2;
}
