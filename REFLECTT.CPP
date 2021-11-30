#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
int midx, midy;

void display(int x1,int y1,int x2,int y2,int x3,int y3)
{
	line(midx+x1,midy-y1,midx+x2,midy-y2);
	line(midx+x2,midy-y2,midx+x3,midy-y3);
	line(midx+x3,midy-y3,midx+x1,midy-y1);

}
void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

int x1,y1,x2,y2,x3,y3,c;

printf("enter the coordinates of a triangle");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);

midx=getmaxx()/2;
midy=getmaxy()/2;

line(midx+x1,midy-y1,midx+x2,midy-y2);
line(midx+x2,midy-y2,midx+x3,midy-y3);
line(midx+x3,midy-y3,midx+x1,midy-y1);

printf("enter your choice \n1.along x-axis\n2.along y-axis\n3.about origin\n4.about y=x\n5.about y=-x \n");
scanf("%d",&c);

switch(c)
{
	case 1:	y1=-y1;
		y2=-y2;
		y3=-y3;
		display(x1,y1,x2,y2,x3,y3);
		break;

	case 2:	x1=-x1;
		x2=-x2;
		x3=-x3;
		display(x1,y1,x2,y2,x3,y3);
		break;

	case 3:	x1=-x1;
		x2=-x2;
		x3=-x3;
		y1=-y1;
		y2=-y2;
		y3=-y3;
		display(x1,y1,x2,y2,x3,y3);
		break;

	case 4:	x1=y1;
		x2=y2;
		x3=y3;
		y1=x1;
		y2=x2;
		y3=x3;
		display(x1,y1,x2,y2,x3,y3);
		break;

	case 5:	x1=-y1;
		x2=-y2;
		x3=-y3;
		y1=-x1;
		y2=-x2;
		y3=-x3;
		display(x1,y1,x2,y2,x3,y3);
		break;

	}
	closegraph();
}


