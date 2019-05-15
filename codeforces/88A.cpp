#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi vector<ll>
#define all(v) (v).begin(),(v).end()
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
#define fixd(x) cout << fixed << setprecision(x);

int main()
{
    fast;
    string chord[] = {"C","C#","D","D#","E","F","F#","G","G#","A","B","H"},s;
    ll ques[3],ans[3];
    fr(i,0,3)
    {
        cin>>s;
        ques[i] = find(chord,chord+12,s)-chord;
    }
    sort(ques,ques+3);
    fr(i,0,2)
        ans[i] = ques[i+1] - ques[i];
    ans[2] = (ques[0] - ques[2] + 12)%12;
    if (ans[0]==4 && ans[1]==3 || ans[1]==4 && ans[2]==3 || ans[2]==4 && ans[0]==3)
        cout << "major"; 
    else if (ans[0]==3 && ans[1]==4 || ans[1]==3 && ans[2]==4 || ans[2]==3 && ans[0]==4)
        cout << "minor";
    else
        cout << "strange";
}
