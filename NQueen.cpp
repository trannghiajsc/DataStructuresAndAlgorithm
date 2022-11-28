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

bool check(int row, int col, int a[][8]){
	for(int i = 0; i < col; ++i){
		if(a[row][i] == 1)
			return false;
	}
	int i = row, j = col;
	while(i >= 0 && j >= 0){
		if(a[i][j] == 1)
			return false;
		--i;
		--j;
	}
	i = row;
	j = col;
	while(i < 8 && j >= 0){
		if(a[i][j] == 1)
			return false;
		++i;
		--j;
	}
	return true;
}
void solve(int a[8][8], int j){
	if(j >= 8){
		for(int i = 0 ; i < 8; ++i){
			for(int z = 0;z  < 8; ++z){
				cout<<a[i][z]<<" ";
			}
			cout<<endl;
		}
		exit(0);
	}
	for(int i = 0 ; i < 8; ++i){
		if(check(i,j, a)){
			a[i][j] = 1;
			solve(a, j+1);
			a[i][j] = 0;
		}
	}
}
int main()
{
	int a[8][8];
	for(int i = 0 ; i < 8; ++i){
		for(int j = 0 ; j < 8; ++j){
			a[i][j] = 0;
		}
	}
	for(int z = 0 ; z < 8; ++z){
		for(int i = 0 ; i < 8; ++i){
			for(int j = 0 ; j < 8; ++j){
				a[i][j] = 0;
			}
		}
		solve(a, z);
	}
	return 0;
}
/* Main() Ends Here */


