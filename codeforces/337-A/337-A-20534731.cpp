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

   int n,m;
   cin>>n>>m;
   int ar[m];
   for(int i=0;i<m;i++){
    cin>>ar[i];
   }
   sort(ar,ar+m);
   int mi = 10000;
   for(int i=n-1;i<m;i++){
        if((ar[i]-ar[i-n+1]) < mi){
            mi = ar[i] - ar[i-n+1];
        }
   }
   cout<<mi<<endl;

    return 0;
}