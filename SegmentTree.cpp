#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<set>

using namespace std;

/* clang-format off */

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;


void build(int id, int l, int r, int a[100001], int b[400004]){
	if(l == r) return b[id] = a[l], void();
	int mid = (l+r)/2;
	build(id*2, l, mid, a, b);
	build(id*2+1, mid+1, r, a, b);
	b[id] = b[id*2] + b[id*2+1];
}
int get(int id, int l, int r, int u, int v, int b[400004]){
	if(l > v || r < u)	return 0;
	if(l >= u && r <= v)
		return b[id];
	int mid = (l+r)/2;
	return get(id*2, l, mid, u, v, b) + get(id*2+1, mid+1, r, u, v, b);
}

/* clang-format on */
/* Main()  function */
int main()
{
	int n, q, l, r;
	cin>>n>>q;
	int a[100001], b[400004];
	for(int i = 0 ; i < n; ++i)	cin>>a[i];
	build(1, 0, n-1, a, b);
	while(q--){
		cin>>l>>r;
		cout<<get(1, 0, n-1, l-1, r-1, b)<<endl;
	}
	return 0;
}
/* Main() Ends Here */


