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

    int c25=0,c50=0,c100=0,flag=0;
    int n;
    cin>>n;
    int temp;
    while(n--){
        cin>>temp;
        if(temp==25){
            c25++;
        }else if(temp==50){
            c50++;
            if(c25>0){
                c25--;
            }else{
                flag=1;
            }
        }else{
            c100++;
            if((c50>0)&&(c25>0)){
                c50--;
                c25--;
            }else{
                if(c25>2){
                    c25-=3;
                }else{
                    flag=1;
                }
            }
        }
    }
    if(flag==1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    return 0;
}