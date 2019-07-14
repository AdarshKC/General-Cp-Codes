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

int main() 
{
    fast;
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    char x,y,z;
    x=s1[1];
    y=s2[1];
    z=s3[1];
    ll ans2=2,ans1=2;
    if(s1==s2 || s1==s3 || s3==s2)
        ans1=1;
    if(s1==s2 && s1==s3 && s3==s2)
        ans1=0;
    if(s1[0]==s2[0]+2 && s1[1]==s2[1])
        ans2=1;
    if(s3[0]==s2[0]+2 && s3[1]==s2[1])
        ans2=1;
    if(s1[0]==s3[0]+2 && s1[1]==s3[1])
        ans2=1;
    if(s1[0]==s2[0]-2 && s1[1]==s2[1])
        ans2=1;
    if(s3[0]==s2[0]-2 && s3[1]==s2[1])
        ans2=1;
    if(s1[0]==s3[0]-2 && s1[1]==s3[1])
        ans2=1;
    if(s1[0]==s2[0]+1 && s1[1]==s2[1])
        ans2=1;
    if(s3[0]==s2[0]+1 && s3[1]==s2[1])
        ans2=1;
    if(s1[0]==s3[0]+1 && s1[1]==s3[1])
        ans2=1;
    if(s1[0]==s2[0]-1 && s1[1]==s2[1])
        ans2=1;
    if(s3[0]==s2[0]-1 && s3[1]==s2[1])
        ans2=1;
    if(s1[0]==s3[0]-1 && s1[1]==s3[1])
        ans2=1;
    if(s1[0]==s2[0]+1 && s1[1]==s2[1] && s3[0]==s1[0]+1 && s3[1]==s1[1])
        ans2=0;
    if(s3[0]==s2[0]+1 && s3[1]==s2[1] && s1[0]==s3[0]+1 && s1[1]==s3[1])
        ans2=0;
    if(s3[0]==s1[0]+1 && s3[1]==s1[1] && s2[0]==s3[0]+1 && s2[1]==s3[1])
        ans2=0;
    if(s2[0]==s1[0]+1 && s2[1]==s1[1] && s3[0]==s2[0]+1 && s3[1]==s2[1])
        ans2=0;
    if(s1[0]==s3[0]+1 && s3[1]==s1[1] && s2[0]==s1[0]+1 && s1[1]==s2[1])
        ans2=0;
    if(s2[0]==s3[0]+1 && s3[1]==s2[1] && s1[0]==s2[0]+1 && s1[1]==s2[1])
        ans2=0;
    cout << min(ans2,ans1);
}
