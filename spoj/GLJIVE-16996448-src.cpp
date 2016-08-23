#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;


int main(){
    int ar[10];
    int sum=0,sum1=0;
    for(int i=0;i<10;i++){
        cin>>ar[i];
        
            sum = sum + ar[i];
        
        
        if (sum >= 100) {
            if (sum - 100 <= 100 - (sum-ar[i])) printf("%d\n", sum);
            else printf("%d\n", sum-ar[i]);
            return 0;
        }
    }
    
   printf("%d\n", sum);
    return 0;
}