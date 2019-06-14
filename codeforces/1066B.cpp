#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi veansor<ll>
#define vii veansor <pair<ll,ll> >
#define viii veansor <pair<ll,pair<ll,ll> > >
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
    ll n, r, ans=0;
    cin >> n >> r;
    ll a[n+1]={0};
    map <ll,ll> vis;
    fr(i,1,n+1)
        cin >> a[i];
    fr(i,1,n+1)
    {
        bool flag = 0;
        fr(j,1,n+1)
        {
            if(a[j] == 1 && vis.count(j) && (abs(j - i) + 1) <= r)
            {
                flag = 1;
                break;
            }
        }
        if(flag) 
            continue;
        ll maxi = 0, last = 0;
        fr(j,1,n+1)
        {
            if(a[j] == 1 && !vis.count(j) && (abs(j - i) + 1) <= r)
            {
                if(maxi < j + r - 1)
                {
                    maxi = j + r - 1;
                    last = j;
                }
            }
        }
        if(last == 0) 
            return cout << -1, 0;
        vis[last] = 1;
        ans++;
    }
    cout << ans;
}
