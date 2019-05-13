#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define ll long long int

int main() 
{
    fast;
    ll a[100001];
    fr(i,0,100001)
        a[i]=(i*(i+1))/2;
    ll n;
    cin >> n;
    ll l=1,r=100000,w=0;
    while(l<=r)
    {
        if(a[l]+a[r]>n)
            r--;
        else if(a[l]+a[r]<n)
            l++;
        else
        {
            w=1;
            break;
        }
    }
    if(w)
        cout << "YES";
    else
        cout << "NO";
}
