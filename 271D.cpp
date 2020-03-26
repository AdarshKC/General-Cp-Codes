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


struct Trie {
	Trie *node[26];
	Trie(){
		fr(i,0,26)node[i]=NULL;
	}
};

int main()
{
	fast;
	string s,t;
	ll k,ans=0;
	Trie adarsh;	
	cin >> s >> t >> k;
	fr(j,0,s.sz){
		Trie *temp=&adarsh;
		ll temp1=0;
		fr(i,j,s.sz){
			if(t[s[i]-'a']=='0')temp1++;
			if(temp1>k)break;
			if(temp->node[s[i]-'a']==NULL){
				ans++;
				temp->node[s[i]-'a']=new Trie;
			}
			temp=temp->node[s[i]-'a'];
		}
	}
	cout << ans;
}
