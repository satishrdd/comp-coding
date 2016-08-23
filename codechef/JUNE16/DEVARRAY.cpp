#include <stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
 
int main(void) {
	// your code goes here
	long n,q;
	cin>>n>>q;
	long long temp,min,max,t;
	
	cin>>temp;
	min = max= temp;
	
	for(long i=1;i<n;i++){
	    cin>>temp;
	    if(temp<min){
	        min = temp;
	    }
	    if(temp>max){
	        max =temp;
	    }
	}
	
 
	
	while(q--){
	    cin>>t;
	    if(t>=min && t<=max){
	        cout<<"Yes\n";
	    }else{
	        cout<<"No\n";
	    }
	}
	
	return 0;
}
