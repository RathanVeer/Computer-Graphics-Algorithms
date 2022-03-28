#include<graphics.h>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
void drawCircle(int xc, int yc, int x, int y)
{
    putpixel(xc+x, yc+y,WHITE);
    putpixel(xc-x, yc+y,WHITE);
    putpixel(xc+x, yc-y,WHITE);
    putpixel(xc-x, yc-y,WHITE);
    putpixel(xc+y, yc+x,WHITE);
    putpixel(xc-y, yc+x,WHITE);
    putpixel(xc+y, yc-x,WHITE);
    putpixel(xc-y, yc-x,WHITE);
}
void circleBres(int xc, int yc, int r)
{
    int x=0,y=r;
    int d=3-2*r;
    drawCircle(xc,yc,x,y);
    while(y>=x)
    {

        x++;
        if(d>0)
        {
            y--;
            d=d+4*(x-y)+10;
        }
        else
            d=d+4*x+6;
      drawCircle(xc,yc,x,y);
    }
}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm, (char*)"");
    initwindow(getmaxwidth( ), getmaxheight( ));
    int xc,yc,r;
	printf("Enter center coordinate of circle: ");
	scanf("%d%d", &xc, &yc);
	printf("Enter radius: ");
	scanf("%d" ,&r);
	circleBres(xc,yc,r);
    getch();
    closegraph();
    return 0;
}
