#include <stdio.h>
void fibonachi(int a,int b, int n){
    printf("%d\t",a+b);
    n==0?0:fibonachi(b,a+b,n-1);
}
int main(){
    int n;
    printf("Enter no: ");
    scanf("%d",&n);
    if(n>2)
    {
        printf("%d\t%d\t",0,1);
        fibonachi(0,1,n-3);
    }
    else if(n==2) printf("0   1");
    else printf("0");
    return 0;
}