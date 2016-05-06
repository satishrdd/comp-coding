#include<iostream>  
 
 
 
using namespace std;
 
 
 
 
 
 
 
long long C(long long n, long long r) {
    if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    long long i;
 
    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }
 
    return ans;
}
 
 
 
 
int main(){
 
 
 
    int cases;
    cin>>cases;
    long long a,b;
    while(cases--){
        cin>>a>>b;
        cout<<C(a-1,b-1)<<endl;
    }
} 