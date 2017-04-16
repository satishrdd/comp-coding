#include<bits/stdc++.h>


using namespace std;




int main(int argc, char const *argv[])
{
	/* code */
	int n;
	int flag=0;
	int temp;
	cin>>n;
	vector<int> res;
	for(int i=1;i<=n;i++){
		flag=0;
		for(int j=1;j<=n;j++){
			cin>>temp;
			if(temp==-1||temp==0||temp==2){
				;
			}else{
				flag=1;
			}
		}
		if(flag==0){
			res.push_back(i);
		}
	}
	cout<<res.size()<<endl;
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
	cout<<endl;
	return 0;
}