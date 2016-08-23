#include <iostream>
#include<cstring>
using namespace std;

int main() {
	
	// your code here
	string s;
	int cases;
	cin>>cases;
	while(cases--){
		cin>>s;
		for(int i=0;i<s.length()/2;i =i+2){
			cout<<s[i];
		}
		cout<<endl;
	}

	return 0;
}