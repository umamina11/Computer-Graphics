#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>

#define round(z)int(z+0.5)
int xc,yc;

void linedda(int xr ,int yr, int xe, int ye)
{
int dx,dy,steps,i;
float xi,yi,b,c;

dx=xe-xr;
dy=ye-yr;

b=xr;
c=yr;

putpixel(xc+round(b),yc-round(c),YELLOW);

if(abs(dx)>=abs(dy))
steps=abs(dx);
else
steps=abs(dy);

xi=dx/(float)steps ;
yi=dy/(float)steps;

for (i=1;i<=steps;i++)
{
b=b+xi;
c=c+yi;

putpixel(xc+round(b),yc-round(c),YELLOW);
}
}
void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

int x1,y1,x2,y2;
xc=getmaxx()/2;
yc=getmaxy()/2;

line(0,yc,getmaxx(),yc);
line(xc,0,xc,getmaxy());

printf("Enter the starting and ending points of the line");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
linedda(x1,y1,x2,y2);

getch();
closegraph();
}
