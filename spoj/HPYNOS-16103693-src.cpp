#include <iostream>
#include<cstring>
using namespace std;

long long calculate(long long n){
    long long ans=0;
    while(n!=0){
        ans = ans + (n%10)*(n%10);
        n = n/10;
    }
    return ans;
}

int main() {
	
	// your code here
	long long n;
    cin>>n;
    int i=1;
    
    while(true){
    long long ans = calculate(n);
        n = ans;
    if(ans==1){
        cout<<i<<endl;
        break;
    }else if(ans==4||ans ==20||ans==16||ans== 37||ans== 58||ans==89||ans==145||ans== 42){
        cout<<-1<<endl;
        break;
    }else{
        i++;
    }
    }
        return 0;
        
}