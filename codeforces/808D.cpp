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
    ll n,sum=0,temp=0;
    cin >> n;
    ll a[n];
    fr(i,0,n)
    {
        cin >> a[i];
        sum+=a[i];
    }
    if(sum%2)
    {
        cout << "NO";
        return 0;
    }
    sum/=2;
    set <ll> s,t;
    fr(i,0,n)
    {
        s.insert(a[i]);
        temp+=a[i];
        if(temp==sum || s.count(temp-sum))
        {
            cout << "YES";
            return 0;
        }
    }
    reverse(a,a+n);
    s.clear();
    temp=0;
    fr(i,0,n)
    {
        s.insert(a[i]);
        temp+=a[i];
        if(temp==sum || s.count(temp-sum))
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
