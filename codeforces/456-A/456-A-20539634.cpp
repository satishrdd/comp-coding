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
#include<utility>



 
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
    int n;
    cin>>n;
    int a[n],b[n];
    int tmem,tmem1;
    vector<pair<int,int>> p;
    
    for(int i=0;i<n;i++){
        cin>>tmem>>tmem1;
        p.push_back(make_pair(tmem,tmem1));

    }

    sort(p.begin(),p.end());
    int flag=0;
    for(int i=1;i<n;i++){
    
        if((p[i].second) >= (p[i-1].second)){
            ;
        }else{
            flag=1;
            break;
        }
    }

  
    
    if(flag==1){
        cout<<"Happy Alex"<<endl;
    }else{
        cout<<"Poor Alex"<<endl;
    }

    return 0;
}