#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char arr[1001];
    int i,j,k,l,n,num;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d%d",&n,&k);
        scanf("%s",arr);
        unsigned long ans =0;
        for (j=0;j<strlen(arr)-k;j++){
            unsigned long pro = 1;
            for(l=j;l<j+k;l++){
                pro = pro*(arr[l]-'0');
                
                }
            if(pro>ans){
                    ans = pro;
                
            }
            
        }
        printf("%lu\n",ans);
    }
    return 0;
}
