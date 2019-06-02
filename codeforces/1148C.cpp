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
#define all(v) (v).begin(),(v).end()
#define mp(i,j) make_pair(i,j)
#define fi first
#define se second
#define input(a,n) fr(i,0,n)cin>>a[i]
#define output(a,n) fr(i,0,n)cout<<a[i]<<" "
#define dbg cout<<"hurr"<<endl;
#define dbg2 cout<<"hurr2"<<endl;
#define md 1000000007
#define inf 100000000000000000
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

ll a[300002];
vector <pair<ll,ll> > v;

void sp(ll x, ll y)
{
	ll temp=a[x];
	a[x]=a[y];
	a[y]=temp;
	v.pb(mp(x,y));
}

int main() 
{
    fast;
    ll n;
    cin >> n;
    fr(i,1,n+1)
    	cin >> a[i];
    fr(i,1,n+1)
    {
    	if(a[i]==i)
    		continue;
    	if(2*(a[i]-i)>=n)
    		sp(i,a[i]);
    	else
    	{
    		ll temp=a[i];
    		if(i<=n/2)
    		{
    			sp(i,n);
    			if(temp<=n/2)
    				sp(n,temp);
    			else
    			{
    				sp(temp,1);
    				sp(1,n);
    				sp(temp,1);	
    			}
    			sp(i,n);
    		}
    		else
    		{
    			sp(i,1);
    			if(i>n/2)
    				sp(1,temp);
    			else
    			{
    				sp(temp,n);
    				sp(1,n);
    				sp(temp,n);
    			}
    			sp(i,1);
    		}
    	}
    	i--;
    }
    cout << v.size() << endl;
    fr(i,0,v.size())
    	cout << v[i].fi << " " << v[i].se << endl;
}
