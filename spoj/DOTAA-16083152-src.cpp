#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int cases;
	cin>>cases;
	int n,m,d;
	while(cases--){
		cin>>n>>m>>d;
		int ar[n];
		int k =0;
		for(int i=0;i<n;i++){
			cin>>ar[i];
		while((ar[i]-=d)>0) {
                k++;
            }
		}
		if(k>=m){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}