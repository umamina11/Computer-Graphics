#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd = DETECT, gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	int xmax, ymax;

	xmax=getmaxx();
	ymax=getmaxy();

	line(xmax/2,0,xmax/2,ymax);
	line(0,ymax/2,xmax,ymax/2);

	getch();
	closegraph();
}