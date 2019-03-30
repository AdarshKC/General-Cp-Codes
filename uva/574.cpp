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

ll sum,n;
set <vi> s;
 
void print()
{
    cout << "Sums of " << sum << ":\n";
    if(s.size()==0)
	cout << "NONE\n";
    set<vi> :: iterator it;
    vector <vi> vv;
    for(it=s.begin();it!=s.end();it++)
    {
        vi u=*it;
        vv.pb(u);
    }
    ll z=vv.size();
    fr1(j,z-1,0)
    {
        cout << vv[j][0];
        fr(i,1,vv[j].size())
            cout << "+" << vv[j][i];
        cout << endl;
    }
}

void solve(ll a[],ll size,ll sum1,vi v)
{
    if(sum1==sum)
    {
        if(!v.empty())
	  s.insert(v);
        return;
    }
    if(size==n)
        return;
    solve(a,size+1,sum1,v);
    v.pb(a[size]);
    solve(a,size+1,sum1+a[size],v);
}

int main() 
{
    fast;
    while(cin >> sum)
    {
        s.clear();
        cin >> n;
        if(n==0 && sum==0)
	return 0;
        ll a[n];
        input(a,n);
        vi v;
        solve(a,0,0,v);
        print();
    }
}
