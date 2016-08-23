#include <iostream>
#include<string.h>
using namespace std;
#define mod 1000000007
 
 
int main() {
	// your code goes here
	long cases;
	cin>>cases;
	 long n ;
long long array[100002][2];
memset(array,0,sizeof(array[0][0])*(100002)*2);
array[0][0] = 1;
array[0][1] = 0;
array[1][0] = 0;
array[1][1] = 1;
array[2][0] = 2;
array[2][1] = 1;
	    
	    for(long i = 3;i<100002;i++){
	        array[i][0] = ((array[i-3][0]%mod) + (array[i-1][0]%mod) +(array[i-2][0]%mod))%mod; 
	         array[i][1] = ((array[i-3][1]%mod) + (array[i-1][1]%mod) +(array[i-2][1]%mod))%mod; 
	    }
	    while(cases--){
	        cin>>n;
	    cout<<array[n][0]<<" "<<array[n][1]<<endl;
	}
	return 0;
}
