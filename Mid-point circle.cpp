//mid-point circle
#include<iostream>
#include<graphics.h>

using namespace std;

void plotpoints(int x0,int y0, int x, int y)

{
    putpixel(x0+x,y0+y,7);
    putpixel(x0+x,y0-y,7);
    putpixel(x0-x,y0+y,7);
    putpixel(x0-x,y0-y,7);
    putpixel(x0+y,y0+x,7);
    putpixel(x0+y,y0-x,7);
    putpixel(x0-y,y0+x,7);
    putpixel(x0-y,y0-x,7);
}

void midpoint (int x0,int y0,int r)
{
    int x=0,  y=r;
    int f=1-r;

    plotpoints(x0,y0,x,y);

    while(x<y)
    {
        x++;
        if(f<0)
        {
            f= f +(2*x)+1;
        }
        else
        {
            y--;
            f= f +(2*(x-y))+1;
        }
        plotpoints(x0,y0,x,y);
    }
}



circle()
{
    int gd=DETECT,gm,x,y,r;
    initgraph ( & gd , & gm , " " ) ;
    initwindow ( 800 , 600 , " " );
     // line ( 0 , 300 , 800 , 300 ) ;
     // line ( 400 , 0 , 400 , 600 ) ;
    cout << " Enter the value of center co-ordinate:";
    cin>>x>>y;

    cout << " Enter radious of the circle:";
    cin>>r;

    midpoint(x,y,r);
    getch();

    return 0;


}

int main()
{
    circle();
}
