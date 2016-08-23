#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int cases;
	int n;
	long long a;
	cin>>cases;
	while(cases--){
		cin>>a>>n;
		if(n==0){
			cout<<"Airborne wins."<<endl;
		}else{
			cout<<"Pagfloyd wins."<<endl;
		}
	}

	return 0;
}