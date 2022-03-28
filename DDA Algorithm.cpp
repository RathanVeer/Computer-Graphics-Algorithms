#include<graphics.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<conio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    int x1,x2,y1,y2;
    int steps;
    cout<<"Enter start point coordinates :";
    cin>>x1>>y1;
    cout<<"Enter end point coordinates:";
    cin>>x2>>y2;
    int dx=x2-x1;
    int dy=y2-y1;
    if(abs(dx)>abs(dy))
    {
        steps=dx;
    }
    else
    {
        steps=dy;
    }
    int xn=dx/steps;
    int yn=dy/steps;
    for(int i=1;i<=steps;i++)
    {
        putpixel(x1,y1,RED);
        delay(300);
        x1=x1+xn;
        y1=y1+yn;
    }
    getch();
    closegraph();
}
