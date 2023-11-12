#include<stdio.h>
int main()
{
    int n,a,i;
    a=1;
    n=1;
    for(i=1;i<=10;i++){
        a=(a+1)*2;
       // n+=a;
    }
    printf("%d",a);
    return 0;
}
