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
#define all(v) (v).begin(),(v).end()
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

ll k,answer[101][101];

ll feel(ll n, ll d)
{
    if(n == d || n == 0 )
        return 1;   

    else if(n < d)
        return 0;

    else if(answer[n][d]>0)
        return answer[n][d];
    
    else
    {
        ll total=0;
        fr(i,1,d)
            total=total+feel(n-i , d);
    
        fr(i,d,k+1)
            total=total+feel(n-i ,1);
    
        answer[n][d] = total%md;
        return total % md;
    }
}

int main()
{
    fast;
    ll n,d;
    cin >> n >> k >> d ;
    fr(i,0,101)
        fr(j,0,101)
            answer[i][j]=0;
    cout << feel(n,d);
}
