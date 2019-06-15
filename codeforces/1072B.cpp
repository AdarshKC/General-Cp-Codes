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
	ll n;
	cin >> n;
	n--;
	ll a[n],b[n];
	input(a,n);
	input(b,n);
	fr(x,0,4)
	{
		ll last=x,t=0;
		vi ans;
		ans.pb(x);
		fr(i,0,n)
		{
			ll next=-1;
			fr(y,0,4)
			{
				if((last|y)==a[i] && (last&y)==b[i])
				{
					ans.pb(y);
					next=y;
					break;
				}
			}
			if(next==-1)
				break;
			else
				last=next,t++;
		}
		if(t==n)
		{
			cout << "YES\n";
			output(ans,ans.sz);
			return 0;
		}
	}
	cout << "NO";
}
