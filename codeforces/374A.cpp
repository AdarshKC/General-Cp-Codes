#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define ll int

ll ans[4],id=-1,n,m,i,j,a,b;

void func(ll x,ll y)
{
	id++;
	x=abs(x-i);
	y=abs(y-j);
	if(x%a!=0 || y%b!=0)
		return;
	if((x!=0 || y!=0)&&(m<=b || n<=a))
		return;
	x/=a;
	y/=b;
	if(abs(x-y)%2!=0)
		return;
	ans[id]=max(x,y);
}

int main()
{
	fast;
	cin >> n >> m >> i >> j >> a >> b;
	fr(i,0,4)
		ans[i]=INT_MAX;
	func(1,1);
	func(1,m);
	func(n,1);
	func(n,m);
	sort(ans,ans+4);
	if(ans[0]==INT_MAX)
		cout << "Poor Inna and pony!";
	else
		cout << ans[0];
}
