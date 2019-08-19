// Program finds whether the query word is present in the string array or not...

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

ll ALPHABET_SIZE = 26;
 
struct TrieNode 
{ 
	TrieNode *children[ALPHABET_SIZE]; 
	bool isEndOfWord; 
}; 

struct TrieNode *getNode(void) 
{ 
	TrieNode *pNode = new TrieNode; 
	pNode->isEndOfWord = false;
	fr(i,0,ALPHABET_SIZE)
		pNode->children[i] = NULL;
	return pNode; 
}

void insert(TrieNode *root, string key) 
{ 
	TrieNode *pCrawl = root; 
	fr(i,0,key.sz)
	{ 
		ll index = key[i] - 'a'; 
		if (!pCrawl->children[index]) 
			pCrawl->children[index] = getNode();
		pCrawl = pCrawl->children[index]; 
	}
	pCrawl->isEndOfWord = true; 
} 

bool search(TrieNode *root, string key) 
{ 
	TrieNode *pCrawl = root; 
	fr(i,0,key.sz)
	{ 
		ll index = key[i] - 'a'; 
		if (!pCrawl->children[index]) 
			return false;
		pCrawl = pCrawl->children[index]; 
	} 
	return (pCrawl != NULL && pCrawl->isEndOfWord); 
} 

int main() 
{ 
	ll n,q;
	cin >> n;
	string keys[n],temp;
	fr(i,0,n)
		cin >> keys[i]; 
	TrieNode *root = getNode();
	fr(i,0,n)
		insert(root, keys[i]); 
	cin >> q;
	while(q--)
	{
		cin >> temp;
		if(search(root,temp))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
