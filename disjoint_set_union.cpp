// Solution of 1167C(Codeforces)...

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
#define md 1000003
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

ll parent[500001],size[500001];

void make_set(ll x)
{
	parent[x]=x;
	size[x]=1;
}

void find_set(ll x)
{
	while(parent[x]!=x)
		x=parent[x];
	return x;
}

void union_set(ll x,ll y)
{
	ll x=find_set(x);
	ll y=find_set(y);
	if(x!=y)
	{
		if(x<y)
		{
			parent[x]=y;
			size[y]+=size[x];
		}
		else
		{
			parent[y]=x;
			size[x]+=size[y];
		}
	}
}

int main()
{
	fast;
	ll n,m;
	cin >> n >> m;
	fr(i,1,n+1)
		make_set(i);
	while(m--)
	{
		ll last=-1,present,x;
		cin >> x;
		fr(i,0,x)
		{
			cin >> present;
			if(last!=-1)
				union_set(last,present);
			last=present;
		}
	}
	fr(i,1,n+1)
		cout << size[find_set(i)] << " ";
}
