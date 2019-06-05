#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; ++i)
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
#define inf 100000000000000000
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

ll n,m,k,v,reach=0;
string a[501];
bool mark[501][501];

ll dx[4] = {0,0,-1,1};
ll dy[4] = {1,-1,0,0};

bool check(ll x, ll y)
{
	if(x<0 || x>=n || y<0 || y>=m)
		return false;
	if(mark[x][y])
		return false;
	return true;
}

void dfs(ll i, ll j)
{
	//cout << i << " " << j << ", ";
	if(reach==v-k)
		return;
	reach++;
	mark[i][j]=1;
	fr(l,0,4)
	{
		ll x=i+dx[l],y=j+dy[l];
		if(check(x,y))
				dfs(x,y);
	}
}

int main() 
{
	fast;
	cin >> n >> m >> k;
	fr(i,0,n)
		cin >> a[i];
	fr(i,0,n)
	{
		fr(j,0,m)
		{
			if(a[i][j]=='.')
				v++;
			else
				mark[i][j]=1;
		}
	}
	fr(i,0,n)
		fr(j,0,m)
			if(check(i,j))
				dfs(i,j);
	fr(i,0,n)
		fr(j,0,m)
			if(mark[i][j]==0)
				a[i][j]='X';
	fr(i,0,n)
		cout << a[i] << endl;
}
