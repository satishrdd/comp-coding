        int no;
        int a,b,i,j,k;
        int ar[]={0,1,4,3,8,5,2,7,6,9};
        int brute(int a,int b){
        int i,s=0;
        for(i=a;i<=b;i++) s+=getn(i);
        return s;
        }
        int getn(int n){
        int s=0;
        for(i=n;i;i/=10) s+=ar[i%10];
        return s%10;
        }
        int main(){
        scanf("%d",&no);
        while(no--){
        scanf("%d%d",&a,&b);
        int ans=getn(a)+45*(b/10-a/10)+brute((b/10)*10,b)-brute((a/10)*10,a);
        printf("%d\n",ans);
        }
        return 0;
        } 