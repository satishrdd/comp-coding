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
    	string s1,s2;
    	int i,k,j,count = 0,cases;
    	cin>>cases;
    	while(cases--){
    		count =0;
    	cin>>s1;
    	cin>>s2;
    	for (i = 0; i < s1.length()/2; ++i)
    	{
    		/* code */
    		swap(s1[i],s1[s1.length()-i-1]);
    	}
    	for (i = 0; i < s2.length()/2; ++i)
    	{
    		/* code */
    		swap(s2[i],s2[s2.length()-i-1]);
    	}
    	
    	k= atoi(s1.c_str()) + atoi(s2.c_str());
     
    	string s = to_string(k);
     
    for (i = 0; i < s.length()/2; ++i)
    	{
    		/* code */
    		swap(s[i],s[s.length()-i-1]);
    	}
    for(i=0;i<s.length();i++){
    if(s[i]=='0')
    	count++;
    else
    	break;
     
    }	
    	for(j=count;j<s.length();j++)
    		cout<<s[j];
    cout<<endl;
    }
    return 0;
     
    } 