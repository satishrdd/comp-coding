#include<iostream>
#include<cmath>


using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	long long a,b,c;
	cin>>a;
	if(a<=2){
		cout<<-1<<endl;
	}
	else if(a%2==0){
		b = (a/2)*(a/2)-1;
		c = b+2;
		if(a*a + b*b == c*c){
			cout<<b<<" "<<c<<endl;
		}else{
			cout<<-1<<endl;
		}
	}else{
		b = (a-1)*(a+1)/2;
		c = b+1;
		if(c*c==(a*a+b*b)){
			cout<<b<<" "<<c<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
	return 0;
}