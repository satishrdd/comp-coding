
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
using namespace std;




int main() {
	int budget,num;
	while(true){
	cin>>budget>>num;
	if(budget==0&&num==0){
		return 0;
	}
	int cost[num],fun[num];
	for(int i=0;i<num;i++){
		cin>>cost[i]>>fun[i];
	}
	int m[num+1][budget+1];
	for(int j=0;j<=budget;j++){
		m[0][j]=0;
	}
	
	int prev=0;
	for(int i=1;i<=num;i++){
	
		for(int j=0;j<=budget;j++){
			if(cost[i-1]>j){
				m[i][j] = m[i-1][j];
			}else{
				m[i][j] = max(m[i-1][j],m[i-1][j-cost[i-1]]+fun[i-1]);
			}


			if(i==num&&j>=1){
				if(m[i][j]>m[i][j-1]){
					prev =j;
				}
			}
		}
		
	}
	
		cout<<prev<<" "<<m[num][budget]<<endl;
	
	//cout<<prev<<"  "<<m[budget]<<endl;
}
	return 0;
}