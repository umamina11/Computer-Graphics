#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	int x,y,x1,y1,x2,y2,x3,y3,shear_f;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	printf("\n Enter the first coordinate:");
	scanf("%d%d",&x,&y);

	printf("\n Enter the second coordinate:");
	scanf("%d%d",&x1,&y1);

	printf("\n Enter the third coordinates:");
	scanf("%d%d",&x2,&y2);

	printf("\n Enter the fourth and the last coordinate :");
	scanf("%d%d",&x3,&y3);

	printf("Enter the shearing factor x:");
	scanf("%d",&shear_f);

	cleardevice();
	line(x,y,x1,y1);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x,y);

	setcolor(RED);
	x=x+y*shear_f;
	x1=x1+y1*shear_f;
	x2=x2+y2*shear_f;
	x3=x3+y3*shear_f;


	line(x,y,x1,y1);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x,y);

	getch();
	closegraph();
}




