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
#define N 200005
#define sp << " " <<
#define inf 100000000000000000
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

int main() 
{
    fast;
    ll n,m,k,id=0,pos,ans=0;
    cin >> n >> m >> k;
    vi a(n),b(n);
    fr(i,0,n)
    {
    	cin >> a[i];
    	b[i]=a[i];
    }
    sort(all(b));
    map <ll,ll> mp;
    reverse(all(b));
    fr(i,0,m*k)
    {
    	ans+=b[i];
    	mp[b[i]]++;
    }
    cout << ans << endl;
    fr(i,0,k-1)
    {
    	ll mm=m;
    	while(mm>0)
    	{
    		if(mp[a[id]]>0)
    		{
    			mm--;
    			mp[a[id]]--;
    		}
    		id++;
    	}
    	cout << id << " ";
    }
}
