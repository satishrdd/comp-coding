    #include <iostream>
    using namespace std;
     
    int main() {
    	// your code goes here
    	int cases;
    	long long n;
    	cin>>cases;
    	for(int k=0;k<cases;k++){
    	    cin>>n;
    	    long long ar[n];
    	    long long value = n;
    	    
    	    for(long long j=0;j<n;j++){
    	        cin>>ar[j];
    	        
    	    }
    	    if(n>1){
    	    for(long long i=0;i<n;i++){
    	        for(long long j=i+1;j<n;j++){
    	            if(ar[j]>=ar[j-1])
    	            value++;
    	            else
    	            break;
    	        }
    	    }
    	    }
    	    cout<<value<<endl;
    	   
    	}
    	return 0;
    }
     