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
    ll n,k,c=1,ma=1;
    cin >> n >> k;
    vii v(n);
    vi ans(n);
    fr(i,0,n)
    {
        cin >> v[i].fi;
        v[i].se=i+1;
    }
    sort(all(v));
    fr(i,1,n)
    {
        if(v[i].fi==v[i-1].fi)
        {
            ll temp=1;
            while(v[i].fi==v[i-1].fi && i<n)
                temp++,i++;
            ma=max(ma,temp);
        }
    }
    if(ma>k)
    {
        cout << "NO";
        return 0;
    }
    fr(i,0,n)
    {
        ans[v[i].se-1]=c;
        c++;
        if(c==k+1)
            c=1;
    }
    cout << "YES\n";
    output(ans,n);
}
