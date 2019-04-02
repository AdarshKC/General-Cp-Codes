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

ll t,a[15];

void fuc(ll x,ll d)
{
	if(__builtin_popcount(x)==6)
	{
		ll k=0;
    	fr(j,1,t+1)
    	{
    		if(((x>>j-1)&1)==1)
    		{
    			cout << a[j-1];
    			k++;
    			if(k<6)
    				cout << " ";
    		}
    	}
    		cout << endl;
	}
	fr(i,d+1,t)
		fuc( (x|(1<<i)) , i);
}


int main() 
{
    fast;
    ll en=0;
    while(cin >> t)
    {
    	if(t==0)
    		break;
    	if(en==0)
    		en=1;
    	else
    		cout << endl;
    	input(a,t);
    	fuc(0,-1);
    }
}
