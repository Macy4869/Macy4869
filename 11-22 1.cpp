#include<stdio.h>
void Swap(int *p,int *q)
{int z=*q;
*q=*p;
*p=z;
}

int main()
{int a=1;
int b=2;
printf("δ����ǰ��a=%d b=%d\n",a,b);
Swap(&a,&b);
printf("����֮��a=%d b=%d\n",a,b);
	return 0;
}
