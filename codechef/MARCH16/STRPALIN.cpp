#include<iostream>
 
 
#include<cstring>
 
 
using namespace std;
 
 
int main(int argc, char const *argv[])
{
	/* code */
	int  cases;
	cin>>cases;
	string s1,s2;
	while(cases--){
		cin>>s1>>s2;
		int flag=0;
		int n=s2.length();
		for(int i=0;i<n;i++){
			
				string s3=s2.substr(i,1);
				//cout<<s3<<endl;
				if(s1.find(s3) != std::string::npos){
					flag=1;
				}
			
		}
		if(flag==1){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
		flag=0;
	}
	return 0;
} 
