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
    ll n,temp=0;
    cin >> n;
    ll a[n];
    input(a,n);
    map <ll,ll> m;
    fr(i,0,n)
    	m[a[i]]++;
    fr(i,0,n)
   		if(m[a[i]]==1)
   			temp++;
   	/*cout << temp;
   	for(map <ll,ll> :: iterator it=m.begin();it!=m.end();it++)
   	{
   		fr(i,0,(it->se))
   			cout << it->fi << " ";
   		cout << endl;
   	}
   	*/
   	if(temp%2)
   	{
   		ll tt=1,w=0;
   		fr(i,0,n)
   		{
   			if(m[a[i]]>2)
   				w=1;
   		}
   		if(!w)
   		{
   			cout << "NO";
   			return 0;
   		}
   		cout << "YES\n";
   		w=0;
   		fr(i,0,n)
   		{
   			if(m[a[i]]>2 && !w)
   			{
   				cout << 'B';
   				w=1;
   			}
   			else if(m[a[i]]>1)
   				cout << 'A';
   			else if(m[a[i]]==1 && tt<=temp/2+1)
   			{
   				cout << 'A';
   				tt++;
   			}
   			else
   				cout << 'B';
   		}
   	}
   	else
   	{
   		cout << "YES\n";
   		ll tt=1,ch=0;
   		fr(i,0,n)
   		{
   			if(m[a[i]]>1)
   				cout << 'A';
   			else if(m[a[i]]==1 && tt<=temp/2)
   			{
   				cout << 'A';
   				tt++;
   			}
   			else
   			{ch++;
   				cout << 'B';
   			}
   		}
   	}
}
