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
	string s;
	cin >> s;
	ll ans=1,curr=1,x;
	fr(i,0,s.sz)
		ans*=s[i]-'0';
	for(ll i=0;i<s.sz;++i)
	{
		if(s[i]=='0')
			break;
		x=s[i]-'1';
		if(x==0)
			x=1;
		x*=curr;
		curr*=s[i]-'0';
		x*=power(9,s.sz-1-i);
		ans=max(ans,x);
	}
	cout << ans;
}
