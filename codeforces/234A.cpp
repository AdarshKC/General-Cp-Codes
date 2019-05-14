#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll int
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

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n;
    string s;
    cin >> n >> s;
    if(n%4==0)
    {
        fr(i,0,n-2)
        {
            if(s[i]=='R' && s[i+2]=='L')
                cout << i+3 << " " << i+1 << endl;
            else
                cout << i+1 << " " << i+3 << endl;
            i+=3;
        }
        fr(i,1,n-2)
        {
            if(s[i]=='R' && s[i+2]=='L')
                cout << i+3 << " " << i+1 << endl;
            else
                cout << i+1 << " " << i+3 << endl;
            i+=3;
        }
    }
    else
    {
        fr(i,0,n-6)
        {
            if(s[i]=='R' && s[i+2]=='L')
                cout << i+3 << " " << i+1 << endl;
            else
                cout << i+1 << " " << i+3 << endl;
            i+=3;
        }
        fr(i,1,n-6)
        {
            if(s[i]=='R' && s[i+2]=='L')
                cout << i+3 << " " << i+1 << endl;
            else
                cout << i+1 << " " << i+3 << endl;
            i+=3;
        }
        fr(i,n-6,n-3)
        {
            if(s[i]=='R' && s[i+3]=='L')
                cout << i+4 << " " << i+1 << endl;
            else
                cout << i+1 << " " << i+4 << endl;
        }
    }
}
