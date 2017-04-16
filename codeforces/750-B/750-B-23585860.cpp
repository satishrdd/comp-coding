#include<iostream>


using namespace std;


int main(){
	long long med=0;
	
	int n,flag=0;
	cin>>n;
	int a[n];
	string s[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>s[i];
	}

	for(int i=0;i<n;i++){
		if(med==20000&&s[i]!="North"){
			flag=1;
			break;
		}
		if(med==0&&s[i]!="South"){
			flag=1;
			break;
		}
		if(s[i]=="North"){
			med-=a[i];
		}
		if(s[i]=="South"){
			med+=a[i];
		}
		if(med>20000||med<0){
			flag=1;
			break;
		}
	}
	if(flag==0&&med==0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}