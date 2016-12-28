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



inline bool cmp(const pair<int ,int>&p,const pair<int ,int> &q){
    if(p.second<q.second){
        return true;
    }else{
        return false;
    }
}


inline bool cmp1(const pair<int ,int>&p,const pair<int ,int> &q){
    if(p.first<q.first){
        return false;
    }else{
        return true;
    }

}




int main() {
    int n,k;
    cin>>n>>k;
    int p[n],t[n];
    pair<int ,int> pa[n+1];
    for(int i=0;i<n;i++){
        cin>>p[i]>>t[i];
        pa[i] = make_pair(p[i],t[i]);
    }

    sort(pa,pa+n,cmp1);
    int temp = pa[0].first;
    int j=0;
    int flag=0;


    for(int i=1;i<n;i++){

        if(pa[i].first==temp){
            flag=1;
        }else{
            flag=0;
            sort(pa+j,pa+i,cmp);
            j=i;
            temp = pa[i].first;
        }
    }
    if(flag==1){
        sort(pa+j,pa+n,cmp);
    }

    
    
   int count=1;
   for(int i=k-2;i>=0;i--){
    if(pa[i]==pa[k-1]){ 
        count++;
    }else{
        break;
    }
   }

   for(int i=k;i<n;i++){
    if(pa[i]==pa[k-1]){
        count++;
    }else{
        break;
    }
   }
   cout<<count<<endl;
    return 0;
}