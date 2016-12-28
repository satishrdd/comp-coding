/*****************************************************************************************/
/*                                                                                          */
/*                      Satish Reddy Yerva                                                      */
/*                                                                                          */
/*****************************************************************************************/
 
#include<iostream>
#include<cstring>
#include<stdio.h>
#include<cmath>



 
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
    int flag=0;
    string s1,s2;
    cin>>s1;
    int count0=0,count1=0;
    if(s1[0]=='0'){
        count0++;
    }else{
        count1++;
    }
    for(int i=1;i<s1.length();i++){
        
        if(s1[i]=='0'){
            if(s1[i-1]=='0'){
                count0++;
            }else{
                count1=0;
                count0++;
            }
        }else{
            if(s1[i-1]=='1'){
                count1++;
            }else{
                count0=0;
                count1++;
            }
        }

        if(count0==7||count1==7){
            flag=1;
            break;
        }
    }

    if(flag==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    


    return 0;
}