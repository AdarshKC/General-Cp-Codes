#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; ++i)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi vector<ll>
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
#define inf 100000000000000000
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);   
}

int main() 
{
    fast;
    ll n;
    cin >> n;
    vector<pair <ll,ll> > v;
    set< pair< pair<ll,ll> ,ll> > s;
    map < pair<ll,ll> ,ll> m;
    fr(i,0,n)
    {
        ll x,y;
        cin >> x >> y;
        v.pb(mp(x,y));
    }
    fr(i,0,n)
    {
        fr(j,i+1,n)
        {
            ll a=v[j].se-v[i].se;
            ll b=v[i].fi-v[j].fi;
            ll c=b*v[j].se+a*v[j].fi;
            ll g=gcd(abs(a),gcd(abs(b),abs(c)));
            a/=g,b/=g,c/=g;
            if(b<0 || (a<0 && b==0))
                a=-a,b=-b,c=-c;
            if(!s.empty() && s.find(mp(mp(a,b),c))!=s.end())
                continue;
            s.insert(mp(mp(a,b),c));
            //cout << v[j].fi << " " << v[j].se << " " <<  v[i].fi << " " << v[i].se << ": ";
            //cout << g << "g " << a << " " << b << " " << c << endl;
            m[mp(a,b)]++;
        }
    }
    ll k=s.size();
    ll ans=((k-1)*k)/2;
    map< pair<ll,ll> ,ll> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        ll x=it->se;
        ans-=((x-1)*x)/2;
    }
    cout << ans;
}
