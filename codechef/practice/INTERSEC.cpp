#include<iostream>
 
using namespace std;
int main(){
 
long long n, cases;
cin>>cases;
while(cases--){
cin>>n;
if(n==1){
cout<<"0"<<endl;
}else{
cout<<n*(n-1)/2<<endl;
}}
 
 
 
 
return 0;
} 
