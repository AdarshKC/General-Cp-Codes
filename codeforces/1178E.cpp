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
 
int main()
{
    fast;
    string s;
    cin >> s;
    ll n=s.sz;
    ll l=0,r=n-1;
    if(n<=3)
    {
        cout << s[0];
        return 0;
    }
    vector <char> v;
    while(l+2<r)
    {
        if(s[l]==s[r])
        {
            v.pb(s[l]);
            l++;
            r--;
        }
        else if(s[l]==s[r-1])
        {
            v.pb(s[l]);
            l++;
            r--;
            r--;
        }
        else if(s[l+1]==s[r])
        {
            v.pb(s[l+1]);
            l++;
            l++;
            r--;
        }
        else
        {
            v.pb(s[l+1]);
            l++;
            l++;
            r--;
            r--;
        }
    }
    if(l+2==r)
    {
        if(s[l]==s[r])
        {
            v.pb(s[l]);
            l++;
            r--;
        }
        else if(s[l]==s[r-1])
        {
            v.pb(s[l]);
            l++;
            r--;
            r--;
        }
    }
    fr(i,0,v.sz)
        cout << v[i];
    if(l<r)
        cout << s[l];
    fr1(i,v.sz-1,0)
        cout << v[i];
}
