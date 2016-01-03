    #include<iostream>
     
     
    using namespace std;
     
     
    int main(int argc, char const *argv[])
    {
    	/* code */
    	int cases;
    	long long term3,term3last,sum;
    	long long n,d,m;
    	cin>>cases;
    	while(cases--){
    		cin>>term3>>term3last>>sum;
    		n = (sum*2)/(term3last+term3);
    		d = (term3last-term3)/(n-5);
    		m = term3-2*d;
    		cout<<n<<endl;
    		for(int i=0;i<n;i++){
    			cout<<m+d*i<<" ";
    		}
    	}
    	return 0;
    } 