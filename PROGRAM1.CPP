#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>


int xx1,xx2,xx3,xy1,xy2,xy3;


//translation
void translation(int x1,int y1, int x2, int y2,int x3,int y3 ,int xt, int yt)
{

xx1=x1+xt;
xy1=y1+yt;
xx2=x2+xt;
xy2=y2+yt;
xx3=x3+xt;
xy3=y3+yt;

line(xx1,xy1,xx2,xy2);
line(xx2,xy2,xx3,xy3);
line(xx3,xy3,xx1,xy1);
}

//rotation
void rotation(int x1,int y1,int x2, int y2, int x3, int y3, int r)
{

float t;
t=3.14*r/180;

xx1=abs(x1*cos(t)-y1*sin(t));
xy1=abs(x1*sin(t)+y1*cos(t));
xx2=abs(x2*cos(t)-y2*sin(t));
xy1=abs(x2*sin(t)+y2*cos(t));
xx3=abs(x3*cos(t)-y3*sin(t));
xy3=abs(x3*sin(t)+y3*cos(t));

line (xx1,xy1,xx2,xy2);
line(xx2,xy2,xx3,xy3);
line(xx3,xy3,xx1,xy1);

}

//scaling
void scaling (int x1,int x2,int x3,int y1,int y2,int y3 ,int sx, int sy)
{

xx1=x1*sx;
xy1=y1*sy;
xx2=x2*sx;
xy2=y2*sy;
xx3=x3*sx;
xy3=y3*sy;

line(xx1,xy1,xx2,xy2);
line(xx2,xy2,xx3,xy3);
line(xx3,xy3,xx1,xy1);
}




void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

int x1,x2,x3,y1,y2,y3,c,sx,sy,xt,yt,r;

printf("Enter the points of a triangle");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);

line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);

getch();

printf("enter your choice");
printf("1Translation\n2.Rotation\n3.scaling\n4.Exit")  ;
scanf("%d",&c);

switch(c)
{
case 1:	printf("enter the transation factors");
	scanf("%d%d",&xt,&yt);
	translation(x1,y1,x2,y2,x3,y3,xt,yt);
	getch();

case 2:	printf("enter the angle of rotation");
	scanf("%d",&r);
	rotation(x1,y1,x2,y2,x3,y3,r);
	getch();

case 3:	printf("enter the scaling factors");
	scanf("%d%d",&sx,&sy);
	scaling(x1,y1,x2,y2,x3,y3,sx,sy);
	getch();

case 4:	break;
}
closegraph();

}
