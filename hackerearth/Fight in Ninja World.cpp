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

ll z,o,n,vis[100001],col[100001];
vi v[100001];

void dfs(ll var)
{
	vis[var]=1;
	if(col[var]==-1)
		col[var]=0;
	if(col[var]==0)
		z++;
	else
		o++;
	fr(i,0,v[var].size())
    {
        if(vis[v[var][i]]==0)
        {
            if(col[var]==1)
            	col[v[var][i]]=0;
            else
            	col[v[var][i]]=1;
            dfs(v[var][i]);
        }
    }
}

int main()
{
	fast;
	ll t,n,x,y;
	cin >> t;
	fr(k,1,t+1)
	{
		ll mx=0,ans=0;
		cout << "Case " << k << ": ";
		cin >> n;
		fr(i,1,100001)
			vis[i]=col[i]=-1;
		fr(i,0,n)
		{
			cin >> x >> y;
			v[x].pb(y);
			v[y].pb(x);
			if(x>mx)
				mx=x;
			if(y>mx)
				mx=y;
			vis[x]=vis[y]=0;
		}
		fr(i,1,mx+1)
		{
			if(vis[i]==0)
			{
				z=o=0;
				dfs(i);
				//cout << z << o << " ";
				ans+=max(z,o);
			}
		}
		cout << ans << endl;
		fr(i,0,100001)
			v[i].clear();
	}
}
