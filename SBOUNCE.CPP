#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

int x,y,cnt=0;

x=getmaxx()/2;
y=30;

while(!kbhit())
{
if(y>=getmaxy()-30||y<=30)

cnt=!cnt;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);

circle(x,y,30);
floodfill(x,y,YELLOW);
delay(20);
cleardevice();

if(cnt)
y=y+5;
else
y=y-5;
}
getch();
closegraph();
}