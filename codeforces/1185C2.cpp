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
	ll n,m,sum=0;
	cin >> n >> m;
	ll a[n],t=0,count[102]={0};
	input(a,n);
	fr(i,0,n)
	{
		ll ans=0,temp=sum+a[i]-m;
		if(temp>0)
		{
			fr1(j,100,0)
			{
				ll temp1=j*count[j];
				if(temp<=temp1)
				{
					ans+=(temp+j-1)/j;
					break;
				}
				ans+=count[j];
				temp-=temp1;
			}
		}
		cout << ans << " ";
		count[a[i]]++;
		sum+=a[i];
	}
}
