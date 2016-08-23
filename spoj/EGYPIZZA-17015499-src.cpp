#include <iostream>
#include<cmath>
using namespace std;

int main() {
	
	// your code here
	int n;
	cin>>n;
	int ar[3];
	string s;
    ar[0]=0;
    ar[1]=0;
    ar[2]=0;
	while(n--){
		cin>>s;
		if(s=="1/4"){
			ar[0]++;
		}else if(s=="1/2"){
			ar[1]++;
		}else if(s=="3/4"){
			ar[2]++;
		}
	}
    int count =0;
   
	
	int flag;
	count = ar[1]/2;
	ar[1] = ar[1]-(count*2);
	if(ar[0]>ar[2]){
		count = count + ar[2];
		ar[0] = ar[0]- ar[2];
		ar[2]=0;
		flag=0;
	}else if(ar[0]==ar[2]){
		count = count+ar[2];
		ar[0]=0;
		ar[2]=0;
		flag=1;
	}else{
		count = count + ar[0];
		ar[2] = ar[2]-ar[0];
		count = count + ar[2];
		ar[0]=0;
		ar[2]=0;
		flag=2;
	}
	
	if(flag==0){
		if(ar[1]>0){
           
			count++;
			ar[1]--;
			ar[0] = ar[0]-2;
		}
       
		count = count + ceil((float)ar[0]/4);
        //cout<<ar[0]<<endl;
       
        ar[0]=0;
	}else {
		if(ar[1]>0){
			count++;
			ar[1]--;
		}
	}
	cout<<count+1<<endl;
	return 0;
}