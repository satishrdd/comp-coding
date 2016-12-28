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

    int n,k;
    cin>>n>>k;
    int ar[n];
    int sum =0,mi=1000000;
    int j=0;
    int pos=0;
    int sum1=0;
    for(int i=0;i<k;i++){
        cin>>ar[i];
        sum+=ar[i];
    }
    mi=sum;
    pos =1;
    for(int i=k;i<n;i++){
       
        cin>>ar[i];
        sum+=ar[i];
        sum -=ar[j];
        j++;
        
        if(mi>sum){
            mi =sum;
            pos = j+1;
        }
    }
    cout<<pos<<endl;
    return 0;
}