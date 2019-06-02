#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi vector<ll>
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
#define inf 100000000000000000
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

int main() 
{
    fast;
    ll n,m,t1,t2,k;
    cin >> n >> m >> t1 >> t2 >> k;
    ll a[n],b[m];
    input(a,n);
    input(b,m);
    ll i=0,j=0,c=0,ans=-1;
    while(a[i]+t1>b[j] && j<m)
    	j++;
    if(j+k<m)
    	ans=b[j+k]+t2;
    if(k>=n || k>=m-j)
    {
    	cout << -1;
    	return 0;
    }
    while(i<n && j<m && c<k)
    {
    	c++;
    	i++;
    	while(a[i]+t1>b[j] && j<m)
    		j++;
    	if(k-c>=m-j)
    	{
    		cout << -1;
    		return 0;
    	}
    	ans=max(ans,b[j+k-c]+t2);
    }
    cout << ans;
}
