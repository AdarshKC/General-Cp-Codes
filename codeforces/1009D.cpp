#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi vector<ll>
#define vii vector <pair<ll,ll> >
#define viii vector <pair<ll,pair<ll,ll> > >
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
#define inf 999999999999999999
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);
#define sz size()
#define N 200005

ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);   
}

int main() 
{
    fast;
    ll n,m,done=0;
    cin >> n >> m;
    set <pair<ll,ll> > s;
    fr(i,1,n)
    {
        if(s.sz>m)
            break;
        fr(j,i+1,n+1)
        {
            if(s.sz>m)
                break;
            if(gcd(i,j)==1)
                s.insert(mp(i,j));
        }
    }
    if(s.sz>=m && m>=n-1)
    {
        cout << "Possible\n";
        set <pair<ll,ll> > :: iterator it;
        for(it=s.begin();it!=s.end();it++)
        {
            if(done==m)
                break;
            cout << (*it).fi sp (*it).se << endl;
            done++;
        }
    }
    else
        cout << "Impossible\n";
}