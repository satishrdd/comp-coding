#include <iostream>
using namespace std;
 
int main() {
	
	// your code here
	
	long n;
	while(true){
		cin>>n;
        if(n==0){
            break;
        }
		long ar[n];
		int flag =0;
		for(int i = 0;i<n;i++){
			cin>>ar[i];
		}
		for(int i=0;i<n;i++){
			if(ar[ar[ar[i]-1]-1] != ar[i]){
				flag = 1;
				break;
			}
		}
		if(flag==1){
			cout<<"not ambiguous\n";
		}else{
			cout<<"ambiguous\n";
		}
	}
 
	return 0;
} 