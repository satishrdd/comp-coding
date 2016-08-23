#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;


int main(){
    int n;
    cin>>n;
    int ar[n];
    
   int pos,pos1;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]==1){
            pos = i+1;
        }
        else if(ar[i]==n){
            pos1 = i+1; 
        }
    }
    
    cout<<max(max(abs(pos-1),abs(pos1-1)),max(abs(pos-n),abs(pos1-n)))<<endl;
    return 0;
}