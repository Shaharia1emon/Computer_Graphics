//Bresenham's line drawing.
#include<iostream>
#include<graphics.h>
#include<math.h>

 using namespace std;
 int main()
 {

     int x,y,x1,x2,y1,y2,dx,dy,p;
     int i,gd=DETECT,gm;

     initgraph(&gd,&gm," ");
     initwindow(800,600,"Bresenham's");

     cout<<"Enter X1 and y2: ";
     cin>>x1>>y1;

     cout<<"Enter x2 and y2:";
     cin>>x2>>y2;

     dx=abs(x2-x1);
     dy=abs(y2-y1);

     x=x1;
     y=y1;

     p=2*dy-dx;

     while(x<=x2)
     {
         if(p>=0){

            putpixel(x,y,7);
            y=y+1;
            p=p+2*dy-2*dx;
            }
            else{

                putpixel(x,y,7);
                p=p+2*dy;

            }
            x=x+1;
            delay(100);

     }
     getch();
     closegraph();

     return 0;



 }
