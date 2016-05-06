#include <iostream>
using namespace std;
 
bool istrue(string s){
	for(int i = 0 ;i<s.length();i++){
		if(s[i]!=s[s.length()-i-1]){
			return false;
		}
	}
	return true;
}
int main() {
	
	// your code here
	int cases;
	string s;
	cin>>cases;
	while(cases--){
		cin>>s;
		if(istrue(s)){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
 
	return 0;
} 