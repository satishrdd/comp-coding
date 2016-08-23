#include <iostream>
using namespace std;
 
 
void ConvertToBinary(long long n) /*Alex says: Good to use unsigned int if u can*/
{
    if (n / 5 != 0) {
        ConvertToBinary(n / 5);
    }
    printf("%d", (n % 5)*2);
}
 
int main() {
	// your code goes here
	long long n;
	long cases;
	cin>>cases;
	while(cases--){
	cin>>n;
	ConvertToBinary(n-1);
	cout<<endl;
	}	
	return 0;
}
