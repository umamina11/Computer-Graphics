#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

int midx,midy, nx1,nx2,nx3,ny1,ny2,ny3;

void display( int x1,int y1, int x2, int y2, int x3, int y3)
{
	line(midx+x1,midy-y1,midx+x2,midy-y2);
	line(midx+x2,midy-y2,midx+x3,midy-y3);
	line(midx+x3,midy-y3,midx+x1,midy-y1);

}
void translation( int x1,int x2,int x3, int y1,int y2 ,int y3, int xt, int yt)
{
	nx1=x1+xt;
	nx2=x2+xt;
	nx3=x3+xt;
	ny1=y1+yt;
	ny2=y2+yt;
	ny3=y3+yt;

	display(nx1, ny1,nx2,ny2,nx3,ny3);
}

void rotation(int x1, int y1, int x2, int y2, int x3, int y3, int r)
{

	float t=3.14*r/180;
	nx1=x1*cos(t)-y1*sin(t);
	ny1=x1*sin(t)+y1*cos(t);
	nx2=x2*cos(t)-y2*sin(t);
	ny2=x2*sin(t)+y2*cos(t);
	nx3=x3*cos(t)-y3*sin(t);
	ny3=x3*sin(t)+y3*cos(t);

	display(nx1,ny1,nx2,ny2,nx3,ny3);
}

void scaling(int x1,int x2, int x3, int y1, int y2 ,int y3, int sx, int sy)
{
	nx1=x1*sx;
	nx2=x2*sx;
	nx3=x3*sx;
	ny1=y1*sy;
	ny2=y2*sy;
	ny3=y3*sy;

	display(nx1,ny1,nx2,ny2,nx3,ny3);
}
void shearing(int x1, int y1, int x2, int y2, int x3, int y3 ,int shx,int shy)
{
	nx1=x1+y1*shx;
	nx2=x2+y2*shx;
	nx3=x3+y3*shx;
	ny1=y1+x1*shy;
	ny2=y2+x2*shy;
	ny3=y3+x3*shy;

	display(nx1,ny1,nx2,ny2,nx3,ny3);
}


void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

int x1,x2,x3,y1,y2,y3,c,xt,yt,sx,sy,shx,shy,r;

midx=getmaxx()/2;
midy=getmaxy()/2;

printf("enter the coordinates of triangle");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);

display(x1,y1,x2,y2,x3,y3);

do{
printf("enter your choice\n1.Translation\n2.rotation\n3.reflection\n6.exit");
scanf("%d",&c);

switch(c)
{
case 1:	printf("enter the translation vector");
	scanf("%d%d",&xt,&yt);
	translation(x1,y1,x2,y2,x3,y3,xt,yt);
	break;

case 2:	printf("enter the angle of rotation");
	scanf("%d",&r);
	rotation(x1,y1,x2,y2,x3,y3,r);
	break;

case 3:	printf("enter the coice of your reflection along\n1.x-axis\n2.y-axis\n3.origin\n4.exit");
	int c1;
	scanf("%d",&c1);
	switch(c1)
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

		case 3: x1=-x1;
			x2=-x2;
			x3=-x3;
			y1=-y1;
			y2=-y2;
			y3=-y3;
			display(x1,y1,x2,y2,x3,y3);
			break;

		case 4:	break;

		}
	break;

	case 4: printf("enter the scaling factors");
		scanf("%d%d",&sx,&sy);
		scaling(x1,y1,x2,y2,x3,y3,sx,sy);
		break;

	case 5: printf("Enter the shearing factor");
		scanf("%d%d",&shx,&shy);
		shearing(x1,y1,x2,y2,x3,y3,shx,shy);
		break;

	case 6:	break;

	default: printf("WRONG CHOICE .....\nCHOOSE AGAIN");
	}
closegraph();
 getch;

}
}





