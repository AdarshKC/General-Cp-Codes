// https://www.codechef.com/JUNE19A/problems/INTRPATH/
// works for n,q<=1000

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
#define input(a,n) fr(i,0,n)cin>>arr[i]
#define output(a,n) fr(i,0,n)cout<<arr[i]<<" "
#define dbg cout<<"hurr"<<endl;
#define dbg2 cout<<"hurr2"<<endl;
#define md 1000000007
#define inf 999999999999999999
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);
#define sz size()

stack <ll> ans;
ll f,c;
vi a[300005];

void path(ll u,ll v,ll vis[])
{
	if(u==v)
	{
		f=1;
		return;
	}
	fr(i,0,a[u].sz)
	{
		if(!vis[a[u][i]])
		{
			ans.push(a[u][i]);
			vis[a[u][i]]=1;
			path(a[u][i],v,vis);
			if(f)
				break;
			ans.pop();
		}
	}
}

void count(ll x,ll viss [])
{
	c++;
	fr(i,0,a[x].sz)
	{
		if(!viss[a[x][i]])
		{
			viss[a[x][i]]=1;
			count(a[x][i],viss);
		}
	}
	return;
}

ll findProductSum(ll A[], ll n) 
{ 
    ll array_sum = 0; 
    fr(i,0,n)
        array_sum = array_sum + A[i]; 
    ll array_sum_square = array_sum * array_sum,individual_square_sum = 0; 
    fr(i,0,n)
        individual_square_sum += A[i]*A[i]; 
    return (array_sum_square - individual_square_sum)/2; 
}

int main() 
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
    	ll n,q,u,v;
    	vii use;
    	map <pair<ll,ll>,ll> tle;
    	cin >> n >> q;
    	fr(i,1,n+1)
    		a[i].clear();
    	fr(i,0,n-1)
    	{
    		cin >> u >> v;
    		a[u].pb(v);
    		a[v].pb(u);
    		use.pb(mp(u,v));
    		use.pb(mp(v,u));
    	}
    	fr(i,0,use.sz)
    	{
    		ll viss[n+1]={0};
    		viss[use[i].fi]=viss[use[i].se]=1;
    		c=0;
    		count(use[i].se,viss);
    		tle[use[i]]=c;
    	}
    	while(q--)
    	{
    		ll res=0;
	    	f=0;
	    	ll vis[n+1]={0};
	    	cin >> u >> v;
    		ans.push(u);
	    	vis[u]=1;
    		path(u,v,vis);
    		vi check;
    		check.pb(-1);
    		while(!ans.empty())
    		{
    			check.pb(ans.top());
    			ans.pop();
    		}
    		check.pb(-1);
    		fr(j,1,check.sz-1)
    		{
    			ll x=check[j];
    			vi prod;
    			//cout << check[j] sp a[x].sz<< ": ";
    			fr(i,0,a[x].sz)
    			{
    				ll temp=a[x][i];
    				if(temp==check[j-1] || temp==check[j+1])
    					continue;
    				c=tle[mp(x,temp)];
    				prod.pb(c);
    				//cout << temp sp c << endl;
    			}
    			res++;
    			ll ttemp[prod.sz];
    			fr(i,0,prod.sz)
    			{
    				ttemp[i]=prod[i];
    				res+=prod[i];
    			}
    			res+=findProductSum(ttemp,prod.sz);
    		}
    		cout << res << endl;
    	}
    }
}
