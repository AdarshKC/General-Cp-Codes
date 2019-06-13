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

bool isVowel(char c)
{
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

ll vowelCount(string &word)
{
	ll count = 0;
	for(auto ch: word) 
		if(isVowel(ch)) 
			count++;
	return count;
}

char lastVowel(string &word)
{
	for(ll i=word.length()-1; i>=0; i--)
		if(isVowel(word[i])) return word[i];
}

int main()
{
	fast;
	ll n;
	cin >> n;
	vector<string> totalwords;
	map<ll, map<char, vector<string>>> strings_by_vowels;
	fr(i,0,n)
	{
		string word;
		cin >> word;
		totalwords.pb(word);
		ll vowelcount = vowelCount(word);
		char lastvowel = lastVowel(word);
		strings_by_vowels[vowelcount][lastvowel].pb(word);
	}
	
	vector<pair<string, string> > complete_duos, semicomplete_duos;
	for(auto &same_counts: strings_by_vowels)
	{
		
		for(auto &same_lasts: same_counts.se)
		{
			while(same_lasts.se.sz >= 2)
			{
				string firstline = same_lasts.se.back();
				same_lasts.se.pop_back();
				string secondline = same_lasts.se.back();
				same_lasts.se.pop_back();
				complete_duos.pb({firstline, secondline});
			}
		}
		
		vector<string> remainings;
		for(auto &same_lasts: same_counts.se)
		{
			for(auto &word: same_lasts.se) remainings.push_back(word);
			same_lasts.se.clear();
		}
		while(remainings.sz >= 2)
		{
			string firstline = remainings.back(); remainings.pop_back();
			string secondline = remainings.back(); remainings.pop_back();
			semicomplete_duos.pb({firstline, secondline});
		}
	}
	
	vector<pair<string, string> > wholeLyric;
	while(!semicomplete_duos.empty() && !complete_duos.empty())
	{
		pair<string, string>  semicomplete_duo = semicomplete_duos.back();
		semicomplete_duos.pop_back();
		pair<string, string>  complete_duo = complete_duos.back();
		complete_duos.pop_back();
		wholeLyric.pb({semicomplete_duo.fi, complete_duo.fi});
		wholeLyric.pb({semicomplete_duo.se, complete_duo.se});
	}
	while(complete_duos.sz >= 2)
	{
		pair<string, string>  complete_duo1 = complete_duos.back(); complete_duos.pop_back();
		pair<string, string>  complete_duo2 = complete_duos.back(); complete_duos.pop_back();
		wholeLyric.pb({complete_duo1.fi, complete_duo2.fi});
		wholeLyric.pb({complete_duo1.se, complete_duo2.se});
	}
	
	cout << wholeLyric.sz / 2 << endl;
	for(pair<string, string>  &lyric: wholeLyric) 
		cout << lyric.fi << " " << lyric.se << endl;
}
