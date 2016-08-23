#include <iostream>
#include<cstring>
using namespace std;
 
int main() {
	// your code goes here
	int n,cases,x,q,flag=0;
	char ch;
	
	    cin>>n>>q;
	    int ar[n+1] ;
	    memset(ar, 1,(n+1) * sizeof(ar[0]));
	    
	    for(int i =0;i<q;i++){
	        cin>>ch>>x;
	        if(ch=='I'){
	            for(int j = x;j<=n;j++){
	                if(ar[j]==0){
	                    cout<<j<<endl;
	                    flag=1;
	                    break;
	                }
	            }
	            if(flag==0){
	                cout<<-1<<endl;
	            }
	            flag=0;
	            
	        }else{
	            if(ar[x]==0){
	                ar[x]=1;
	            }else
	            ar[x] = 0;
	        }
	    }
	
}
