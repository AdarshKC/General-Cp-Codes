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
#define fixd(x) cout << fixed << setprecision(x);

int main() 
{
    fast;
    ll n;
    while(1)
    {
    	ll ans=0,x;
    	cin >> n;
    	if(n==0)
    		return 0;
    	priority_queue<ll, vector<ll>, greater<ll> > q;
    	while(n--)
    	{
    		cin >> x;
    		q.push(x);
    	}
    	while(q.size()>1)
    	{
    		ll a,b;
    		a=q.top();
    		q.pop();
    		b=q.top();
    		q.pop();
    		q.push(a+b);
    		ans+=a+b;
    	}
    	cout << ans << endl;
	}
}
