#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int temp;
	std::vector<int> pos,neg,zer;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp>0){
			pos.push_back(temp);
		}else if(temp<0){
			neg.push_back(temp);
		}else{
			zer.push_back(temp);
		}
	}

	if(neg.size()>=3){
		cout<<1<<" "<<neg[0]<<endl;
		cout<<2<<" "<<neg[1]<<" "<<neg[2]<<endl;
		cout<<neg.size()-3+pos.size()+zer.size()<<" ";
		for(int i=3;i<neg.size();i++){
			cout<<neg[i]<<" ";
		}
		for(int i=0;i<pos.size();i++){
			cout<<pos[i]<<" ";
		}
		for(int i=0;i<zer.size();i++){
			cout<<zer[i]<<" ";
		}
		cout<<endl;

	}else{
		cout<<1<<" "<<neg[0]<<endl;
		cout<<1<<" "<<pos[0]<<endl;
		cout<<neg.size()-1+pos.size()-1+zer.size()<<" ";
		for(int i=1;i<neg.size();i++){
			cout<<neg[i]<<" ";
		}
		for(int i=1;i<pos.size();i++){
			cout<<pos[i]<<" ";
		}
		for(int i=0;i<zer.size();i++){
			cout<<zer[i]<<" ";
		}		
		cout<<endl;
	}

	return 0;
}