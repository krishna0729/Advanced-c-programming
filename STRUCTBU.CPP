#include<stdio.h>
#include<conio.h>
struct krishna {
int marks;
int roll;
};
typedef struct krishna student;
void main()
{
clrscr();
student st[5];
int i,j,k,temp;
for(i=0;i<=4;i++)
{
printf("Enter the roll no :\n");
scanf("%d",&st[i].roll);
printf("Enter the marks\n");
scanf("%d",&st[i].marks);
}
for(i=0;i<=4;i++)
{
for(j=0;j<=4;j++)
{
if(st[j].roll>st[j+1].roll)
{
k=st[j].roll;
st[j].roll=st[j+1].roll;
st[j+1].roll=k;
temp=st[j].marks;
st[j].marks=st[j+1].marks;
st[j+1].marks=temp;
}
}
}
printf("\nThe details of the student are :\n");
for(i=0;i<=4;i++)
{
printf("\n%d",st[i].roll);
printf("\t%d are their marks",st[i].marks);
}
getch();
}