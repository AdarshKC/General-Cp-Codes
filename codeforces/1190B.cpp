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
    ll n,w=0,k=0,f=0;
    cin >> n;
    ll a[n];
    input(a,n);
    sort(a,a+n);
    fr(i,2,n)
    {
        if(a[i]==a[i-1] && a[i-1]-1==a[i-2])
            f=1;
    }
    fr(i,0,n)
        if(a[i]==0)
            k++;
    fr(i,1,n)
    {
        if(a[i]==a[i-1])
            w++;
    }
    if(w>1 || k>1 || f)
        cout << "cslnb";
    else
    {
        ll ans=0;
        sort(a,a+n);
        fr(i,0,n)
            ans+=a[i]-i;
        if(ans%2==0)
            cout << "cslnb";
        else
            cout << "sjfnb";
    }
}
