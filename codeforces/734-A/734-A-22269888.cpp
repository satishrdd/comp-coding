#include<iostream>


using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	string s;
	int n;
	cin>>n;
	cin>>s;
	int a=0,b=0;
	for(int i=0;i<n;i++){
		if(s[i]=='A'){
			a++;
		}else{
			b++;
		}
	}
	if(a>b){
		cout<<"Anton"<<endl;
	}else if(a<b){
		cout<<"Danik"<<endl;
	}else{
		cout<<"Friendship"<<endl;
	}
	return 0;
}