#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<process.h>
#include<math.h>
void TriAngle(int x1,int y1, int x2,int y2, int x3, int y3);
void Rotate(int x1, int y1, int x2,int y2, int x3,int y3);

void main()
{
	int gd=DETECT,gm;
	int x1,y1,x2,y2,x3,y3;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("enter the first point of the triangle");
	scanf("%d%d",&x1,&y1);

	printf("enter the second point of the triangle");
	scanf("%d%d",&x2,&y2);

	printf("enter the third point of the triangle");
	scanf("%d%d",&x3,&y3);

	TriAngle(x1,y1,x2,y2,x3,y3);
	getch();

	cleardevice();
	Rotate(x1,y1,x2,y2,x3,y3);
	setcolor(1);
	TriAngle(x1,y1,x2,y2,x3,y3);
	getch();
}
void TriAngle(int x1,int y1,int x2, int y2, int x3, int y3)
{
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
}

void Rotate(int x1,int y1, int x2, int y2, int x3, int y3)
{
	int x,y,a1,b1,a2,b2,a3,b3,p=x2,q=y2;
	float Angle;

	printf("enter the angle of rotation ");
	scanf("%f",&Angle);

	cleardevice();
	Angle=(Angle*3.14)/180;

	a1=p+(x1-p)*cos(Angle)-(y1-q)*sin(Angle);
	b1=q+(x1-p)*sin(Angle)+(y1-q)*cos(Angle);
	a2=p+(x2-p)*cos(Angle)-(y2-q)*sin(Angle);
	b2=q+(x2-p)*sin(Angle)+(y2-q)*cos(Angle);
	a3=p+(x3-p)*cos(Angle)-(y3-q)*sin(Angle);
	b3=q+(x3-p)*sin(Angle)+(y3-q)*cos(Angle);

	printf("rotate");
	TriAngle(a1,b1,a2,b2,a3,b3);
}
