/**************************************************
   Had a dream, I was king, I woke up, still king.
***************************************************/
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define pb push_back
//memset(array,0,sizeof(array));
//array[m][n]={{0}};

int main(){
	 ios_base::sync_with_stdio(false);
	 vector<string> input;
	 string str;
	 int t,flag=0;
	 cin>>t;
	 for(int i=0;i<t;i++){
	 	cin>>str;
	 	input.push_back(str);
	 	if(str.substr(0,2)=="OO" && flag==0){
	 		flag=1;
	 		input[i]="++"+input[i].substr(2,3);
	 		
	 	}
	 	else if(str.substr(3,2)=="OO" && flag==0){
	 		flag=1;
	 		input[i]=input[i].substr(0,3)+"++";
	 	} 

	 }
	 if(flag==1){cout<<"YES"<<endl; for(int i=0;i<t;i++){cout<<input[i]<<endl;}}
	 else{cout<<"NO"<<endl;}


return 0;
}