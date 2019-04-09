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
    ll t,n,x;
    cin >> t;
    while(t--)
    {
    	ll b,sg,sb;
    	priority_queue <ll> gg,bb;
    	cin >> b >> sg >> sb;
    	fr(i,0,sg)
    	{
    		cin >> x;
    		gg.push(x);
    	}
    	fr(i,0,sb)
    	{
    		cin >> x;
    		bb.push(x);
    	}
    	while(!gg.empty() && !bb.empty())
    	{
    		ll x=0,y=0,z=b;
    		vi v,u;
    		while(!gg.empty() && x<b)
    		{
    			ll tt=gg.top();
    			v.pb(tt);
    			x++;
    			gg.pop();
    		}
    		while(!bb.empty() && y<b)
    		{
    			ll tt=bb.top();
    			u.pb(tt);
    			y++;
    			bb.pop();
    		}
    		z=min(z,min(x,y));
    		fr(i,0,z)
    		{
    			if(v[i]>u[i])
    				gg.push(v[i]-u[i]);
    			else if(u[i]>v[i])
    				bb.push(u[i]-v[i]);
    		}
    		fr(i,z,x)
    			gg.push(v[i]);
    		fr(i,z,y)
    			bb.push(u[i]);
    	}
    	if(gg.empty() && bb.empty())
    		cout << "green and blue died\n";
    	else if(bb.empty())
    	{
    		cout << "green wins\n";
    		while(!gg.empty())
    		{
    			cout << gg.top() << endl;
    			gg.pop();
    		}
    	}
    	else
    	{
    		cout << "blue wins\n";
    		while(!bb.empty())
    		{
    			cout << bb.top() << endl;
    			bb.pop();
    		}
    	}
    	if(t!=0)
    		cout << endl;
	}
}
