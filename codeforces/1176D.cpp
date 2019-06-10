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
#define md 998244353
#define inf 999999999999999999
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);
#define sz size()

bool isp(ll n) 
{ 
    if (n <= 1)  
        return 0; 
    if (n <= 3)  
        return 1; 
    if (n%2 == 0 || n%3 == 0) 
        return 0; 
    for (ll i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return 0; 
    return 1;
}

void sieve(ll n, bool * marked, vi &primes)
{
    fr(i,2,n+1)
    {
        if (!marked[i])
        {
            primes.push_back(i);
            for (ll j = i*i; j <= n; j += i)
                marked[j] = true;
        }
    }
}

ll div(ll n) 
{
    for (ll i=2; i<=sqrt(n); i++) 
        if (n%i==0) 
            return n/i;
    return 1;
} 

int main()
{
    fast;
    bool marked[2750135]={0};
    vi primes;
    sieve(2750135, marked, primes);
    ll n,x,temp;
    cin >> n;
    ll aa[2*n];
    map <ll,ll> a,b;
    vi d;
    input(aa,2*n);
    sort(aa,aa+2*n);
    fr(i,0,2*n)
        a[aa[i]]++;
    map <ll,ll> :: reverse_iterator it;
    for(it=a.rbegin();it!=a.rend();it++)
    {
        ll tt=it->se;
        temp=it->fi;
        while(tt--)
        {
            if(!isp(temp))
            {
                d.pb(temp);
                a[div(temp)]--;
            }
            else
                b[temp]++;
        }
    }
    map <ll,ll> :: iterator itr;
    for(itr=b.begin();itr!=b.end();itr++)
    {
        ll tt=itr->se;
        temp=itr->fi;
        while(tt--)
        {
            d.pb(temp);
            b[primes[temp-1]]--;
        }
    }
    output(d,d.sz);
}
