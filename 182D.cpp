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
#define pii pair<ll,ll>
#define piii pair<pii, ll>
#define sz size()

int main()
{
    string a,b;
    cin >> a >> b;
    ll aa=a.sz,bb=b.sz,ans=0;
    set <string> s;
    for(ll i=1;i*i<=aa;i++)
    {
        if(aa%i==0)
        {
            ll flag=0;
            string t=a.substr(0,i),temp;
            for(ll j=0;j<aa;)
            {
                temp=a.substr(j,i);
                if(temp!=t)
                    flag=1;
                j+=i;
            }
            if(!flag)
                s.insert(t);
        }
        if(aa/i!=i && aa%(aa/i)==0)
        {
            ll flag=0;
            string t=a.substr(0,aa/i),temp;
            for(ll j=0;j<aa;)
            {
                temp=a.substr(j,aa/i);
                if(temp!=t)
                    flag=1;
                j+=aa/i;
            }
            if(!flag)
                s.insert(t);
        }
    }
    for(ll i=1;i*i<=bb;i++)
    {
        if(bb%i==0)
        {
            ll flag=0;
            string t=b.substr(0,i),temp;
            for(ll j=0;j<bb;)
            {
                temp=b.substr(j,i);
                if(temp!=t)
                    flag=1;
                j+=i;
            }
            if(!flag && s.find(temp)!=s.end())
                ans++;
        }
        if(bb/i!=i && bb%(bb/i)==0)
        {
            ll flag=0;
            string t=b.substr(0,bb/i),temp;
            for(ll j=0;j<bb;)
            {
                temp=b.substr(j,bb/i);
                if(temp!=t)
                    flag=1;
                j+=bb/i;
            }
            if(!flag && s.find(temp)!=s.end())
                ans++;
        }
    }/*
    set <string> :: iterator it;
    for(it=s.begin();it!=s.end();it++)
        cout << *it << " ";*/
    cout << ans;
}
