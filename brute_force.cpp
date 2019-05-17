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

vector <string> s,ans,ques;
ll done=0;
ll per[4][2] = { {1, 2},{3, 4},{1, 3},{2, 3} };

ll check()
{
    fr(i,0,4)
    {
        fr(j,0,s[i].length())
        {
            if(s[i][j]!='<' && s[i][j]!='>' && s[i][j]!='v' && s[i][j]!='^' && s[i][j]!=',')
            {
                ll temp=0;
                fr(k,0,i)
                {
                    if(s[k][j]=='v')
                        temp++;
                }
                fr(k,i+1,4)
                {
                    if(s[k][j]=='^')
                        temp++;
                }
                fr(k,0,j)
                {
                    if(s[i][k]=='>')
                        temp++;
                }
                fr(k,j+1,s[i].length())
                {
                    if(s[i][k]=='<')
                        temp++;
                }
                if(temp!=(s[i][j]-'0'))
                {
                    //cout << temp << (s[i][j]-'0') << " ";
                    return 0;
                }
            }
        }
    }
    return 1;
}

void func(ll ind,ll t)
{
    fr(i,0,4)
    {ll nn=0;
        fr(j,0,s[i].length())
        {
        if(ques[i][j]=='-')
        {cout << ind;
            if(per[ind][nn]==1)
                s[i][j]='>';
            if(per[ind][nn]==2)
                s[i][j]='v';
            if(per[ind][nn]==3)
                s[i][j]='<';
            if(per[ind][nn]==4)
                s[i][j]='^';
            nn++;
        }}
    }
    fr(i,0,4)
        cout << s[i] << endl;
    if(check())
        {
            ans=s;
            done=1;
        }
        return;
}

int main()
{
    string ss;
    fr(i,0,4)
    {
        cin >> ss;
        s.pb(ss);
    }
    ll n=s.size();
    ques=s;
    ans=s;
    func(0,0);
    fr(i,0,4)
        cout << ans[i] << endl;
}
