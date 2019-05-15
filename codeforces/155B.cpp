#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi vector<ll>
#define all(v) (v).begin(),(v).end()
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

bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b) 
{ 
    return (a.se < b.se); 
}

int main()
{
	fast;
	ll n,x,y,ans=0,temp=1;
	cin >> n;
	vector <pair<ll,ll> > v;
	fr(i,0,n)
	{
		cin >> x >> y;
		v.pb(mp(y,x));
	}
	sort(all(v),sortbysec);
	sort(all(v));
	fr1(i,n-1,0)
	{
		if(temp==0)
			break;
		ans+=v[i].se;
		temp+=v[i].fi-1;
	}
	cout << ans;
}
