// C++ program to print all palindromic partitions of a given string
#include<bits/stdc++.h>
using namespace std;

// A utility function to check if str is palindrome
bool isPalindrome(string str, int low, int high)
{
	while (low < high)
	{
		if (str[low] != str[high])
			return false;
		low++;
		high--;
	}
	return true;
}
vector<vector<string>> temp;
vector<string> s;
void f(int start, vector<vector<string>> &temp, vector<string> &s, string str){
	if(start >= str.size()){
		temp.push_back(s);
		return;
	}
	for(int i = start; i < str.size(); ++i){
		if(isPalindrome(str, start, i)){
			s.push_back(str.substr(start, i-start+1));
			f(i+1, temp, s, str);
			s.pop_back();
		}
	}
}
int main()
{
	string str = "adcdc";
	vector<vector<string>> temp;
	vector<string> s;
	f(0, temp, s, str);
	for(int i = 0 ; i < temp.size(); ++i){
		for(int j = 0 ; j < temp[i].size(); ++j){
			cout<<temp[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

