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


/* clang-format on */
/* Main()  function */
void solve(int j, int k, int n, int *a, bool *check){
	for(int i = 1; i <= n; ++i){
		if(j >= k){
			for(int t = 0 ; t < k; ++t){
				cout<<a[t]<<" ";
			}
			cout<<endl;
			return;
		}
		else{
			if(!check[i]){
				check[i] = true;
				a[j] = i;
				solve(j+1, k, n, a, check);
				check[i] = false;
			}
		}
	}
}
int main()
{
 	ios_base::sync_with_stdio(false);
	cin.tie(0) ; cout.tie(0);
	int k, n;
	cin>>k>>n;
	int *a = new int[k];
	bool *check = new bool[n+1];
	memset(check, false, sizeof(check));
	solve(0, k, n, a, check);
	return 0;
}
/* Main() Ends Here */


