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

ll n;

bool is(ll n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    if (n%2 == 0 || n%3 == 0) return false; 

    for (ll i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 

    return true; 
} 
 
void print(vi v)
{
    cout << v[0];
    fr(i,1,n)
        cout << " " << v[i];
    cout << endl;
}

void solve(vi v,ll a[],bool b[],ll size)
{
    if(size==n)
    {
        if(is(v[v.size()-1]+v[0]))
            print(v);
        return;
    }
    fr(i,0,n)
    {
        if(is(v[v.size()-1]+a[i]) && !b[i])
        {
            v.pb(a[i]);
            b[i]=1;
            solve(v,a,b,size+1);
            b[i]=0;
            v.pop_back();
        }
    }
}

int main() 
{
    fast;
    ll in=1;
    bool en=0;
    while(cin >> n)
    {
        if(!en)
            en=1;
        else
            cout << endl;
        ll a[n];
        fr(i,0,n)
            a[i]=i+1;
        vi v;
        v.pb(a[0]);
        bool b[n]={0};
        b[0]=1;
        cout << "Case " << in++ << ":\n"; 
        solve(v,a,b,1);
    }
}
