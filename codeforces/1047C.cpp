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
#define MAX 15000005

ll prime[MAX], countdiv[MAX]; 

void Sieve() 
{ 
    for (ll i = 2; i * i <= MAX; ++i) 
        if (!prime[i]) 
            for (ll j = i * 2; j <= MAX; j += i) 
                prime[j] = i;
    fr(i,1,MAX)
        if (!prime[i]) 
            prime[i] = i; 
}

ll largestGCDSubsequence(ll arr[], ll n) 
{ 
    ll ans = 0;
    fr(i,0,n) 
    {
        ll element = arr[i]; 
        while (element > 1) 
        { 
            ll div = prime[element]; 
            ++countdiv[div]; 
            ans = max(ans, countdiv[div]); 
            while (element % div==0) 
                element /= div; 
        }
    }
    return ans; 
}

ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}
  
ll findGCD(ll arr[], ll n) 
{ 
    ll result = arr[0];
    fr(i,1,n) 
        result = gcd(arr[i], result);
    return result; 
}

int main() 
{
    Sieve();
    ll n;
    cin >> n;
    ll arr[n];
    input(arr,n);
    ll temp=findGCD(arr,n);
    fr(i,0,n)
        arr[i]/=temp;
    ll ans=largestGCDSubsequence(arr, n);
    if(ans==0)
        cout << -1;
    else
        cout << n-ans;
}
