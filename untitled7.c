#include<stdio.h>
int digit(int n,int k);
int digit(int n,int k)
{
	k--;
	if(k==0)
		return n%10;
	else
		return digit(n/10,k);
}
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	printf("%d",digit(n,k));
	return 0;
}
