#include<iostream>


using namespace std;




int main(int argc, char const *argv[])
{
	/* code */
	long long a,b,c;
	cin>>a>>b>>c;
	if(c==0){
		if(a==b){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
	else if((b-a)%c == 0 && (b-a)/c>=0){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
	return 0;
}