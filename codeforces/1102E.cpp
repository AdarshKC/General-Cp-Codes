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
#define md 998244353
#define inf 999999999999999999
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);
#define sz size()

int main()
{
    fast;
    ll n,x=-1,ans=0,res=1;
    cin >> n;
    map <ll,pair<ll,ll> > m;
    map <ll,ll> done;
    ll a[n];
    fr(i,0,n)
    {
        cin >> a[i];
        m[a[i]]=mp(-1,-1);
        done[a[i]]=0;
    }
    fr(i,0,n)
    {
        if(m[a[i]].fi==-1)
            m[a[i]]=mp(i,i);
        else
            m[a[i]].se=i;
    }
    fr(i,0,n)
    {
        if(!done[a[i]] && m[a[i]].fi>x)
        {
            done[a[i]]=1;
            ans++;
        }
        x=max(x,m[a[i]].se);
    }
    fr(i,1,ans)
        res=(res*2)%md;
    cout << res << endl;
}
