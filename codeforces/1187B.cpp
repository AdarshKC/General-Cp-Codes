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
    ll n,t;
    cin >> n;
    string s,q;
    cin >> s;
    map <pair<ll,ll> ,ll> m;
    ll a[26]={0};
    fr(i,0,n)
    {
        a[(s[i]-'a')]++;
        m[mp((s[i]-'a'),a[(s[i]-'a')])]=i+1;
    }
    cin >> t;
    while(t--)
    {
        ll b[26]={0},ans=0;
        cin >> q;
        fr(i,0,q.sz)
            b[q[i]-'a']++;
        fr(i,0,26)
        {
            ll x=b[i];
            if(x!=0)
                ans=max(m[mp(i,x)],ans);
        }
        cout << ans << endl;
    }
}
