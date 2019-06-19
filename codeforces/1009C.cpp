#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define ll long long int
#define ld long double
#define fixd(x) cout << fixed << setprecision(x);

int main()
{
    fast;
    ll n, m, pos, neg, ans=0,x ,d;
    cin >> n >> m;
    neg = ((n - 1)/2)*((n - 1)/2+1);
    if(n%2==0) 
        neg += n / 2;
    pos = (n*(n - 1))/2;
    fr(i,0,m)
    {
        cin >> x >> d;
        ans += x*n;
        if (d < 0)
            ans += neg * d;
        else
            ans += pos * d;
    }
    fixd(10);
    cout << (ld)ans/n;
}
