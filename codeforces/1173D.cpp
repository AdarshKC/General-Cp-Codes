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
    ll n,x,ans=0;
    cin >> n;
    ll a[n],temp=1;
    map <ll,ll> m;
    fr(i,0,n)
    {
        cin >> x;
        m[x]=1;
    }
    fr(i,0,n)
    {
        cin >> x;
        m[x]=i+2;
        a[i]=x;
    }
    fr(i,0,n)
    {
        if(a[i]==1)
        {
            ll tt=1,w=0;
            fr(j,i,n)
            {
                if(a[j]==tt)
                    tt++;
                else
                    w=1;
            }
            tt=a[n-1]+2;
            fr(j,0,i)
            {
                if(a[j]<tt && a[j]!=0)
                    w=1;
                tt++;
            }
            if(!w)
                temp=a[n-1]+1;
        }
    }
    while(temp<=n)
    {
        ans=max(ans+1,m[temp]);
        temp++;
    }
    cout << ans;
}
