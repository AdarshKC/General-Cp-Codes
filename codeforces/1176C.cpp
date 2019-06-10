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
#define md 998244353
#define inf 999999999999999999
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);
#define sz size()

int main()
{
    fast;
    ll n,x,temp=4,t=0;
    cin >> n;
    map <ll,ll> m;
    fr(i,0,n)
    {
    	cin >> x;
    	if(x==4)
    	{
    		m[x]++;
    	}
    	if(x==8)
    	{
    		if(m[8]<m[4])
    			m[8]++;
    	}
    	if(x==15)
    	{
    		if(m[15]<m[8])
    			m[15]++;
    	}
    	if(x==16)
    	{
    		if(m[16]<m[15])
    			m[16]++;
    	}
    	if(x==23)
    	{
    		if(m[23]<m[16])
    			m[23]++;
    	}
    	if(x==42)
    	{
    		if(m[42]<m[23])
    			m[42]++;
    	}
    }
    cout << n-m[42]*6;
}
