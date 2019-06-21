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

vi v,ans;
ll imp=0,t1=0,t2=0;
stack <ll> s;

bool rec(ll rem,ll last,ll turn)
{
	//cout << rem << " ";
	if(rem==0)
		return 1;
	bool flag=0;
	if(turn)
	{
		fr(i,0,v.sz)
		{
			if(v[i]!=last && t1<t2+v[i])
			{
				//cout << rem sp v[i] sp t1 sp t2 << ": ";
				t2+=v[i];
				s.push(v[i]);
				if(rec(rem-1,v[i],0))
					flag=1;
				else
				{
					s.pop();
					t2-=v[i];
				}
			}
			if(flag)
				break;
		}
	}
	else
	{
		fr(i,0,v.sz)
		{
			if(v[i]!=last && t1+v[i]>t2)
			{
				//cout << rem sp v[i] sp t1 sp t2 << ": ";
				t1+=v[i];
				s.push(v[i]);
				if(rec(rem-1,v[i],1))
					flag=1;
				else
				{
					s.pop();
					t1-=v[i];
				}
			}
			if(flag)
				break;
		}
	}
	return flag;
}

int main()
{
	fast;
	string ques;
	ll m;
	cin >> ques >> m;
	fr(i,0,10)
		if(ques[i]=='1')
			v.pb(i+1);
	if(!rec(m,-1,1))
		cout << "NO";
	else
	{
		cout << "YES\n";
		while(!s.empty())
		{
			ans.pb(s.top());
			s.pop();
		}
		fr1(i,m-1,0)
			cout << ans[i] << " ";
	}
}
