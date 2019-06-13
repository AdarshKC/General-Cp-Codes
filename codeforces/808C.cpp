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
    ll n,k,x=0,y;
    cin >> n >> k;
    ll b[n];
    vii a;
    fr(i,0,n)
    {
    	cin >> y;
    	x+=(y+1)/2;
    	b[i]=(y+1)/2;
    	a.pb(mp(y,i));
    }
    if(x>k)
    {
    	cout << -1;
    	return 0;
    }
    k-=x;
    sort(all(a));
    fr1(i,n-1,0)
    {
    	ll temp=a[i].fi-b[a[i].se];
    	if(k<=0)
    		break;
    	if(k>temp)
    		b[a[i].se]+=temp;
    	else
    		b[a[i].se]+=k;
    	k-=temp;
    }
    output(b,n);
}
