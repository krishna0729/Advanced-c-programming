#include<stdio.h>
#include<conio.h>
struct newdatatype {
int roll;
char name[20];
};
typedef struct newdatatype student ;
int main()
{
clrscr();
student st1;
printf("Enter rol no");
scanf("%d",&st1.roll);
printf("Enter name");
scanf("%s",&st1.name);
printf(" details of the student array \n");
printf("%d",st1.roll);
printf("%s",st1.name) ;
getch();
}