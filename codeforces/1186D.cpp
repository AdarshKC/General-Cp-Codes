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
    ll n;
    cin >> n;
    vii v;
    fr(i,0,n)
    {
        ld x,y=1;
        cin >> x;
        if(floor(x)==(ld)x)
            y=0;
        v.pb(mp(floor(x),y));
        //cout << v[i].fi sp v[i].se << endl;
    }
    ll s=0;
    fr(i,0,n)
    {
        if(v[i].fi>=0)
            s+=v[i].fi;
        else
            s+=v[i].fi;
        //cout << v[i].fi sp s << ":";
    }
    if(s<0)
    {        
        ll z=s;
        fr(i,0,n)
        {
            if(z==0)
                break;
            if(v[i].se)
            {
                v[i].fi++;
                z++;
            }
        }
    }
    fr(i,0,n)
        cout << v[i].fi << endl;
}
