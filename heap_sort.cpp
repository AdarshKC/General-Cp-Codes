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

void heapify(ll a[],ll n,ll id)
{
    ll last=id;
    ll l=2*id+1;
    ll r=2*id+2;
    if(l<n && a[l]>a[id])
        id=l;
    if(r<n && a[r]>a[id])
        id=r;
    if(id!=last)
    {
        swap(a[id],a[last]);
        heapify(a,n,id);
    }
}

void heapSort(ll a[],ll n)
{
    fr1(i,n/2-1,0)
        heapify(a,n,i);
    fr1(i,n-1,0)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}

int main()
{
    fast;
    ll n;
    cin >> n;
    ll a[n];
    input(a,n);
    heapSort(a,n);
    output(a,n);
}
