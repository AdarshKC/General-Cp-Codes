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

ll ans[92][8],in=0;
 
bool is(ll a[]) 
{
    fr(i,0,8)
        fr(j,0,8)
            if(abs(j-i)==abs(a[j]-a[i]) && i!=j)
                return false;
    return true;
}

void insertt(ll a[])
{
    fr(i,0,8)
        ans[in][i]=a[i];
    in++;
}

void heapPermutation(ll a[], ll size) 
{ 
    if (size == 1) 
    {
        if(is(a))
            insertt(a);
        return; 
    }
    fr(i,0,size) 
    { 
        heapPermutation(a,size-1); 
        if (size%2==1) 
            swap(a[0], a[size-1]); 
        else
            swap(a[i], a[size-1]); 
    } 
}

ll solve(ll a[])
{
    ll mi=8;
    fr(i,0,92)
    {
        ll temp=0;
        fr(j,0,8)
            if(abs(ans[i][j]-a[j]))
                temp++;
        if(temp<mi)
            mi=temp;
    }
    return mi; 
}

int main() 
{
    fast;
    ll x[8];
    fr(i,0,8)
        x[i]=i+1;
    ll a[8];
    heapPermutation(x,8);
    in=1;
    while(cin >> a[0])
    {
        fr(i,1,8)
            cin >> a[i];
        cout << "Case " << in << ": " << solve(a) << endl;
        in++;
    }
}
