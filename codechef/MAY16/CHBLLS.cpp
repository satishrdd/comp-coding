#include<iostream>
#include<stdio.h>
 
using namespace std;
 
 
 
 
int main(int argc, char const *argv[])
{
	/* code */
	fflush(stdout);
	cout<<"1\n4 1 3 3 4\n4 1 2 2 5\n"<<std::flush;
	int temp;
	cin>>temp;
	if(temp==0){
		fflush(stdout);
		cout<<2<<endl<<1<<endl;
	}else if(temp==1){
		fflush(stdout);
		cout<<2<<endl<<4<<endl;
	}else if(temp==-1){
		fflush(stdout);
		cout<<2<<endl<<5<<endl;
	}else if(temp==2){
		fflush(stdout);
		cout<<2<<endl<<3<<endl;
	}else if(temp==-2){
		fflush(stdout);
		cout<<2<<endl<<2<<endl;
	}
	return 0;
} 