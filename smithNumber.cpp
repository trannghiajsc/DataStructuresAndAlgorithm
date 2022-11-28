#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;
bool smithNumber(int n)
{
    int sum_digit = 0;
    int fake_n = n;
    while(fake_n != 0){
        sum_digit += fake_n%10;
        fake_n /= 10;
    }
    int sum_prime = 0;
    for(int i = 2; i <= n;){
        if(n%i == 0){
            if(i >= 10){
            	int fake_i = i;
			    while(fake_i != 0){
			        sum_prime += fake_i%10;
			        fake_i /= 10;
    			}
			}
			else
				sum_prime += i;
            n /= i;
        }
        else
            ++i;
    }
    if(sum_digit == sum_prime)
        return true;
    else
        return false;
}
int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	cout<<smithNumber(n);
	return 0;
}


