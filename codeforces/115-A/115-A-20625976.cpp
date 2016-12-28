#include<bits/stdc++.h>


using namespace std;

signed main()
{
  /* code */
vector<int> q1;
vector<int> q2;
vector<int> rem;



 int n;
 cin>>n;
 int ar[n+1];
 map<int,int> ma;
 for(int i=1;i<=n;i++){
 	cin>>ar[i];
 	if(ar[i]==-1){
 		ma[i]=0;
 	}else{
 		ma[i] =1;
 	}
 }
	
int count =1;
int flag=0;
while(true){
	for(int i=1;i<=n;i++){
		if(ma[i]!=0){
			flag=1;
			break;
		}
	}

	if(flag==0){
		cout<<count<<endl;
		break;
	}else{
		for(int i=1;i<=n;i++){
			if(ar[i]!=-1){
				if(ma[ar[i]]==0&&(ma[i]!=0)){
					ma[i]=2;
				}
			}
		}
		for(int i=1;i<=n;i++){
			if(ar[i]!=-1){
				if(ma[i]==2){
					ma[i]=0;
				}
			}
		}
	}
	flag=0;
	count++;
}
 

  return 0;
}