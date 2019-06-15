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
    ll n,ans=1;
    cin >> n;
    ll a[n+2],l[n+1],r[n+2];
    fr(i,1,n+1)
        cin >> a[i];
    a[0]=0;a[n+1]=inf;
    l[0]=0;l[1]=1;
    r[n]=1;r[n+1]=0;
    fr(i,2,n+1)
    {
        if(a[i]>a[i-1])
            l[i]=l[i-1]+1;
        else
            l[i]=1;
    }
    fr1(i,n-1,1)
    {
        if(a[i]<a[i+1])
            r[i]=r[i+1]+1;
        else
            r[i]=1;
    }
    fr(i,1,n+1)
        if(a[i-1]+1<a[i+1])
            ans=max(ans,l[i-1]+1+r[i+1]);
    fr(i,2,n+1)
        ans=max(ans,l[i-1]+1);
    fr(i,1,n)
        ans=max(ans,r[i+1]+1);
    cout << ans;
}
