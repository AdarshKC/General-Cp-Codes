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
	ll a,b,c,n,ans=inf;
	cin >> a >> b >> c;
	n=a+b+c;
	vi x(a),y(b),z(c);
	ll dp[n+2]={0},pre_a[n+2]={0},post_c[n+2]={0};

	input(x,a);sort(all(x));
	input(y,b);sort(all(y));
	input(z,c);sort(all(z));
	
	if(!binary_search(all(x),1))
			pre_a[1]=1;
	fr(i,2,n+1)
	{
		pre_a[i]=pre_a[i-1];
		if(!binary_search(all(x),i))
			pre_a[i]=pre_a[i-1]+1;
	}
	pre_a[n+1]=pre_a[n];

	if(!binary_search(all(z),n))
			post_c[n]=1;
	fr1(i,n-1,1)
	{
		post_c[i]=post_c[i+1];
		if(!binary_search(all(z),i))
			post_c[i]=post_c[i+1]+1;
	}
	post_c[0]=post_c[1];

	dp[0]=post_c[1];
	fr(i,1,n+1)
	{
		if(binary_search(all(y),i))
			dp[i]=dp[i-1]-post_c[i]+post_c[i+1];
		else
			dp[i]=min(dp[i-1]+1-post_c[i],pre_a[i])+post_c[i+1];
	}

	//fr(i,0,n+2)cout << pre_a[i] << " ";
	//fr(i,0,n+2)cout << post_c[i] << " ";
	//fr(i,0,n+2)cout << dp[i] << " ";
	
	fr(i,0,n+1)ans=min(ans,dp[i]);
	cout << ans;
}
