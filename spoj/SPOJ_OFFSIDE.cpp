#include<iostream>
 
 
 
using namespace std;
 
 
 
 
 
 
int main(int argc, char const *argv[])
{
	/* code */
	int a,b;
	while(true){
		cin>>a>>b;
		int min=10001;
		int count = 0;
		if(a==0&&b==0){
			return 0;
		}
		int ar1[a],ar2[b];
		for(int i=0;i<a;i++){
			cin>>ar1[i];
			if(ar1[i]<min)
				min = ar1[i];
		}
		for(int i=0;i<b;i++){
			cin>>ar2[i];
			if(ar2[i]<=min){
				count++;
			}
		}
 
		if(count>=2){
			cout<<"N\n";
		}else{
			cout<<"Y\n";
		}
		count = 0;
		min = 10001;
	}
	return 0;
}