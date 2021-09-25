#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT ,gm;

int x1,y1,x2,y2;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

printf("\n Enter intial coordinate of the line : ");
scanf("%d %d",&x1,&y1);
printf("\n Enter the final coordinates of the line :");
scanf("%d %d", &x2,&y2);

line(x1,y1,x2,y2);
getch();
closegraph();
}