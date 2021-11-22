#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>


int midx,midy;

void shear(int xlt,int ylt, int xrn, int yrn, int sx, int sy)
{
int xlt1,ylt1,xrn1,yrn1;

xlt1=xlt+ylt*sx;
ylt1=ylt+xlt*sy;
xrn1=xrn+yrn*sx;
yrn1=yrn+xrn*sy;

rectangle(midx+xlt1,midy-ylt1,midx+xrn1,midy-yrn1);
}

void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

int sx,sy,xlt,ylt,xrn,yrn,midx,midy;

midx=getmaxx()/2;
midy=getmaxy()/2;
printf("enter the left,top,right and bottom coordinates");
scanf("%d%d%d%d%d",&xlt,&ylt,&xrn,&yrn);

rectangle(midx+xlt,midy-ylt,midx+xrn,midy-yrn);

printf("enter the shear factor");
scanf("%d%d",&sx,&sy);
shear(xlt,ylt,xrn,yrn,sx,sy);

getch();
closegraph();
}
