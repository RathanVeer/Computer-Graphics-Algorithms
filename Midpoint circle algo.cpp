#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT, gm;
	initgraph(&gd,&gm, (char*)"");
	int x, y, r, d, xc, yc;
	printf("Enter center coordinate of circle: ");
	scanf("%d%d", &xc, &yc);
	printf("Enter radius: ");
	scanf("%d" ,&r);
	x=0;
	y=r;
	while(x<=y)
    {
		putpixel(x+xc,y+yc, GREEN);
		putpixel(y+xc,x+yc, GREEN);
		putpixel(y+xc,-x+yc, GREEN);
		putpixel(x+xc,-y+yc, GREEN);
		putpixel(-x+xc,-y+yc, GREEN);
		putpixel(-y+xc,-x+yc, GREEN);
		putpixel(-y+xc,x+yc, GREEN);
		putpixel(-x+xc,y+yc, GREEN);
        delay(50);
		if(d<=0)
        {
			x=x+1;
			d=d+2*x+1;
		}
		else
        {
			x=x+1;
			y=y-1;
			d=d+2*x+1-2*y;
		}
	}
	getch();
	closegraph();
}
