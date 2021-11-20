#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>

void flood(int x, int y, int fill, int old )
{
	if(getpixel(x,y)==old)
	{
		delay(3);
		putpixel(x,y,fill);
		flood(x+1,y,fill,old);
		flood(x-1,y,fill,old);
		flood(x,y+1,fill,old);
		flood(x,y-1,fill,old);
	}
}
void main()
{
	int gdriver=DETECT, gmode;
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

	int x,y,r;

	printf("Enter the coordinates of center and radius of circle");
	scanf("%d%d%d",&x,&y,&r);

	circle(x,y,r);
	flood(x,y,10,0);

getch();
closegraph();
}
