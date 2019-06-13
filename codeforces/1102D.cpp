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
	string s;
	cin >> s;
	ll a=0,b=0,c=0;
	fr(i,0,n)
	{
		if(s[i]=='0')
			a++;
		if(s[i]=='1')
			b++;
		if(s[i]=='2')
			c++;
	}
	if(a<n/3)
	{
		if(b>n/3 && c>n/3)
		{
			fr(i,0,n)
			{
				if(a==n/3)
					break;
				if(s[i]=='1' && b>n/3)
				{
					s[i]='0';
					a++;
					b--;
				}
				if(s[i]=='2' && c>n/3)
				{
					s[i]='0';
					a++;
					c--;
				}
			}
		}
		else if(b>n/3)
		{
			fr(i,0,n)
			{
				if(a==n/3)
					break;
				if(s[i]=='1')
				{
					s[i]='0';
					a++;
					b--;
				}
			}
		}
		else
		{
			fr(i,0,n)
			{
				if(a==n/3)
					break;
				if(s[i]=='2')
				{
					s[i]='0';
					a++;
					c--;
				}
			}
		}
	}
	if(c<n/3)
	{
		if(a>n/3 && b>n/3)
		{
			fr1(i,n-1,0)
			{
				if(c==n/3)
					break;
				if(s[i]=='0' && a>n/3)
				{
					s[i]='2';
					c++;
					a--;
				}
				if(s[i]=='1' && b>n/3)
				{
					s[i]='2';
					c++;
					b--;
				}
			}
		}
		else if(b>n/3)
		{
			fr1(i,n-1,0)
			{
				if(c==n/3)
					break;
				if(s[i]=='1')
				{
					s[i]='2';
					c++;
					b--;
				}
			}
		}
		else
		{
			fr1(i,n-1,0)
			{
				if(c==n/3)
					break;
				if(s[i]=='0')
				{
					s[i]='2';
					c++;
					a--;
				}
			}
		}
	}
	if(b<n/3)
	{
		if(a>n/3 && c>n/3)
		{
			fr(i,0,n)
			{
				if(b==n/3)
					break;
				if(s[i]=='2' && c>n/3)
				{
					s[i]='1';
					b++;
					c--;
				}
			}
			fr1(i,n-1,0)
			{
				if(b==n/3)
					break;
				if(s[i]=='0' && a>n/3)
				{
					s[i]='1';
					b++;
					a--;
				}
			}
		}
		else if(c>n/3)
		{
			fr(i,0,n)
			{
				if(b==n/3)
					break;
				if(s[i]=='2')
				{
					s[i]='1';
					b++;
					c--;
				}
			}
		}
		else
		{
			fr1(i,n-1,0)
			{
				if(b==n/3)
					break;
				if(s[i]=='0')
				{
					s[i]='1';
					b++;
					a--;
				}
			}
		}
	}
	cout << s;
}
