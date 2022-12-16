#include<stdio.h>
#define N 3
typedef struct Student
{int num;
char name[20];
float score[3];
float aver;
}s;
int main()
{void input(s stu[]);
s max(s stu[]);
void print(s stu);
s stu[N],*p=stu;
input(p);
print(max(p));
	return 0;
}
void input(s stu[])
{int i;
printf("请输入学生信息：学号、姓名、三门课成绩：\n");
for(i=0;i<N;i++)
{scanf("%d%s%f%f%f",&stu[i].num,&stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
}
 } 
 s max(s stu[])
 {int i,m=0;
 for(i-0;i<N;i++)
 	if(stu[i].aver>stu[m].aver)m=i;
 	return stu[m];
 }
 void print (s stud)
 {printf("\n成绩最高的学生是:\n");
 printf("学号:%d\n姓名：%s\n三门成绩：%5.1f,%5.1f,%5.1f,\n平均成绩：%6.2f\n",stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
 }
