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
    string s,t;
    cin >> s >> t;
    ll n=s.sz,m=t.sz;
    ll a[n]={0},b[n-m];
    fr(i,0,n-1)
    {
    	if(s[i]!=s[i+1])
    		a[i]=1;
    }
    fr1(i,n-2,0)
    	a[i]+=a[i+1];
    fr1(i,n-m-1,0)
    	b[i]=a[i]-a[i+m];
    ll e=0,l=0,d=0;
    fr(i,0,m)
    	if(s[i]!=t[i])
    		d++;
    if(d%2==0)
    	e=1,l=1;
    fr(i,0,n-m)
    {
    	if(b[i]%2==0 && l==1)
    		e++;
    	else if(b[i]%2==1 && l==1)
    		l=0;
    	else if(b[i]%2==1 && l==0)
    		l=1,e++;
    }
    cout << e;
}
