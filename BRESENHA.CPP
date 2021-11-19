#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>

int xc,yc;

void bres(int xs,int ys,int xe,int ye )
{
	int dx,dy,p,pt,ps,x,y,signx,signy;

		dx=xe-xs;
		dy=ye-ys;

		p=2*dy-dx;
		ps=2*dy;
		pt=2*(dy-dx);

		x=xs;
		y=ys;

		putpixel(xc+x,yc-y,YELLOW);
/*		if(dx>=0)
			signx=+1;
		else
			signx=-1;

		if(dy>=0)
			signy=+1;
		else
			signy=-1;
  */		while(x<xc)
		{
			x=x+1;
			if(p<0)
				p=p+ps;
			else
				y=y+1;
				p=p+pt;
		}
		putpixel(xc+x,yc-y,YELLOW);
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

	printf("Enter the starting and the ending coordinates of line");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

	bres(x1,y1,x2,y2);

getch();
closegraph();
}
