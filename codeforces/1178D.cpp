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
 
void sieve(ll n, bool * marked, vi &primes)
{
	fr(i,2,n+1)
	{
		if (!marked[i])
		{
			primes.push_back(i);
			for (ll j = i*i; j <= n; j += i)
				marked[j] = true;
		}
	}
}
 
int main() 
{
	ll n=1100,x,p;
	bool marked[n+1]={0};
	vi primes;
	sieve(n, marked, primes);
	cin >> x;
	if(x<3)
	{
		cout << -1;
		return 0;
	}
	fr(j,0,primes.sz)
	{
		if(primes[j]>=x)
		{
			p=primes[j];
			break;
		}
	}
	cout << p << endl;
	fr(i,1,x)
		cout << i sp i+1 << endl;
	cout << x << " 1" << endl;
	p-=x;
	ll temp=1;
	while(p>0)
	{
		if(p==1)
		{
			cout << temp sp temp+2 << endl;
			p--;
		}
		else if(p==2)
		{
			cout << temp sp temp+2 << endl ;
			cout << temp+1 sp temp+3 << endl ;
			p-=2;
		}
		else if(p>=3)
		{
			cout << temp sp temp+2 << endl ;
			cout << temp sp temp+3 << endl ;
			cout << temp sp temp+4 << endl ;
			p-=3;
			temp+=5;
		}
	}
}
