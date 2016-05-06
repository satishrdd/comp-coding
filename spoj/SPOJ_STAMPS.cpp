#include<iostream>
#include<algorithm>
 
 
using namespace std;
 
 
 
 
 
 
int main(int argc, char const *argv[])
{
	/* code */
	int cases;
	long val;
	int n;
	cin>>cases;
	for(int j=1;j<=cases;j++){
		cin>>val>>n;
		int ar[n];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>ar[i];
		}
		int count =0;
		sort(ar,ar+n);
		for(int i=n-1;i>=0;i--){
			
				val=val-ar[i];
				count++;
				//cout<<val;
			
			if(val<=0){
				break;
			}
		}
		cout<<"Scenario #"<<j<<":\n";
		if(val<=0){
			cout<<count<<endl<<endl;
		}else {
			cout<<"impossible\n\n";
		}
		count =0;
	}
	return 0;
}
 