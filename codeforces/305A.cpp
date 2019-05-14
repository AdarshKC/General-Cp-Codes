#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll int
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
    ll n;
    cin >> n ;
    ll s[n];
    input(s,n);
    vector <ll> v;
    fr(i,0,n)
    {
        if(s[i]>0 && s[i]<=9)
        {
            v.pb(s[i]);
            break;
        }
    }
    fr(i,0,n)
    {
        if(s[i]%10==0 && s[i]!=0 && s[i]!=100)
        {
            v.pb(s[i]);
            break;
        }
    }
    if(v.size()==0)
    {
        fr(i,0,n)
        {
            if(s[i]%10!=0)
            {
                v.pb(s[i]);
                break;
            }
        }
    }
    fr(i,0,n)
        if(s[i]==0 || s[i]==100)
            v.pb(s[i]);
    cout << v.size() << endl;
    fr(i,0,v.size())
        cout << v[i] << " ";
}
