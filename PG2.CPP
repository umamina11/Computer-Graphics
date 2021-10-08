#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
 int main(void)
 {
 int gdriver=DETECT,gmode,errorcode;
 int xmax,ymax,xmid,ymid;

 initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
 errorcode=graphresult();
 if (errorcode !=grOk)
 {
	printf("graphics error:%s\n",grapherrormsg(errorcode));
	printf("press any key to halt:");

	getch ();
	exit(1);

 }

xmax=getmaxx();
ymax=getmaxy();
xmid=getmaxx()/2;
ymid=getmaxy()/2;

printf("%d %d",xmax,ymax);
line(0,ymid,xmax,ymid);
line(xmid,0,xmid,ymax);

//putpixel(100,100,WHITE);
//putpixel(101,100,WHITE);
//putpixel(102,100,WHITE);
//putpixel(103,100,WHITE);

  circle (xmid,ymid,50);

getch();
closegraph();
return 0;

}