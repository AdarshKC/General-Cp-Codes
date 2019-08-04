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
	ll n,k;
	cin >> n >> k;
	ll dp[n+1][k+1][4],poss[4][4];
 
	poss[0][0]=poss[1][0]=poss[1][1]=poss[1][3]=poss[2][0]=poss[2][2]=poss[2][3]=poss[3][3]=0;
	poss[0][1]=poss[0][2]=poss[0][3]=poss[3][0]=poss[3][1]=poss[3][2]=1;
	poss[1][2]=poss[2][1]=2;
	
	fr(i,0,n+1)
		fr(j,0,k+1)
			fr(l,0,4)
				dp[i][j][l]=0;
	
	dp[1][1][0]=dp[1][2][1]=dp[1][2][2]=dp[1][1][3]=1;
	
	fr(i,2,n+1)
		fr(j,1,k+1)
			fr(l1,0,4)
				fr(l2,0,4)
					if(j+poss[l1][l2]<=k)
						dp[i][j+poss[l1][l2]][l2] = (dp[i][j+poss[l1][l2]][l2]+dp[i-1][j][l1])%md;
	ll ans=0;
	fr(i,0,4)
		ans = (ans+dp[n][k][i])%md;
	cout << ans;
}
