
#include <graphics.h>

int main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm, (char*)"");


 line(30,40,30,80);
 line(30,40,50,80);
 line(50,40,50,80);



 getch();
 closegraph();
 return 0;
}
