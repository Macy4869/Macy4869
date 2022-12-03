#include<stdio.h>
int Fid(int n)
{if(n<=2)
{return 1;}
else
return Fid(n-1)+Fid(n-2);

}
int main()
{int n=0;
int ret=0;
scanf("%d",&n);
ret=Fid(n);
printf("%d\n",ret);
return 0;
}
