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

int main() 
{
    fast;
    ll t;
    cin >> t;
    string s;
    while(t>0)
    {
    	map <string,ll> m;
    	set<string> st;
    	ll tt=0;
    	while(getline(cin,s))
    	{
    		if(s.empty())break;
    		tt++;
    		if(m.find(s)!=m.end())
    			m[s]++;
    		else
    			m[s]=1,st.insert(s);
    	}
    	fixd(4);
    	for(set<string> :: iterator it=st.begin();it!=st.end();it++)
    		cout << *it<<" "<<(double)(m[*it]*100)/tt<<endl;
    	if(st.size()!=0 && t>1)
    		cout << endl;
    	if(st.size()!=0)
    		t--;
    }
}
