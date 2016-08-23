//offline


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;




int main(int argc, char const *argv[])
{
	/* code */
	int n,h;
	cin>>n>>h;
	int temp,count=0;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp>h){
			count+=2;
		}else{
			count++;
		}

	}
	cout<<count<<endl;
	return 0;
}