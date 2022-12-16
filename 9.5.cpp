#include<stdio.h>
#include<string.h>
int main()
{typedef struct Student
{long num;
char name[20];
char sex;
float score;
}s;
s stu_1;
s *p;
p=&stu_1;
stu_1.num=10101;
strcpy(stu_1.name,"Li lin");
stu_1.sex='M';
stu_1.score=89.5;
printf("No.:%d\nname:%s\nsex:%c\nscore:%5.1f\n",
stu_1.num,stu_1.name,stu_1.sex,stu_1.score);
printf("\nNo.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",(*p).num,
(*p).name,(*p).sex,(*p).score);
	return 0;
 } 
