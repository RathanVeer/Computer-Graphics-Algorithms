#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    int x1,x2,y1,y2;
    cout<<"Enter first point:"<<endl;
    cin>>x1>>y1;
    cout<<"Enter second point:"<<endl;
    cin>>x2>>y2;
    char *s = "C:\\TC\\BGI";
    initgraph(&gd,&gm,s);
    if(x2<x1)
    {
        swap(x2,x1);
        swap(y1,y2);
    }
    int dx = x2-x1;
    int dy = y2-y1;
    int p = 2*dy-dx;
    if(abs(dx)<=abs(dy))
    {
        int p = 2*abs(dx) - abs(dy);
        for(int i = 0; i <=abs(dy) ; i++)
        {
            putpixel(x1,y1,WHITE);
            delay(50);
            y1+= dy < 0 ? -1 : 1;
            if(p < 0)
            p = p + 2*dx;
            else
            {
                x1+=1;
                p+= (2*dx) - (2*abs(dy));
            }
        }
    }

    else
    {
     for(int i=0;i<=dx;i++)
     {
        putpixel(x1,y1,WHITE);
        delay(50);
        if(p<0)
        {
            x1+=1;
            p=p+2*dy;
        }
        else
        {
            x1+=1;
            y1+=(dy < 0 ? -1: 1);
            p = p + 2*dy - 2*dx;
        }
     }
    }
  getch();
  closegraph();
}
