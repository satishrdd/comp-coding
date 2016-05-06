#include <iostream>
#include<algorithm>
using namespace std;
 
int main() {
	
	// your code here
	int n;
	while(true){
		cin>>n;
		if(n==0){
			break;
		}else{
			int ar[n];
			int br[n-1];
			int flag = 1;
			
			for(int i=0;i<n;i++){
				cin>>ar[i];
			}
			sort(ar,ar+n);
			for(int i =0;i<n-1;i++){
				br[i] = ar[i+1] - ar[i];
				if(br[i]>200){
					
					flag =0 ;
                    break;
				}
			}
			if(1422-ar[n-1]>100){
                flag = 0;
            }
			if(flag==1){
				cout<<"POSSIBLE"<<endl;
			}else{
                cout<<"IMPOSSIBLE"<<endl;
            }
		}
	}
 
	return 0;
} 