#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>

void main()
{

	float m,x1,x2,y1,y2;
	int x,y;
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
	printf("Enter the value of x1,y1,x2,y2");
	scanf("%f \t%f\t %f\t%f",&x1,&y1,&x2,&y2);

	m=(y2-y1)/(x2-x1);
	for(x=1;x<=x;x++)
	{
		y=m*(x-x1)+y1;
		putpixel(x,y,100);
		delay(10);
	}
	getch();
	closegraph();
}
