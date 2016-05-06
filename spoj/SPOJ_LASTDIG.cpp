#include <iostream>
#include<cstring>
#include<string.h>
#include<cmath>
using namespace std;
 
main()
{
	/* code */
	int marshal[21][5];
	for(int i=1;i<=20;i++){
		for(int j=1;j<=4;j++){
			marshal[i][j] = (((long long)pow(i,j))%10);
			//cout<<marshal[i][j]<<" ";
		}
		marshal[20][0] = 0;
		marshal[10][0] = 0;
		//cout<<endl;
	}
 
 
	int a,cases,i;
	cin>>cases;
	long long b;
	while(cases--){
		cin>>a;
		cin>>b;
		if(a==0)
			cout<<"0\n";
		else if(b==0){
			cout<<"1\n";
		}
		else if(b%4==0)
			cout<<marshal[a][4]<<endl;
		else
		cout<<marshal[a][b%4]<<endl;
	}
 
 
	
 
}
 