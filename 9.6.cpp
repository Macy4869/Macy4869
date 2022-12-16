#include<stdio.h>
typedef struct Student
{int num;
char name[20];
char sex;
int age;
}s;
s stu[3]={{10101,"li lin",'M',18},{10102,"zhang fang",'M',19},{10104,"wang min",'F',20}
};
int main()
{s *p;
printf("No.  Name              sex age\n");
for(p=stu;p<stu+3;p++)
	printf("%5d %-20s %2c %4d\n",(*p).num,(*p).name,(*p).sex,(*p).age);
	return 0;
}
