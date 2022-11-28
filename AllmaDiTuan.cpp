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
/*
8
*/
int cnt = 0;
int di[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dj[8] = {1, 2, 2, 1, -1, -2, -2, -1};
void solve(int u, int v, int n, int **a){
	++cnt;
	a[u][v] = cnt;
	if(cnt == n*n){
			for(int z = 0 ; z < n; ++z){
				for(int x = 0; x < n; ++x){
					cout<<a[z][x]<<"\t";
				}
				cout<<endl;
			}
			exit(0);
	}
	else{
		for(int k = 0;  k < 8; ++k){
			int i  =  u + di[k];
			int j = v +  dj[k];
			if(i >= 0 && j >= 0 && i < n && j < n && a[i][j] == 0)
			{
				solve(i, j, n, a);
			}
		}
		a[u][v] = 0;
		cnt--;
	}
}
int main()
{
 	ios_base::sync_with_stdio(false);
 	cin.tie(0) ; cout.tie(0);
 	int n;
 	cin>>n;
 	int **a = new int*[n];
 	for(int i = 0 ; i < n; ++i){
 		a[i] = new int[n];
		 for(int j = 0; j < n; ++j){
 			a[i][j] = 0;
		 }
	}
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0; j < n; ++j){
			cnt = 0;
			cout<<endl<<"Vi tri a["<<i<<"]["<<j<<"]: "<<endl;
			solve(i, j, n, a);
			for(int t = 0 ; t < n; ++t){
				 for(int k = 0; k < n; ++k){
		 			a[t][k] = 0;
				 }
			}
		}
	}
	return 0;
}
/* Main() Ends Here */


