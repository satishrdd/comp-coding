#include <stdio.h>
#include<string.h>
 
int main(void) {
	// your code goes here
	int i,j,n,cases,count=0;
	char str[100000];
	scanf("%d",&cases);
	for(j=0;j<cases;j++){
	    scanf("%s",str);
	  
	    for(i=1;i<strlen(str);i++){
	    
	        if(str[i-1]==str[i])
	        count++;
	       
	        
	    }
	    printf("%d\n",count);
	    count=0;
	    
	    
	    }
	   
	return 0;
}
 