#include<stdio.h>
int main()
{void swap(int *p1,int *p2);
int a,b;
int*po1,*po2;
printf("please enter two  interger numbers£º");
scanf("%d %d",&a,&b);
po1=&a;
po2=&b;
if(a<b)
swap(po1,po2);
printf("max=%d,min=%d\n",a,b);
	return 0;
}
void swap(int *p1,int *p2)
{int tmp;
tmp=*p1;
*p1=*p2;
*p2=tmp;

}
