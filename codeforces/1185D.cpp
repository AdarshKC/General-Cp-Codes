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
	map <ll,ll> m,id;
	ll a[n];
	fr(i,0,n)
	{
		cin >> a[i];
		id[a[i]]=i+1;
	}
	if(n==2 || n==3)
	{
		cout << 1;
		return 0;
	}
	sort(a,a+n);
	fr(i,2,n)
		m[a[i]-a[i-1]]++;
	if(m.sz==1)
	{
		cout << id[a[0]];
		return 0;
	}
	m.clear();
	fr(i,1,n-1)
		m[a[i]-a[i-1]]++;
	if(m.sz==1)
	{
		cout << id[a[n-1]];
		return 0;
	}
	m.clear();
	fr(i,1,n)
		m[a[i]-a[i-1]]++;
	if(m.sz>3)
	{
		cout << -1;
		return 0;
	}
	if(m.sz==3)
	{
		map <ll,ll> :: iterator it=m.begin();
		ll x[3];
		x[0]=it->fi;
		it++;
		x[1]=it->fi;
		it++;
		x[2]=it->fi;
		if(m[x[0]]!=1 || m[x[1]]!=1 || x[0]+x[1]!=x[2])
		{
			cout << -1;
			return 0;
		}
		fr(i,1,n-1)
		{
			if((a[i]-a[i-1]==x[0] && a[i+1]-a[i]==x[1])||(a[i]-a[i-1]==x[1] && a[i+1]-a[i]==x[0]))
			{
				cout << id[a[i]];
				return 0;
			}
		}
		cout << -1;
		return 0;
	}
	if(m.sz==2)
	{
		map <ll,ll> :: iterator it=m.begin();
		ll x[2];
		x[0]=it->fi;
		it++;
		x[1]=it->fi;
		sort(x,x+2);
		if(x[0]==0 && m[x[0]]==1)
		{
			fr(i,1,n)
			{
				if(a[i]-a[i-1]==0)
				{
					cout << id[a[i]];
					return 0;
				}
			}
		}
		if(x[0]==0 && m[x[0]]!=1)
		{
			cout << -1 ;
			return 0;
		}
		if(m[x[0]]!=2 || 2*x[0]!=x[1])
		{
			cout << -1;
			return 0;
		}
		fr(i,1,n-1)
		{
			if(a[i]-a[i-1]==x[0] && a[i+1]-a[i]==x[0])
			{
				cout << id[a[i]];
				return 0;
			}
		}
		cout << -1;
		return 0;
	}
}
