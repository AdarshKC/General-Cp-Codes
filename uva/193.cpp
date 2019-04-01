#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define mmm(a) memset(a, 0, sizeof(a));
#define vi vector<ll>
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

ll mapp[101][101], mt[101],tmp[101], ans[101],cant[101];
ll n, ma, e;

void solve(ll node, ll select, ll reject)
{
 	if(select + reject == n || node == n+1)
 	{	
  		if(select > ma)
  		{
   			ma = select;
   			ll i;
   			for(i = 0; i < ma; i++)
    		ans[i] = tmp[i];
  		}
  		return;
 	}  
	if(cant[node] == 0) 
	{
		ll i, newNot = reject;
		ll reduce[n], idx = 0;
		for(i = 0; i < mt[node]; i++)
		{
			if(cant[mapp[node][i]] == 0) 
			{
    			cant[mapp[node][i]] = 1, newNot++;
    			reduce[idx++] = mapp[node][i];
   			}
  		}
  		tmp[select] = node;
  		solve(node+1, select+1, newNot);
  		for(i = 0; i < idx; i++)
   			cant[reduce[i]] = 0;
 		solve(node+1, select, reject+1);
 		return;
 	}
 	solve(node+1, select, reject);
}

int main()
{
    fast;
    ll m, i, x, y;
    cin >> m;
    while(m--)
    {
    	cin >> n >> e;
    	mmm(mt);
    	mmm(cant);
  		fr(i,0,e)
  		{
  			cin >> x >> y;
   			mapp[x][mt[x]++] = y;
   			mapp[y][mt[y]++] = x;
  		}
  		ma = 0;
  		solve(1, 0, 0);
  		cout << ma << endl;
  		fr(i,0,ma-1)
  			cout << ans[i] << " ";
  		cout << ans[ma-1] << endl;
 	}
	return 0;
}
