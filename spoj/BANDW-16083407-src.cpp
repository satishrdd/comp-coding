#include <iostream>
using namespace std;

int main() {
	
	// your code here
	string a,b;
	while(true){
		cin>>a>>b;
		if(a=="*"&&b=="*"){
			break;
		}else{
			int len = a.length();
			
		int i=0,count=0;
      while(i<a.length())
      {
         if(a[i]!=b[i])
         {
            count++;
            while(a[i]!=b[i])
            i++;
         }
         i++;
      }
			cout<<count<<endl;
		}
	}

	return 0;
}