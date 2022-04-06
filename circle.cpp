//circle
#include<iostream>
#include<graphics.h>
int main()
{

  int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    circle(100,80,30);


    getch();
    closegraph();
    return 0;
}
