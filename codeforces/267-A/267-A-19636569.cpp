#include<iostream>


using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long a,c,b;
	long n;
	cin>>n;
	while(n--){
		cin>>a>>b;
		long long count =0;
		while(true){
			if(a==0||b==0){
				break;
			}
			if(a<b){
				count+=b/a;
				b= b%a;
			}else{
				count+=a/b;
				a = a%b;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}