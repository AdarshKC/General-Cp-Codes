#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi vector<ll>
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
#define inf 100000000000000000
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

int main()
{
    fast;
    ll n,q,temp=0,x,y;
    cin >> n >> q;
    ll a[n],h[n],l[n];
    input(a,n);
    l[0]=0,h[n-1]=n-1;
    fr(i,1,n)
    {
        if(a[i]<=a[i-1])
            l[i]=temp;
        else
        {
            l[i]=i;
            temp=i;
        }
    }
    temp=n-1;
    fr1(i,n-2,0)
    {
        if(a[i]<=a[i+1])
            h[i]=temp;
        else
        {
            h[i]=i;
            temp=i;
        }
    }
    while(q--)
    {
        cin >> x >> y;
        if(h[x-1]==h[y-1] || l[x-1]==l[y-1] || abs(h[x-1]-l[y-1])<2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
