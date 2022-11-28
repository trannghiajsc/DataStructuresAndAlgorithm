#include <bits/stdc++.h>
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

int temp = 0;
/* clang-format on */

/* Main()  function */
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {1, 2, 2, 1, -1 ,-2, -2, -1};
void solve(int x, int a[8][8], int y){
	++temp;
	a[x][y] = temp;
	for(int i = 0 ;  i < 8; ++i){
		if(temp == 64){
			for(int i = 0 ; i < 8; ++i){
				for(int j  = 0 ; j < 8; ++j){
					cout<<a[i][j]<<"\t";
				}
				cout<<endl;
			}
			exit(0);
		}
		int u = x + dx[i];
		int v = y + dy[i];
		if(u >= 0 && v >= 0 && u < 8 && v < 8 && a[u][v] == 0)
			solve(u, a, v);
	}
	--temp;
	a[x][y] = 0;
}
int main()
{
	int a[8][8];
	for(int i = 0 ; i < 8; ++i){
		for(int j = 0 ; j < 8; ++j){
			a[i][j] = 0;
		}
	}
	for(int i = 0 ; i < 8; ++i){
		for(int j = 0 ; j < 8; ++j){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	solve(0, a, 0);
	return 0;
}
/* Main() Ends Here */

