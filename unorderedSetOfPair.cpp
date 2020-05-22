//https://codeforces.com/contest/1311/problem/F

#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int long long int
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define pii pair<int,int>

int32_t main(){
	int n,ans1=0,ans2=0;
    cin >> n;
    vector<pii>v(n);
    for(int i=0;i<n;i++)cin>>v[i].fi;
    for(int i=0;i<n;i++)cin>>v[i].se;
    sort(all(v));
    ordered_set<pii>os;
    for(int i=0;i<n;i++){
    	ans1+=(int)os.order_of_key({v[i].se+1,0})*v[i].fi;
        os.insert({v[i].se,i});
    }
    os.clear();
    for(int i=n-1;i>=0;i--){
        ans2+=((int)os.order_of_key({-1LL*v[i].se,1e16}))*v[i].fi;
        os.insert({-1LL*v[i].se,i});
    }
    cout << ans1-ans2;
}
