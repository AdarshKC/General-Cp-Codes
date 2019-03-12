#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
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
	ll n;
	cin >> n;
	bool marked[n+1];
	memset(marked, false, sizeof marked);
	vi primes;
	sieve(n, marked, primes);
	fr(i,0,primes.size())
		cout << primes[i] << " ";
}
