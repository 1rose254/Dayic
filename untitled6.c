#include<stdio.h>
int isprime(int n);
int isprime(int n){
	int a=1;
	if(n==1)
		return 0;
	for(int i=2;i<n;i++){
		if(n%2==0){
			a=0;
	}
}
	if(a==1)
		return n;
	else
		return 0;
}
	int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",isprime(n));
		return 0;
}
