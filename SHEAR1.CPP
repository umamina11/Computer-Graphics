#include<conio.h>
#include<stdio.h>
#include<graphics.h>

void main()
{
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

	int x,y,x1,y1,x2,y2,x3,y3,shear_f;

	printf("enter the first coordiate");
	scanf("%d%d",&x,&y);

	printf("enter the second coordinate");
	scanf("%d%d",&x1,&y1);

	printf("enter the third coordinate ");
	scanf("%d%d",&x2,&y2);

	printf("enter the fourth coordinates");
	scanf("%d%d",&x3,&y3);

	printf("enter the shear factor");
	scanf("%d",&shear_f);

	cleardevice();

	line(x,y,x1,y1);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x,y);
	   printf("along x-axis  in yellow color");
	setcolor(YELLOW);
	x=x+y*shear_f;
	x1=x1+y1*shear_f;
	x2=x2+y2*shear_f;
	x3=x3+y3*shear_f;

	line(x,y,x1,y1);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x,y);


	printf("along the y-axis in red color");
	setcolor(RED);
	y=y+x*shear_f;
	y1=y1+x1*shear_f;
	y2=y2+x2*shear_f;
	y3=y3+x3*shear_f;

	line(x,y,x1,y1);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x,y);


	getch();
	closegraph();
}
