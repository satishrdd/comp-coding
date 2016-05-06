#include <iostream>
using namespace std;
 
int main() {
	
	// your code here
	int cases;
	long n;
	cin>>cases;
	for(int j =1;j<=cases;j++){
		cin>>n;
		long long ar[n];
		long long sum=0,needed=0;
		
		
		for(long i =0;i<n;i++){
			cin>>ar[i];
			sum = ar[i] + sum;
			if(sum<0){
				needed = needed - sum;
                sum = 0;
			}
		}
		cout<<"Scenario #"<<j<<": "<<needed+1<<endl;
        sum = 0;
        needed = 1;
	}
 
	return 0;
} 