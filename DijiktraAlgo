// Question link: https://codeforces.com/contest/1343/problem/E

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define ll long long int
#define fi first
#define se second
#define pb push_back
#define inf 999999999999999999

using T=pair<ll,pair<ll,ll>>;
ll n,m,a,b,c,p[200005],dis[3][200005];
vector <ll> adj[200005];

void dijkstra(ll source,ll f){
    fr(i,1,n+1) dis[f][i]=-1;
    priority_queue<T,vector<T>,greater<T>> pq;
    pq.push({0,{source,source}});
    while(!pq.empty()){
        auto g=pq.top();
        pq.pop();
        if(dis[f][g.se.fi]!=-1) continue;
        dis[f][g.se.fi]=g.fi;
        for(auto i:adj[g.se.fi]){
            if(dis[f][i]==-1)
                pq.push({g.fi+1,{i,g.se.fi}});
        }
    }
}
 
int main(){
	fast;
	ll t;
    cin>>t;
    while(t--){
    	cin>>n>>m>>a>>b>>c;
	    fr(i,1,n+1) adj[i].clear();
	    fr(i,1,m+1) cin>>p[i];
	    fr(i,1,m+1){
	        ll x,y;
	        cin>>x>>y;
	        adj[x].pb(y);
	        adj[y].pb(x);
	    }
	    sort(p+1,p+m+1);
	    fr(i,1,m+1) p[i]+=p[i-1];
	    dijkstra(a,0);
	    dijkstra(b,1);
	    dijkstra(c,2);
	    ll ans=inf;
	    fr(i,1,n+1){
	        ll w=dis[0][i]+dis[1][i]+dis[2][i];
	        if(w<=m) ans=min(ans,p[dis[1][i]]+p[w]);
	    }
	    cout<<ans<<endl;
    }
}
