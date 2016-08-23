#include<stdio.h>
#include<iostream>

#define PI 3.141592654

using namespace std;

int main()
{
        int T=1;
        //scanf("%d",&T);
        while(true)
        {
                double l;
                cin>>l;
                if(l==0.00)
                        break;
                printf("%.2lf\n",(l*l)/(2*PI));
        }
        return 0;
}