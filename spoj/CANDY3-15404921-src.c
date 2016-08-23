#include<stdio.h>

int main(){
    int cases ,b,num,i;
    long long sum=0,a;
    scanf("%d",&cases);
    while(cases--){
        scanf("%d",&num);
        for(i=0;i<num;i++){
            scanf("%lld",&a);
            sum = sum +a;
            if(sum>=num)
                sum = sum%num;
        }
        if(sum==0)
            printf("YES\n");
        else
            printf("NO\n");
        sum =0;
    }
    return 0;
}