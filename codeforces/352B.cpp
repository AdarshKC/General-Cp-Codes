#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi vector<ll>
#define all(v) (v).begin(),(v).end()
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
    ll n,x;
    cin >> n;
    map <ll,vi> m;
    fr(i,0,n)
    {
        cin >> x;
        m[x].pb(i+1);
    }
    vector <pair<ll,ll> > v;
    map<ll, vi>::iterator itr;
    for (itr = m.begin(); itr != m.end(); ++itr) 
    {
        if(itr->se.size()==1)
        {
            v.pb(mp(itr->fi,0));
            continue;
        }
        if(itr->se.size()==2)
        {
            v.pb(mp(itr->fi,itr->se[1]-itr->se[0]));
            continue;
        }
        ll d=(itr->se[1])-(itr->se[0]),w=0;
        fr(i,1,itr->se.size()) 
            if(itr->se[i]-itr->se[i-1]!=d)
                w=1;
        if(!w)
            v.pb(mp(itr->fi,d));
    }
    cout << v.size() << endl;
    fr(i,0,v.size())
        cout << v[i].fi << " " << v[i].se << endl;
}
