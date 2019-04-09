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
    while(cin >> n)
    {
    	ll a[n][2],x=1,y=1,z=1;
    	fr(i,0,n)
    		cin >> a[i][0] >> a[i][1];
    	stack <ll> s;
    	fr(i,0,n)
    	{
    		if(a[i][0]==1)
    			s.push(a[i][1]);
    		else if(s.empty())
    		{
    			x=0;
    			break;
    		}
    		else
    		{
    			if(s.top()!=a[i][1])
    				x=0;
    			s.pop();
    		}
    	}
    	queue <ll> q;
    	fr(i,0,n)
    	{
    		if(a[i][0]==1)
    			q.push(a[i][1]);
    		else if(q.empty())
    		{
    			y=0;
    			break;
    		}
    		else
    		{
    			if(q.front()!=a[i][1])
    				y=0;
    			q.pop();
    		}
    	}
    	priority_queue <ll> p;
    	fr(i,0,n)
    	{
    		if(a[i][0]==1)
    			p.push(a[i][1]);
    		else if(p.empty())
    		{
    			z=0;
    			break;
    		}
    		else
    		{
    			if(p.top()!=a[i][1])
    				z=0;
    			p.pop();
    		}
    	}
    	if(x && !y && !z)
    		cout << "stack" << endl;
    	else if(!x && y && !z)
    		cout << "queue" << endl;
    	else if(!x && !y && z)
    		cout << "priority queue" << endl;
    	else if(!x && !y && !z)
    		cout << "impossible" << endl;
    	else
    		cout << "not sure" << endl;
	}
}
