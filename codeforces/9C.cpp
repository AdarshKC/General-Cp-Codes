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

ll test;

ll f_str(string s)
{ 
    stringstream geek(s); 
    ll x; 
    geek >> x;
    return x; 
}

bool check(ll n) 
{ 
	string binaryNum="";
	int i = 0; 
	while (n > 0) 
	{
		if(n%2)
			binaryNum+='1';
		else
			binaryNum+='0';
		n = n / 2; 
		i++; 
	}
	reverse(all(binaryNum));
	ll x=f_str(binaryNum);
	if(x>test)
		return 1;
	return 0;
}

int main() 
{ 
	fast;
	cin >> test;
	if(test==1)
		cout << 1;
	fr(i,1,test+1)
	{
		if(check(i))
		{
			cout << i-1;
			return 0;
		}
	}
}
