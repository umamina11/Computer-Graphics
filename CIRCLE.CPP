#include<conio.h>
#include<stdio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	 int x,y,r;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	printf("entre the coodinate of circle :");
	scanf("%d %d",&x,&y);
	printf("enter the radius of the circle: ");
	scanf("%d",&r);
	circle(x,y,r);

	getch();
	closegraph();
    return 0;
    }

