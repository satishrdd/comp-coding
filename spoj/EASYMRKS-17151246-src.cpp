#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int cases;
	int n,k;
	cin>>cases;
	for(int i=1;i<=cases;i++){
		cin>>n>>k;
		int res = (n+1)*k;
		int temp;
		for(int j=0;j<n;j++){
			cin>>temp;
			res = res - temp;
		}
		
		cout<<"Case "<<i<<": "<<res<<endl;
		
	}

	return 0;
}