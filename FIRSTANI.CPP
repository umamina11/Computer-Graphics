#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT, gm;

	int i,x,y;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	x=getmaxx()/3;
	y=getmaxx()/3;

	setbkcolor(WHITE);
	setcolor(BLUE);

	for(i=1;i<30;i++)
	{
		setfillstyle(i,i);
		delay(40);
		circle(x,y,i*20);
		floodfill(x-2+i*20,y,BLUE);
	}
	getch();
	closegraph();
}