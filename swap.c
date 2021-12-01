#include<stdio.h>
void main()
  {
	int a,b,temp;
	printf("enter two number");
	scanf("%d %d",&a,&b);
	
		temp=a;
		a=b;
		b=temp;
	printf("value  after swapping is %d %d",a,b);
	}
