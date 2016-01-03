    #include <iostream>
    #include <cstring>
    #include <string.h>
    #include <sstream>
    #include <stdlib.h>
    using namespace std;
    template <typename T> 
    string to_string(T val){
        stringstream stream;
        stream << val;
        return stream.str();
    }
    int main(int argc, char const *argv[])
    {
    	/* code */
     
    	unsigned long i=5,n,k,count =0,cases;
    	cin>>cases;
    	while(cases--){
    		cin>>n;
    		while(true){
    		if(n/i>0){
    			count = count + n/i;
    		}else
    			break;
    		i = i*5;
    	}
    	cout<<count<<endl;
    	count = 0;
    	i=5;
    	}
    	return 0;
    }
      