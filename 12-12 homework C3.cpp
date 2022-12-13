#include<stdio.h>
typedef struct Student
{int num;
char name[20];
float score;
}stu;
int main()
{stu S[5]={{10101,"zhang",78},{10103,"wang",98.5},{10106,"li",86},{10108,"ling",73.5},{10110,"sun",100}};
stu temp;
const int n=5;
int i,j,k;
printf("The order is:\n");
for(i=0;i<n-1;i++)
{k=i;
for(j=i+1;j<n;j++)
if(S[j].score>S[k].score)
k=j;
temp=S[k];S[k]=S[i];S[i]=temp;
}
for(i=0;i<n;i++)
printf("%6d %8s %6.2f\n",S[i].num,S[i].name,S[i].score);
printf("\n"); 
	return 0;
}
