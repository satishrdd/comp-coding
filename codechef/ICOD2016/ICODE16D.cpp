#include <iostream>
#include<algorithm>
using namespace std;
 
int main() {
	// your code goes here
	int cases;
	cin>>cases;
    while(cases--){
        long long n;
        cin>>n;
        long long a[4],pre[4];
        
           cin>>pre[0]>>pre[1]>>pre[2]>>pre[3];
          
               long long w,x,y,z;
          n = n-1;
          
        while(n--){
            cin>>a[0]>>a[1]>>a[2]>>a[3];
            w = min(min(a[0]+pre[1],a[0]+pre[2]),a[0]+pre[3]);
            x = min(min(a[1]+pre[0],a[1]+pre[2]),a[1]+pre[3]);
            y = min(min(a[2]+pre[0],a[2]+pre[1]),a[2]+pre[3]);
            z = min(min(a[3]+pre[0],a[3]+pre[1]),a[3]+pre[2]);
            pre[0] = w;
            pre[1] = x;
            pre[2] = y;
            pre[3] = z;
           
            
        }
       cout<<min(min(pre[0],pre[1]),min(pre[2],pre[3]))<<endl;
       
    }
	
	return 0;
}

