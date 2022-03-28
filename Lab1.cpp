#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    initwindow(getmaxwidth( ), getmaxheight( ));
    //diagram a
    rectangle(75,125,225,175);
    rectangle(65,115,235,185);
    line(145,185,100,225);
    line(155,185,200,225);
    rectangle(50,225,250,265);

    //diagram b
    rectangle(60,300,260,370);
    circle(110,400,30);
    circle(210,400,30);

    //diagram c
    line(250,80,340,80);
    line(250,100,340,100);
    line(250,80,250,100);
    line(340,80,340,70);
    line(340,100,340,110);
    line(340,70,360,90);
    line(340,110,360,90);

    //diagram d
    ellipse(520,120,0,360,75,50);
    circle(490,120,10);
    circle(550,120,10);
    ellipse(520,250,0,360,40,80);
    line(560,250,600,290);
    line(480,250,440,290);

    //diagram e
    circle(520,520,110);
    circle(465,520,15);
    circle(575,520,15);
    line(540,540,520,500);
    line(520,500,500,540);
    line(500,540,540,540);
    rectangle(490,580,550,600);

    //diagram f
    rectangle(840,400,1020,500);
    rectangle(770,400,840,500);
    line(770,400,805,330);
    line(805,330,840,400);
    line(1020,400,995,330);
    line(805,330,995,330);

    getch();
    closegraph();
    return 0;
}

