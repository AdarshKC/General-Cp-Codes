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
    string s,t;
    cin >> s >> t;
    if(s.size()!=t.size())
    {
        cout << "NO";
        return 0;
    }
    if(s==t)
    {
        cout << "YES";
        return 0;   
    }
    ll n=s.size(),w=0;
    fr(i,0,n)
        if(s[i]=='1')
            w=1;
    if(!w)
    {
        cout << "NO";
        return 0;   
    }
    w=0;
    fr(i,0,n)
        if(t[i]=='1')
            w=1;
    if(!w)
    {
        cout << "NO";
        return 0;   
    }
    cout << "YES";
}
