#include <iostream>
using namespace std;
 
int main() {
	
	// your code here
	long long n;
	cin>>n;
	if(n%10!=0){
		cout<<1<<endl<<n%10<<endl;
	}else{
		cout<<2<<endl;
	}
	return 0;
} 