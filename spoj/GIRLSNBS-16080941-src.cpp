#include<iostream>
using namespace std;
int main(){
    int n,m;
    while(true){
        cin>>n>>m;
        if(n==-1&&m==-1){
            break;
        }else if(n==0&&m==0){
            cout<<0<<endl;
        }else{
            if(n<m){
                if((m/(n+1))*(n+1) == m){
                    cout<<m/(n+1)<<endl;
                }else{
                    cout<<m/(n+1)+1<<endl;
                }
            }else if(m<n){
                if((n/(m+1))*(m+1) == n){
                    cout<<n/(m+1)<<endl;
                }else{
                    cout<<n/(m+1)+1<<endl;
                }
            }else{
                cout<<1<<endl;
            }
        }
    }
    return 0;
}