#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{

    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    ellipse(225,190,180,360,30,30);
    circle(225,175,80);
    circle(185,145,10);//1st eye.
    circle(265,145,10);//2nd eye.

    getch();
    closegraph();
}
