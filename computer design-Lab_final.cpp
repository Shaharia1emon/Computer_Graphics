
#include<graphics.h>
#include<iostream>>
#include<math.h>
#include<dos.h>


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
}



int main()
{
         cout<<"**********************Shaharia Bhuiyan Emon*********************\n";
 cout<<"######################    CSE1901016029   #######################\n";
 cout<<"$$$$$$$$$$$$$$$$$$$$$$ Sonargaon University$$$$$$$$$$$$$$$$$$$$$$\n";


    float x,y,x1,y1,x2,y2,ex,ey,emon,d;
    int i,gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    int graphicdriver=DETECT,graphimode;

    initgraph(&graphicdriver,&graphimode,"");
    initwindow(640,480,"Flag");


    int select;
    while(select)
    {
        cout<<"\n 1.DDA.\n 2.Bresenham's.\n 3.Mid-point circle. \n 4.Circle. \n 5.Ractangle. \n 6.Emoji. \n 7.Flag with colour. \n 8.word \n 9.House";
        cout<<"\n\nWhich one you select:";
        cin>>select;
        switch(select)
        {
        case 1:
            // initgraph(&gd,&gm," ");
            cout<<"Enter the value of x1 and y1 :";
            cin>>x1>>y1;
            cout<<"Enter the value of x2 and y2 :";
            cin>>x2>>y2;

            ex=abs(x2-x1);
            ey=abs(y2-y1);

            if(ex>=ey)
                emon=ex;
            else
                emon=ey;
            ex=ex/emon;
            ey=ey/emon;

            x=x1;
            y=y1;

            i=1;
            while(i<=emon)
            {
                putpixel(x,y,15);
                x=x+ex;
                y=y+ey;
                i=i+1;
                delay(100);
            }
            getch();
            closegraph();
            break;
        case 2:
            //initgraph(&gd,&gm," ");
            initwindow(800,600,"Bresenham's");

            cout<<"Enter X1 and y2: ";
            cin>>x1>>y1;

            cout<<"Enter x2 and y2:";
            cin>>x2>>y2;

            ex=abs(x2-x1);
            ey=abs(y2-y1);

            x=x1;
            y=y1;

            d=2*ey-ex;

            while(x<=x2)
            {
                if(d>=0)
                {

                    putpixel(x,y,7);
                    y=y+1;
                    d=d+2*ey-2*ex;
                }
                else
                {

                    putpixel(x,y,7);
                    d=d+2*ey;

                }
                x=x+1;
                delay(100);

            }
            getch();
            closegraph();

            break;
        case 3:
             circle();
        break;
        case 4:

            //initgraph(&gd,&gm,"");

            circle(100,80,30);

            getch();
            closegraph();
            break;
        case 5:

            initgraph(&gd, &gm,"");
            rectangle(150,200,450,300);
           getch();
           closegraph();
            break;
        case 6:
            // initgraph(&gd,&gm," ");
            ellipse(225,190,180,360,30,30);
            circle(225,175,80);
            circle(185,145,10);//1st eye.
            circle(265,145,10);//2nd eye.

            getch();
            closegraph();
            break;
        case 7:
            setcolor(MAGENTA);
            rectangle(5,5,10,500);
            setfillstyle(4,WHITE);
            floodfill(6,6,MAGENTA);

            setcolor(GREEN);
            rectangle(10,5,310,200);
            setfillstyle(1,GREEN);
            floodfill(50,50,GREEN);

            setcolor(RED);
            circle(150,100,80);
            setfillstyle(1,RED);
            floodfill(180,100,RED);

            system("pause");
            break;
        case 8:
            initgraph(&gd,&gm, (char*)"");
            line(30,40,30,80);
            line(30,40,50,80);
            line(50,40,50,80);
            getch();
            closegraph();
            break;
        case 9:
            initwindow(600, 400);

            line(150, 50, 200, 100);
            line(150, 50, 350, 50);//uporer line.

            line(350, 50, 400, 100);//top-right line.

            line(90, 110, 150, 50);//left part.

            line(90, 110, 100, 110);
            line(100,110,100,160);
            line(100,160,200,200);//bottom part

            rectangle(200,100,400,200);//front part.

            rectangle(290,150,320,188);//Door part.

            getch();
            closegraph();
            break;
        default:
      cout<<"\nYou select invalid number ";
            break;

        }
    }

    return 0;
}
