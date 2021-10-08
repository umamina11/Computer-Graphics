#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
 int main(void)
 {
 int gdriver=DETECT,gmode,errorcode;
 int xc,yc;

 initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
 errorcode=graphresult();
 if (errorcode !=grOk)
 {
	printf("graphics error:%s\n",grapherrormsg(errorcode));
	printf("press any key to halt:");

	getch ();
	exit(1);

 }
 // along top line

for(xc=30,yc=30;(xc<=600)&&(!kbhit());xc++)
{
circle(xc,yc,30);
delay(10);
cleardevice();


}
//along right side line
for(yc=30,xc=600;(yc<=450)&&(!kbhit());yc++)
{
circle(xc,yc,30);
delay(10);
cleardevice();
}

for(yc=600,xc=30;(xc>=30)&&(!kbhit());xc--)
{
circle(xc,yc,30);
delay(10);
cleardevice();
 }
getch();
closegraph();
return 0;

}
