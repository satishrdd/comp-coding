#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int n,j;
	cin>>n;
	int ar[n] = {0};
	for(int i=0;i<n;i++){
	   cin>>j;
	   if(j>0){
	       ar[j-1] = 1;
	   }
	}
	
	for(int i =0;i<n;i++){
	    if(ar[i] != 1)
	    cout<<i+1<<" ";
	}
 
	return 0;
}
