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
#define N 200005

int main() 
{
    fast;
    string s,t="",ans="";
    cin >> s;
    ll n=s.sz;
    if(n==1 || n==2)
    {
        cout << s << endl;
        return 0;
    }
    fr(i,0,s.sz-2)
    {
        if(s[i]==s[i+1] && s[i+2]==s[i])
            continue;
        t+=s[i];
    }
    t+=s[n-2];
    t+=s[n-1];
    fr(i,0,t.sz)
    {
        if(t.sz-i<=3)
            ans+=t[i];
        else if(t[i]==t[i+1] && t[i+2]==t[i+3])
        {
            ans+=t[i];
            ans+=t[i+1];
            ans+=t[i+2];
            i+=3;
        }
        else
            ans+=t[i];
    }
    cout << ans;
}
