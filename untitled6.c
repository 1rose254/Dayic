#include<stdio.h>
int jiecheng(int n);
int jiecheng(int n)
{
	int sum=1;
		for(int i=n;i>0;i--){
			sum*=i;
		}
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",jiecheng(n));
	return 0;
}
