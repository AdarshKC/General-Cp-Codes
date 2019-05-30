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

vi lps(string s)
{
    ll n=s.size();
    vi v(n);
    ll i=1,j=0;
    v[0]=0;
    while(i<n)
    {
        if(s[i]==s[j])
        {
            j++;
            v[i]=j;
            i++;
        }
        else
        {
            if(j!=0)
                j=v[j-1];
            else
            {
                v[i]=0;
                i++;
            }
        }
    }
    return v;
}

int main() 
{ 
    string str;
    cin >> str;
    vi v=lps(str);
    output(v,v.size());
} 
