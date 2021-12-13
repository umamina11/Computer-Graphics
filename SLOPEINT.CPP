#include <conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void main()
{
float m,x1,y1,x2,y2;
int x,y;

int gdriver=DETECT,gmode,gerror;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");


printf("PROGRAM FOR LINE INTERCEPT");
printf("enter the value of x1,y1");
scanf("%f%f",&x1,&y1);

printf("enter the value of x2and y2");
scanf("%f%f",&x2,&y2);

m=(y2-y1)/(x2-x1);
for(x=1;x<=x2;x++)
{
y=m*(x-x1)+y1;
putpixel(x,y,15);
delay(50);
}
getch();
closegraph();
}