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
#define md 1000003
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);

ll ch[6]={4,8,15,16,23,42};

int main()
{
	ll a[4],b[6],id=1;
	map <ll,ll> m;
	fr(i,0,6)
		m[ch[i]]=0;
	fr(i,0,4)
	{
		cout << "? " << i+1 << " " << i+2 << endl;
		cin >> a[i];
	}
	while(id<4)
	{
	fr(i,0,6)
	{
		fr(j,0,6)
		{
			fr(k,0,6)
			{
				if(ch[i]*ch[j]==a[id-1] && ch[j]*ch[k]==a[id] && i!=k && i!=j && j!=k)
				{
					b[id]=ch[j];
					id++;
				}
			}
		}
	}
	}
	b[0]=a[0]/b[1];
	b[4]=a[3]/b[3];
	fr(i,0,5)
		m[b[i]]=1;
	map<ll, ll>::iterator it; 
    for (it = m.begin(); it != m.end(); ++it) 
        if(it->se == 0)
        	b[5]=it->fi;
    cout << "! "; 
    fr(i,0,6)
    	cout << b[i] << " ";
}
