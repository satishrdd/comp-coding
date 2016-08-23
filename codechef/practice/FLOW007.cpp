#include <algorithm>
#include <iostream>
 
using namespace std;
 
 
 
int main(){
	int cases;
	cin>>cases;
	while(cases--){
		string str;
		cin>>str;
	
		reverse(str.begin(),str.end());
			str.erase(0, min(str.find_first_not_of('0'), str.size()-1));
	    cout<<str<<endl;
	    str.clear();
	}
return 0;	
} 
