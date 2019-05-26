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
#define inf 100000000000000000
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

int main()
{
    ll n,t=0,t1=0,t2=0,id=0;
    cin >> n;
    ll a[2][n],h[n],l[n];
    fr(i,0,n)
    {
        cin >> a[0][i];
        if(i==0)
            h[i]=a[0][i];
        else
            h[i]=a[0][i]+h[i-1];
    }
    fr(i,0,n)
    {
        cin >> a[1][i];
        if(i==0)
            l[i]=a[1][i];
        else
            l[i]=a[1][i]+l[i-1];
    }
    fr(i,0,n)
    {
        t1+=a[0][i]*id;
        id++;
    }
    fr1(i,n-1,0)
    {
        t1+=a[1][i]*id;
        id++;
    }
    id=1;
    fr(i,0,n)
    {
        t2+=a[1][i]*id;
        id++;
    }
    fr1(i,n-1,1)
    {
        t2+=a[0][i]*id;
        id++;
    }
    t=max(t1,t2);
    fr(i,1,n)
    {
        if(i%2==1)
        {
            t1 += 2*(h[n-1]-h[i-1] + l[n-1]-l[i]);
            t1 -= 2*((n-i-1)*a[1][i] + (n-i)*a[1][i-1]);
            t=max(t1,t);             
        }
        else
        {
            t2 += 2*(l[n-1]-l[i-1] + h[n-1]-h[i]);
            t2 -= 2*((n-i)*a[0][i-1] + (n-i-1)*a[0][i]);
            t=max(t2,t);
        }
    }
    cout << t;
}
