#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

line(100,420,100,60);
line(100,420,500,420);

setfillstyle(SOLID_FILL,YELLOW);
bar(150,200,200,410);

setfillstyle(SOLID_FILL,GREEN);
bar(220,80,270,410);

setfillstyle(SOLID_FILL,RED);
bar(800,120,350,410);

getch();
closegraph();
}
