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

ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);   
}

int main()
{
    fast;
    ll n,x,y,x1,y1;
    set< pair< pair<ll,ll> ,ll> > s;
    cin >> n >> x >> y;
    fr(l,0,n)
    {
        cin >> x1 >> y1;
        ll a=y-y1;
        ll b=x1-x;
        ll c=b*y+a*x;
        ll g=gcd(abs(a),gcd(abs(b),abs(c)));
        a/=g,b/=g,c/=g;
        if(b<0 || (a<0 && b==0))
            a=-a,b=-b,c=-c;
        s.insert(mp(mp(a,b),c));    
    }
    cout << s.sz;
}
