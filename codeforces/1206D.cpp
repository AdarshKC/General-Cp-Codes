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

map<ll,set<ll> > graph;
map<ll,vi> graph1;
vi v[70];
ll ans=0;
map<ll,ll> m;

void dfs(ll d,ll vv,ll s)
{
    fr(i,0,graph1[vv].sz)
    {
        if(graph1[vv][i]==s && d>1)
        {
            ans=min(d+1,ans);
            return;
        }
        else if(m[graph1[vv][i]]!=1)
        {
            m[graph1[vv][i]]=1;
            dfs(d+1,graph1[vv][i],s);
            m[graph1[vv][i]]=0;
        }
    }
}

int main()
{
    ll n,x,e=0;
    cin >> n;
    fr(i,0,n)
    {
        cin >> x;
        fr(j,0,70)
            if((x&(1LL<<j)))
                v[j].pb(i+1);
    }
    fr(i,0,70)
        ans=max(ans,(ll)v[i].sz);
    if(ans>=3)
    {
        cout << 3;
        return 0;
    }
    ans=INT_MAX;
    fr(i,0,70)
    {
        if(v[i].sz==2)
        {
            graph[v[i][0]].insert(v[i][1]);
            graph[v[i][1]].insert(v[i][0]);
            e++;
        }
    }
    map <ll,set<ll> > :: iterator it1;
    for(it1 = graph.begin(); it1 != graph.end() ; it1++)
    {
        set<ll>:: iterator it;
        for (it=(it1->se).begin();it!=(it1->se).end();++it)
        {
            graph1[(it1->fi)].pb(*it);
        }
    }
    map <ll,vi > :: iterator it;
    for(it = graph1.begin(); it != graph1.end() ; it++)
    {
        m.clear();
        m[(it->fi)]=1;
        fr(j,0,(it->se).sz)
        {
            m[it->se[j]]=1;
            dfs(1,(it->se)[j],(it->fi));
            m[it->se[j]]=0;
        }
    }
    if(ans==INT_MAX)
        cout << -1;
    else
        cout << ans;
}
