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

int main() 
{
    fast;
    ll s,d;
    while(cin >> s)
    {
        cin >> d;
        ll max=-1;
        fr(i,0,4096)
        {
            bool flag=0;
            fr(j,0,8)
            {
                ll sum=0;
                fr(k,0,5)
                {
                    ll temp = 1<<(j+k);
                    if(i&temp)
                        sum+=s;
                    else
                        sum-=d;
                }
                if(sum>0)
                    flag=1;
            }
            if(flag)
                continue;
            ll t_max=0;
            fr(j,0,12)
            {
                ll temp = 1<<j;
                if(i&temp)
                    t_max+=s;
                else
                    t_max-=d;
            }
            if(t_max>max)
                max=t_max;
        }
        if(max==-1)
            cout << "Deficit" << endl;
        else
            cout << max << endl;
    }
}
