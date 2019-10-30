

void fbbar();
void showmouse();
void initMouse();
void hidemouse();


REGS regs;
void initMouse()
{    regs.x.ax=0;int86(0x33,&regs,&regs);
}
void showMouse()
{
	 regs.x.ax=1;int86(0x33,&regs,&regs);
	 regs.x.ax=3;int86(0x33,&regs,&regs);
}
void hideMouse()
{
	 regs.x.ax=2;int86(0x33,&regs,&regs);
}

/*
BUTTON Mouse::GetButton()
{
 return mouseBtn;
}

*/

void fbbar()
{
   startgraph();
       int r=5,y1=300,y2=300, x,d =200, y=300;
	   for(;y>290;y--)
	   {
	      cleardevice();
	      circle(280,y,r);
	     // delay(d);
	       getch();
		if(y==297)
		{
		    circle(300,y1,r);
		    y1--;
		}
		if(y==294)
		{
		    circle(300,y2,r);
		    y2--;
		}
	   }

    getch();
}
void cb()
{
  textmode(C80);
    clrscr();
    startgraph();
       bar3d(100,100,200,200,20,1);
       getch();
    closegraph();

}
void squa()
{
  textmode(C80);
    clrscr();
    startgraph();
       bar(100,100,200,200);
       getch();
    closegraph();

}

void poly()
{
  textmode(C80);
    clrscr();
    int gd = DETECT, gm , points[]={320,150,420,300,250,300,320,150};
    initgraph(&gd, &gm,"c:\\turboc3\\bgi");
       drawpoly(4,points);
       getch();
    closegraph();
}

void ellip()
{
  textmode(C80);
    clrscr();
    startgraph();
       ellipse(100,100,0,360,50,25);
       getch();
    closegraph();
}
void fellip()
{
  textmode(C80);
    clrscr();
    startgraph();
       fillellipse(100,100,50,25);
       getch();
    closegraph();
}
void fploy()
{
  textmode(C80);
    clrscr();
    int gd = DETECT, gm , points[]={320,150,420,300,250,300,320,150};
    initgraph(&gd, &gm,"c:\\turboc3\\bgi");
       fillpoly(4,points);
       getch();
    closegraph();
}
void ffill()
{
  textmode(C80);
    clrscr();
    startgraph();
       setcolor(RED);
       circle(100,100,50);
       floodfill(100,100,RED);
       getch();
    closegraph();
}
void piesl()
{
  textmode(C80);
    clrscr();
    startgraph();
       pieslice(200,200,0,135,100);
       getch();
    closegraph();
}

void ln()
{
  textmode(C80);
    clrscr();
    startgraph();
       line(200,200,330,300);
       getch();
    closegraph();

}