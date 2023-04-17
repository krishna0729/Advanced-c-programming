#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gd=DETECT, gm;
initgraph(&gd,&gm, "C: \\turboc3\\bgi");

int x=200, y=200;
setcolor(RED);
outtextxy(x,y,"Hello I'm Krishna ");
circle(200,200,150);
getch();
closegraph();
}