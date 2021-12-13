#include<conio.h>
#include<stdio.h>
#include<graphics.h>

int main()
{
  int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

  circle(250,200,100);
  getch();
  closegraph();

  return 0;
}
