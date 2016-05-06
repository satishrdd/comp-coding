#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<cmath>
 
using namespace std;
 
 
 
int countSetBits(int n)
{
  int ans =0;
  while(n!=0){
  	if(n%2==0){
  		ans = ans*2;
  	}else{
  		ans = ans*2 + 1;
  	}
  	n = n/2;
  }
  return ans;
}
 
int main(int argc, char const *argv[])
{
	/* code */
	
	int a,cases;
	cin>>cases;
	while(cases--){
		cin>>a;
		if(a%2!=0){
			cout<<a<<endl;
		}else{
			//cout<<countSetBits(a)<<endl;
			cout<<countSetBits(a)<<endl;
		}
	}
	
	return 0;
}