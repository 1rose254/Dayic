#include<stdio.h>
long long int chengfang(long long int a,long long int b,long long int p); 
long long int chengfang(long long int a,long long int b,long long int p){
	long long int sum=1;
	a=a%p;
	while(b>0){
		if(b%2==1)
			sum=sum*a%p;
		b/=2;
		a=a*a%p;
	}
	return sum;
}
int main()
{
	long long int a,b;
	long long int p;
	scanf("%lld %lld %lld",&a,&b,&p);
	long long int c=chengfang(a,b,p);
	printf("%lld^%lld mod %lld=%lld",a,b,p,c);
	return 0;
}
