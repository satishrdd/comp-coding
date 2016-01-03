#include<iostream>
using namespace std;
int i,j,l,k;
int main(){
	string s;
	while(true){
		cin>>k;
		if(k==0){
			break;
		}
		cin>>s;
		char arr[s.length()];
		l=s.length()/k;
		for(i=1;i<=l;i++){
			if(i%2!=0){
				for(j=k*(i-1);j<i*k;j++){
					arr[j]=s[j];
				}
			}
			else
				for(j=k*(i-1);j<i*k;j++){
					arr[j]=s[i*k-1-(j-k*(i-1))];
				}
			
		}
 
		for(i=0;i<k;i++){
			j=i;
			while(j<s.length()){
				cout<<arr[j];
				j+=k;
			}
		}
		cout<<" "<<endl;
	
    }
 
	return 0;
}