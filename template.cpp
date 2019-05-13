/***            YES I know you you are reading this... Now just fuck off bcaz i finally started..!           ***/

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

ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);   
}

ll f_str(string s)
{ 
    stringstream geek(s); 
    ll x; 
    geek >> x;
    return x; 
}

ll powmd(ll x,ll y, ll p)
{
    ll res=1;
    x%=p;
    while(y>0)
    {
        if(y&1)
            res=(res*x)%p;
        y >>= 1;
        x=(x*x)%p; 
    }
    return res;
}

string f_int(ll i)
{
	string out;
	stringstream ss;
	ss << i;
	out = ss.str();
	return out;
}

ll max2(ll a,ll b)
{
	if(a>b)
		return a;
	return b;
}

ll min2(ll a,ll b)
{
	if(a<b)
		return a;
	return b;
}

ll max3(ll a,ll b,ll c)
{
	return max2(a,max2(b,c));
}

ll min3(ll a,ll b,ll c)
{
	return min2(a,min2(b,c));	
}

ll power(ll a,ll b)
{
    ll res = 1;
    while (b > 0) 
    {
        if (b & 1)
            res = res * a;
        a=a*a;
        b=b/2;
    }
    return res;
}

int main() 
{
	fast;
	
}
