#include "iostream"
 
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	int cases;
	cin>>cases;
	while(cases--){
		long long n;
		cin>>n;
		long long ar[n];
		for(int i =0 ;i<n ;i++){
			cin>>ar[i];
		}
		long long start = 0;
		long finish = 0;
		long long i =0;
		long long runsum = ar[0];
		long long maxsum = ar[0];
		for (long long j = 1; j < n; ++j)
		{
			/* code */
			if(ar[j]>=(runsum + ar[j])){
				runsum = ar[j];
				i = j;
			}else 
			runsum += ar[j];
 
			if(runsum>=maxsum){
				maxsum = runsum;
				start = i;
				finish = j;
			}
 
		}
 
 
		if(maxsum <=0){
			cout<<0<<" "<<0<<" "<<0<<endl;
		}else{
		cout<<start<<" "<<finish<<" "<<maxsum<<endl;}
	}
	return 0;
} 
