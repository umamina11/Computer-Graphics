#include<stdio.h>
#include<conio.h>
#include<graphhics.h>
#include<math.h>

#define PI=3.14
#define round(a) int(a+0.5)

void polarCircle(int,int,int);

int midx,midy;

void main()
{
	int gdriver= DETECT, gmode;
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

	midx=getmaxx()/2;
	midy=getmaxy()/2;

	line(0,midy,getmaxx(),midy);
	line(midx,0,midx,getmaxy());

	printf("Enter the radiu and the coordinates of the center of the circle");
	scanf("%d%d%d",&rad,&xc,&yc);

	polarCircle(rad,xc,yc);

getch();
closegraph();
}

void polarCircle(int r,int xc1,int yc1)
{
float x1,y1,theta,incr;

incr=1/(float)r;
theta=0;
while(theta<=2*PI)
{
x1=r*cos(theta);
y1=r*sin(theta);

putpixel(midx+(xc1+round(x1)),midy-(yc1+round(y1)),WHITE);

theta+=incr;
}
}
