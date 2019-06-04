#include <bits/stdc++.h>
using namespace std;
#define fr(i,a,b) for(ll i=a; i<b; ++i)
#define ll long long int
#define vi vector<ll>
#define pb push_back

ll power(ll a,ll b)
{
    ll res = 1;
    while (b > 0) 
    {
        if (b & 1)
            res = res * a;
        a=a*a;
        b=b/2;
    }
    return res;
}

int main() 
{
    vi v;
    ll n,x,y,z=1;
    cin >> n >> x;
    ll limit=power(2,n);
    bool valid[1000000]={0};
    valid[0]=1;
    fr(i,1,limit)
    {
        y=i^x;
        if(!valid[y])
        {
            v.pb(i);
            valid[i]=1;
        }
    }
    cout << v.size() << endl;
    if(v.size())
        cout << v[0];
    fr(i,1,v.size())
        cout << " " << (v[i]^v[i-1]) ;
}
