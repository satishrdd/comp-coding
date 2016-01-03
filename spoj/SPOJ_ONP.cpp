    #include<iostream>
    #include<stack>
    #include<cstring>
    #include<stdlib.h>
     
    using namespace std;
     
    int main(int argc, char const *argv[])
    {
    	/* code */
    	string s;
    	stack<char> mystack;
    	int cases,i;
    	cin>>cases;
    	while(cases--){
    		cin>>s;
    		int size = s.length();
    		string newstring;
    		newstring = "";
    		for (int i = 0; i < size; ++i)
    		{
    			/* code */
    			if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
    				mystack.push(s[i]);
    			}
    			else if(s[i]=='('){
    				;
    			}else if(s[i]==')'){
    				newstring = newstring + mystack.top();
    				mystack.pop();
    			}else{
    				newstring = newstring + s[i];
    			}
     
    		}
    		cout<<newstring<<endl;
    		newstring.clear();
    	}
    	return 0;
    } 