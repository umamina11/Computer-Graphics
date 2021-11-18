#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

#define round(a) int (a+0.5)
int midx,midy;

void polycircle(int r,int xc1,int yc1)
{
double x1,y1;
x1=-r;
y1=0;

putpixel(midx+round(x1+xc1),midy- round(y1+yc1),WHITE);

do
{
x1++;
y1=sqrt((double)((r*r)-(x1*x1)));
putpixel(midx+round(x1+xc1),midy-round(y1+yc1),WHITE);

putpixel(midx+round(x1+xc1),midy-round(-y1+yc1),WHITE);
}
while((int)x1<r)
}

void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
int rad,xc,yc;

midx=getmaxx()/2;
midy=getmaxy()/2;

line(0,midy,getmaxx(),midy);
line(midx,0,midx,getmaxy());

printf("enter the radius and coordinates of cnter of circle");
scanf("%d%d%d",&rad,&xc,&yc);

polycircle(rad,xc,yc);
getch();
closegraph();
}
