#include<stdio.h>
int main()
{void exchange(int *q1,int *q2,int *q3);
int a,b,c,*p1,*p2,*p3;
printf("请输入三个数：");
scanf("%d %d% %d",&a,&b,&c);
p1=&a;
p2=&b;
p3=&c;
exchange(p1,p2,p3);
printf("按照从大到小的顺序打印：%d %d %d\n",a,b,c);
	return 0;
}
	void exchange(int *q1,int *q2,int *q3)
	{void swap(int*b1,int*b2);
	if(*q1<*q2) swap(q1,q2);
	if(*q1<*q3) swap(q1,q3);
	if(*q2<*q3) swap(q2,q3);
	}
	void swap(int *b1,int*b2)
	{int ok;
	ok=*b1;
	*b1=*b2;
	*b2=ok;
	}
