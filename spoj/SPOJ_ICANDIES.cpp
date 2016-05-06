#include<iostream>
#include<bitset>
using namespace std;
int main(){
    int cases;
   long n;
    cin>>cases;
    for(int i = 1;i<=cases;i++){
        cin>>n;
        while(true){
            n = n-5;
            if(n<0){
                break;
            }
            if(n%3==0){
                break;
            }
            
        }
        if(n<0){
            cout<<"Case "<<i<<": "<<-1<<endl;
        }else{
            cout<<"Case "<<i<<": "<<n<<endl;
        }
    }
    return 0;
} 