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
	cin >> n;
	ll a[n*n];
	input(a,n*n);
	sort(a,a+n*n);
	if(n%2==0)
	{
		map <ll,ll> m;
		m[a[0]]=1;
		fr(i,1,n*n)
		{
			if(m.find(a[i])==m.end())
				m[a[i]]=1;
			else
				m[a[i]]++;
		}
		vi v;
		for (std::map<ll,ll>::iterator it=m.begin(); it!=m.end(); ++it)
	    	fr(i,0,(it->se)/4)
	    		v.pb(it->fi);
	    if(v.size()!=(n/2)*(n/2))
	    {
	    	cout << "NO";
	    	return 0;
	    }
	    cout << "YES\n";
		ll res[n/2][n/2],ind=0;
		fr(i,0,n/2)
		{
			fr(j,0,n/2)
			{
				res[i][j]=v[ind];
				ind++;
			}
		}
		fr(i,0,n/2)
		{
			fr(j,0,n/2)
				cout << res[i][j] << " ";
			fr1(j,n/2-1,0)
				cout << res[i][j] << " ";
			cout << endl;
		}
		fr1(i,n/2-1,0)
		{
			fr(j,0,n/2)
				cout << res[i][j] << " ";
			fr1(j,n/2-1,0)
				cout << res[i][j] << " ";
			cout << endl;
		}
	}
	else
	{
		map <ll,ll> m;
		m[a[0]]=1;
		fr(i,1,n*n)
		{
			if(m.find(a[i])==m.end())
				m[a[i]]=1;
			else
				m[a[i]]++;
		}
		vi v,u;
		ll temp;
		for (std::map<ll,ll>::iterator it=m.begin(); it!=m.end(); ++it)
	    {
	    	fr(i,0,(it->se)/4)
	    		v.pb(it->fi);
	    	ll x=(it->se)%4;
	    	fr(i,0,x/2)
	    		u.pb(it->fi);
	    	x=x%2;
	    	if(x)
	    		temp=(it->fi);
	    }
	    if(v.size()<(n/2)*(n/2))
	    {
	    	cout << "NO";
	    	return 0;
	    }//cout << v.size() << u.size();
	    if(v.size()==(n/2)*(n/2))
	    {
	    	if(u.size()!=2*(n/2))
	    	{
	    		cout << "NO";
	    		return 0;
	    	}
	    	cout << "YES\n";
	    	ll res[n][n],in1=0,in2=0;
	    	fr(i,0,n/2)
	    	{
	    		fr(j,0,n/2)
	    		{
	    			res[i][j]=v[in1];
	    			in1++;
	    		}
	    		res[i][n/2]=u[in2];
	    		in2++;
	    		fr(j,n/2+1,n)
	    			res[i][j]=res[i][n-1-j];
	    	}
	    	fr(i,0,n/2)
	    	{
	    		fr(j,0,n)
	    			cout << res[i][j] << " ";
	    		cout << endl;
	    	}
	    	ll tt[n/2];
	    	fr(i,0,n/2)
	    	{
	    		cout << u[in2] << " ";
	    		tt[i]=u[in2];
	    		in2++;
	    	}
	    	cout << temp << " " ;
	    	fr1(i,n/2-1,0)
	    		cout << tt[i] << " " ;
	    	cout << endl;
	    	fr1(i,n/2-1,0)
	    	{
	    		fr(j,0,n)
	    			cout << res[i][j] << " ";
	    		cout << endl;
	    	}
	    }
	    if(v.size()>(n/2)*(n/2))
	    {
	    	ll res[n][n],in1=0,in2=0;
	    	fr(i,0,v.size()-(n/2)*(n/2))
	    	{
	    		u.pb(v[in1]);
	    		u.pb(v[in1]);
	    		in1++;
	    	}//cout << in1;
	    	if(u.size()!=2*(n/2))
	    	{
	    		cout << "NO";
	    		return 0;
	    	}
	    	cout << "YES\n";
	    	fr(i,0,n/2)
	    	{
	    		fr(j,0,n/2)
	    		{
	    			res[i][j]=v[in1];
	    			in1++;
	    		}
	    		res[i][n/2]=u[in2];
	    		in2++;
	    		fr(j,n/2+1,n)
	    			res[i][j]=res[i][n-1-j];
	    	}
	    	fr(i,0,n/2)
	    	{
	    		fr(j,0,n)
	    			cout << res[i][j] << " ";
	    		cout << endl;
	    	}
	    	ll tt[n/2];
	    	fr(i,0,n/2)
	    	{
	    		cout << u[in2] << " ";
	    		tt[i]=u[in2];
	    		in2++;
	    	}
	    	cout << temp << " " ;
	    	fr1(i,n/2-1,0)
	    		cout << tt[i] << " " ;
	    	cout << endl;
	    	fr1(i,n/2-1,0)
	    	{
	    		fr(j,0,n)
	    			cout << res[i][j] << " ";
	    		cout << endl;
	    	}
	    }
	}
}
