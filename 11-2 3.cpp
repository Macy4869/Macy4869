#include <stdio.h>
int main()
{
int p,r,n,m,temp;
printf("���������������� n.m:");
scanf("%d,%d,",&n,&m);
if (n<m)
{
temp=n;
n=m;
m= temp;}

while(m! =0)
{

r=n%m;
n=m;
m=r;
printf("���ǵ����Լ��Ϊ��%d\n",n);
printf("���ǵ���С������Ϊ��%d\n",p/n);
return 0;

}