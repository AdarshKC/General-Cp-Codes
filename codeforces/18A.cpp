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
#define md 1000000007
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

ll power(ll a)
{
    ll res = 1,b=2;
    while (b > 0) 
    {
        if (b & 1)
            res = res * a;
        a=a*a;
        b=b/2;
    }
    return res;
}

bool isRight(ll x1,ll x2,ll x3,ll y1,ll y2,ll y3)
{
	ll a,b,c;
	a=power(abs(x1-x2))+power(abs(y1-y2));
	b=power(abs(x3-x2))+power(abs(y3-y2));
	c=power(abs(x1-x3))+power(abs(y1-y3));
	if(a==0 || b==0 || c==0)
		return 0;
	if(a+b==c || b+c==a || a+c==b)
		return 1;
	return 0;
}

int main()
{
	fast;
	ll x1,x2,x3,y1,y2,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if(isRight(x1,x2,x3,y1,y2,y3))
		cout << "RIGHT";
	else if(isRight(x1+1,x2,x3,y1,y2,y3) || isRight(x1-1,x2,x3,y1,y2,y3) || isRight(x1,x2+1,x3,y1,y2,y3) || isRight(x1,x2-1,x3,y1,y2,y3))
		cout << "ALMOST";
	else if(isRight(x1,x2,x3+1,y1,y2,y3) || isRight(x1,x2,x3-1,y1,y2,y3) || isRight(x1,x2,x3,y1+1,y2,y3) || isRight(x1,x2,x3,y1-1,y2,y3))
		cout << "ALMOST";
	else if(isRight(x1,x2,x3,y1,y2+1,y3) || isRight(x1,x2,x3,y1,y2-1,y3) || isRight(x1,x2,x3,y1,y2,y3+1) || isRight(x1,x2,x3,y1,y2,y3-1))
		cout << "ALMOST";
	else
		cout << "NEITHER";
}
