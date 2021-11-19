#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#inlcude<dos.h>

void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

int i,x,r,a,b,x,y;
printf("Enter the coordinates of centerof circle");
scanf("%d%d",&a,&b);
printf("enter the radius of the circle");
scanf("%d",  &r);

x=0;y=r;

putpixel(a,b+r,RED);
putpixel(a,b-r,RED);
putpixel(a-r,b,RED);
putpixel(a+r,b,RED);

p=(5/4)-r;
while(x<=y)
{
if(p<0)
p+=(4*x)+6;
else
p+=(2*(x-y))+5;
y--;
}
x++;

putpixel(a+x,b+y,RED);
putpixel(a-x,b+y,RED);
putpixel(a+x,b-y,RED);
putpixel(a+x,b+y,RED);
putpixel(a+x,b-y,RED);
putpixel(a-x,b+y,RED);
putpixel(a-x,b-y,RED);
}
}
