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

string findSum(string str1, string str2) 
{ 
    if (str1.sz > str2.sz) 
        swap(str1, str2); 
    string str = ""; 
    ll n1 = str1.sz, n2 = str2.sz,carry=0; 
    reverse(str1.begin(), str1.end()); 
    reverse(str2.begin(), str2.end());
    fr(i,0,n1)
    { 
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
        str.pb(sum%10 + '0');
        carry = sum/10; 
    }
    fr(i,n1,n2)
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.pb(sum%10 + '0'); 
        carry = sum/10; 
    } 
    if (carry) 
        str.pb(carry+'0'); 
    reverse(str.begin(), str.end());   
    return str; 
}

int main()
{
    fast;
 	ll n,least = inf;
 	string s,a,b;
 	cin >> n >> s;
 	vii v;
 	fr(i,1,n)
 	{
 		ll x=(s[i]-'0');
 		if(x!=0)
 			v.pb(mp(i,n-i));
 	}
 	fr(i,0,v.sz)
 		if(max(v[i].fi,v[i].se)<least)
 			least=max(v[i].fi,v[i].se);
 	vi ans;
 	fr(i,0,v.sz)
 		if(max(v[i].fi,v[i].se)==least)
 			ans.pb(v[i].fi);
 	if(ans.sz==1)
 	{
 		a=s.substr(0,ans[0]);
 		b=s.substr(ans[0],n-ans[0]);
 		cout << findSum(a,b);
 	}
 	else
 	{
 		string x,y;
 		a=s.substr(0,ans[0]);
 		b=s.substr(ans[0],n-ans[0]);
 		x=findSum(a,b);
 		a=s.substr(0,ans[1]);
 		b=s.substr(ans[1],n-ans[1]);
 		y=findSum(a,b);
 		if(x.sz>y.sz)
 			cout << y;
 		else if(x.sz<y.sz)
 			cout << x;
 		else
 			cout << min(x,y);
 	}	
}
