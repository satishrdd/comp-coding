/*****************************************************************************************/
/*                                                                                          */
/*                      Satish Reddy Yerva                                                      */
/*                                                                                          */
/*****************************************************************************************/
 
#include<iostream>
#include<cstring>
#include<stdio.h>
#include<cmath>
#include<vector>
#include<algorithm>



 
/* Input output defines. */
#define sd(n) scanf("%d", &n)
#define sl(n) scanf("%lld", &n)
#define slf(n) scanf("%lf", &n) 
#define pd(n) printf("%d", n);
#define pl(n) printf("%lld", n);
#define plf(n) printf("%0.9lf", n);
#define ps printf(" ")
#define pe printf("\n")

/* loops */


using namespace std;
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0)

using namespace std;





bool prime(long long n){
    
    return true;
}



int main() {

   int a,cases;
   cin>>cases;
   while(cases--){
   cin>>a;
   int k = 360/(180-a);
   if((k-2)*180==a*k){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }}   


    return 0;
}