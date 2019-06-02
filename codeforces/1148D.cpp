#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define ll long long int
#define vi vector <pair<ll,pair<ll,ll> > >
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define mp(i,j) make_pair(i,j)
#define fi first
#define se second

int main() {
    fast;
    ll n,x,y;
    cin >> n;
    vi v,u;
    fr(i,0,n) {
        cin >> x >> y ;
        if(x>y)
            v.pb(mp(x,mp(y,i+1)));
        else
            u.pb(mp(x,mp(y,i+1)));
    }
    sort(all(v));
    if(u.size()>v.size()) {
        sort(all(u));
        reverse(all(u));
        v=u;
    }
    cout << v.size() << endl;
    fr(i,0,v.size())
        cout << v[i].se.se << " ";
}
