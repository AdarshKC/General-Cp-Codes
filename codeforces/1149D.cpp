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
    ll t;
    cin >> t;
    while(t--)
    {
    	ll n,k;
    	cin >> n >> k;
    	if(k%3==0)
    	{
    		if(n>k)
    			n%=(k+1);
	    	if(n%3==0 && n!=k)
		    	cout << "Bob\n";
		    else
		    	cout << "Alice\n";
    	}
    	else
    	{
    		if(n%3==0)
    			cout << "Bob\n";
    		else
    			cout << "Alice\n";
    	}
    }
}
