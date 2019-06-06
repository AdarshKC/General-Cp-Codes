#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define el '\n'
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

ll sum(ll x)
{
    ll take=1,oo=0,ee=0,odd=1;
    while(oo+ee<x)
    {
        if(odd)
        {
            if(oo+ee+take<=x)
                oo+=take;
            else
                oo+=x-oo-ee;
        }
        else
        {
            if(oo+ee+take<=x)
                ee+=take;
            else
                ee+=x-oo-ee;
        }
        take*=2,odd^=1;
    }
    oo%=md;
    oo=(oo*oo)%md;
    ee%=md;
    ee=(ee*(ee+1))%md;
    return (oo+ee)%md;
}

int main()
{
    fast;
    ll l,r;
    cin >> l >> r;
    cout << (sum(r)-sum(l-1)+md)%md;
}
