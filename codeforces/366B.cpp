#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; ++i)
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
    ll n,k;
    cin >> n >> k;
    ll a[n];
    input(a,n);
    ll ans=inf,id=0,times=0;
    fr(i,0,n)
    {
        ll temp=0,j=i;
        do {
            temp+=a[j];
            j+=k;
            if(j>=n)
                j%=n;
        } while(j!=i);
        if(temp<ans)
        {
            id=i;
            ans=temp;
        }
        times++;
        if(times>k)
            break;
    }
    cout << id+1;
}
