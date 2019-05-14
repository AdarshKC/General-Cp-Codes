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
#define mp(i,j) make_pair(i,j)
#define fi first
#define se second
#define input(a,n) fr(i,0,n)cin>>a[i]
#define output(a,n) fr(i,0,n)cout<<a[i]<<" "
#define dbg cout<<"hurr"<<endl;
#define dbg2 cout<<"hurr2"<<endl;
#define md 1000000007
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

int main() 
{
    fast;
    ll n,t1=0,t2=0;
    cin >> n ;
    ll a[n],b[n];
    fr(i,0,n)
        cin >> a[i] >> b[i];
    string s="";
    fr(i,0,n)
    {
        if(abs(t1-t2-b[i])<abs(t2-t1-a[i]))
        {
            s+="G";
            t2+=b[i];
        }
        else
        {
            s+="A";
            t1+=a[i];   
        }
    }
    if(abs(t1-t2)>500)
    {
        cout << -1;
        return 0;
    }
    cout << s;
}
