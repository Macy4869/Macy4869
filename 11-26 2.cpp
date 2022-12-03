#include<stdio.h>
int main()
{int *p,*p1,*p2,a,b;
printf("please enter two interger numbers:");
scanf("%d %d",&a,&b);
p1=&a;
p2=&b;
if(a<b)
{p=p1;
p1=p2;
p2=p;
}
printf("交换之前：a=%d,b=%d\n",a,b);
printf("交换之后：max=%d,min=%d\n",*p1,*p2);
	return 0;
}
