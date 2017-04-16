#include<iostream>


using namespace std;


int main(){
	int n,k;
	cin>>n>>k;
	k = 240-k;
	int i=1;
	while(true){
		if(5*i*(i+1)/2 > k){
			break;
		}else{
			;
		}
		i++;
	}
	cout<<min(n,i-1)<<endl;
}