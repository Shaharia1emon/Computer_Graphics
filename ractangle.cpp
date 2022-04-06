//Ractangle.
#include<iostream>
#include<graphics.h>
int main()
{

    int gd=DETECT,gm;
    initgraph(&gd, &gm,"");
    rectangle(150,200,450,300);
    getch();
    closegraph();
}
