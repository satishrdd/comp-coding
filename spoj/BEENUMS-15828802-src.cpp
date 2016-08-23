#include <iostream>
using namespace std;

int main() {
	
	// your code here
	long n;
	while(true){
		cin>>n;
		if(n==-1){
			break;
		}else{
			if(n==1)
                cout<<"Y\n";
           
           /* you compare the given n value as you increase the value "1" by 6, 12, 24 etc, progressively. If the value n is arrived within that process, then it's a beehive number, else it is not. */

            else if(n>1)
            {
                long i = 1;
                long j = 1;
                while(i<n)
                {
                    i+=(j*6);
                    j++;
                }
                if(i==n)
                    cout<<"Y\n";
                else
                    cout<<"N\n";
            }
		}
	}

	return 0;
}