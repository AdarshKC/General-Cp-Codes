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

ll n,m,x,y,l,r,ans=1;
ll dx[4]={0,0,1,-1};
ll dy[4]={1,-1,0,0};
ll loss[4]={0,1,0,0};
ll vis[2010][2010],vis1[2010][2010];
string s[2010];

bool check(ll a,ll b,ll z)
{
    if(a>=n||b>=m||a<0||b<0)
        return 0;
    if(s[a][b]=='*')
        return 0;
    if(z>l || b-y+z>r)
        return 0;
    if(vis[a][b]<=z)
        return 0;
    if(!vis1[a][b])
    {
        vis1[a][b]=1;
        ans++;
    }
    vis[a][b]=z;
    return 1;
}

ll bfs()
{
    x--,y--;
    vis[x][y]=0;
    queue <pair<ll,pair<ll,ll> > > q;
    q.push(mp(0,mp(x,y)));
    while(!q.empty())
    {
        pair<ll,pair<ll,ll> > p=q.front();
        q.pop();
        ll xx=p.se.fi,yy=p.se.se,zz=p.fi;
        //cout << xx+1 sp yy+1 sp zz << ",  ";
        fr(i,0,4)
        {
            ll z=zz+loss[i];
            if(check(xx+dx[i],yy+dy[i],z))
                q.push(mp(z,mp(xx+dx[i],yy+dy[i])));
        }
    }
    return ans;
}

int main()
{
    fast;
    cin >> n >> m >> x >> y >> l >> r;
    fr(i,0,n)
        cin >> s[i];
    fr(i,0,n)fr(j,0,m)vis[i][j]=inf;
    cout << bfs();
}
