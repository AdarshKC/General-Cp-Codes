#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll int
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
#define fixd(x) cout << fixed << setprecision(x);

int main()
{
	ll t,x,y;
	cin >> t;
	string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while(t--)
	{
		char s[1000];
		cin >> s;
		if(sscanf(s,"%*c%d%*c%d",&x,&y)==2)
		{
			string ans="";
			while(y>0)
			{
				ll z=y/26,rr=y%26;
				y/=26;
				if(rr==0)
					rr=26,y--;
				ans=alpha[rr-1]+ans;
			}
			cout << ans << x;
		}
		else
		{
			string ans="";
			ll xx=strlen(s),num=0;
			cout << "R";
			fr(i,0,xx)
			{
				if(s[i]<='Z' && s[i]>='A')
				{
					ans+=s[i];
					continue;
				}
				cout << s[i];
			}
			cout << "C";
			fr(i,0,ans.size())
			{
				num+=(pow(26,ans.size()-1-i))*(s[i]-'A'+1);
			}
			cout << num;
		}
		cout << endl;
	}
}
