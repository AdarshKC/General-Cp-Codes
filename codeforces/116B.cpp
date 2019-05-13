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
    ll n,m,ans=0;
    cin >> n >> m;
    string s[n];
    fr(i,0,n)
        cin >> s[i];
    fr(i,0,n)
    {
        fr(j,0,m)
        {
            if(s[i][j]=='W')
            {
                if(i>0)
                {if(s[i-1][j]=='P')
                {
                    ans++;
                    s[i-1][j]='.';
                    continue;
                }}
                if(j>0)
                {if(s[i][j-1]=='P' && j>0)
                {
                    ans++;
                    s[i][j-1]='.';
                    continue;
                }}
                if(j<m-1)
                {if(s[i][j+1]=='P' && j<m-1)
                {
                    ans++;
                    s[i][j+1]='.';
                    continue;
                }}
                if(i<n-1)
                {if(s[i+1][j]=='P' && i<n-1)
                {
                    ans++;
                    s[i+1][j]='.';
                    continue;
                }}
            }
        }
    }
    cout<<ans;
}
