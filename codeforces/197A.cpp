#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long int

int main() 
{
    fast;
    ll a,b,r;
    cin >> a >> b >> r;
    r*=2;
    if(a>b)
        a=b;
    if(a>=r)
        cout << "First";
    else
        cout << "Second";
}
