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

ll power(ll a,ll b)
{
    ll res = 1;
    while (b > 0) 
    {
        if (b & 1)
            res = res * a;
        a=a*a;
        b=b/2;
    }
    return res;
}

int main()
{
	fast;
	ll n,b;
	cin >> n >> b;
	ll a[n];
	input(a,n);
	ll x=(8*b)/n;
	if(x>25)
	{
		cout << 0;
		return 0;
	}
	x=power(2,x);
	map <ll,ll> m;
	fr(i,0,n)
		m[a[i]]++;
	if(m.sz<=x)
	{
		cout << 0;
		return 0;
	}
	sort(a,a+n);
	ll nn=m.sz;
	ll c[nn],ii=0;
	map <ll,ll> :: iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		c[ii]=(it->se);
		ii++;
	}
	fr(i,1,nn)
		c[i]+=c[i-1];
	ll e[nn],ma=0;
	fr(i,0,nn)
		e[i]=c[i];
	fr(i,x,nn)
		e[i]-=c[i-x];
	fr(i,x-1,nn)
		ma=max(ma,e[i]);
	cout << n-ma;
}
