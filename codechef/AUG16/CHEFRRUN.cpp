#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<stack>
#define mod 1000003
using namespace std;
stack<int> mystack;
 #define fast_io ios_base::sync_with_stdio(0);cin.tie(0)
 
 
 
int main(){
    fast_io;
    long cases;
    cin>>cases;
    long long n;
    while(cases--){
        
        cin>>n;
        
        long long b[n] = {0};
        long long visited[n] = {0};
        
        long long temp=0;
        for(long long i=0;i<n;i++){
            cin>>temp;
            b[i] = (i+temp+1)%n;
        }
      long long count=0;
      
  
 
   for(long long i=0;i<n;i++){
   	if (visited[i]==0){
   		visited[i]++;
   		long long j= b[i];
   		mystack.push(i);
        while(visited[j]!=1){
            visited[j]++;
            mystack.push(j);
            j = b[j];
            
        }
        
        int count1=0;
        while(!(mystack.empty()) && mystack.top()!=j){
            count1++;
            mystack.pop();
        }
        if(!(mystack.empty())&&mystack.top()==j){
            count1++;
            count= count+count1;
            mystack.pop();
        }
        
       while(!mystack.empty()){
           
           mystack.pop();
       }
   	}
   }
 
   
   cout<<count<<endl;
   count=0;
 
    }
    return 0;
}
