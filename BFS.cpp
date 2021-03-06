// Number of nodes on level f

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

vi v[100005];
ll ans=0,f,n;

void bfs()
{
    ll vis[n+1]={0};
    queue <pair<ll,ll> > q;
    q.push(mp(1,1));
    vis[1]=1;
    while(!q.empty())
    {
        pair <ll,ll> p=q.front();
        q.pop();
        ll x=p.fi,y=p.se;
        if(y==f)
            break;
        fr(i,0,v[x].sz)
        {
            if(!vis[v[x][i]])
            {
                vis[v[x][i]]=1;
                q.push(mp(v[x][i],y+1));
                if(y+1==f)
                    ans++;
            }
        }
    }
}

int main() 
{
    cin >> n;
    fr(i,0,n-1)
    {
        ll x,y;
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    cin >> f;
    bfs();
    cout << ans;
}
