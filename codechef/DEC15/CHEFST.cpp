#include<iostream>
#define MIN(a, b) ((a) < (b) ? (a) : (b))
 
using namespace std;
int main(){
    int cases;
    long long a,b,min;
    cin>>cases;
    while(cases--){
        cin>>a>>b>>min;
 
        if(MIN(a,b) <= min*(min+1)/2){
           cout<<a + b - 2*MIN(a,b)<<endl;
        }
 
        else
          cout<<a+b-min*(min+1)<<endl;
      
      }
    
   return 0; 
    
} 
