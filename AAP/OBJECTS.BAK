#define PI 3.14
#include"bmp.cpp"

void onapsup();
void docks();
void e();
void b();
void p();
void f();
void info();
void header();
void fun();
void logslideexit();
void exitlogo();
void logo();
void dock();
void circle1();
void circle2();
void circle3();
void arc2();
void arc1();
void speedo();
void onaps1();
void onaps2();
void naps();
void startgraph();
void fillmyscr();
void equalizer();
void obj3();
void ob2();
void obj1();
void onaps4();
void win8();
void details();
void ppt();
void showdate();
void loads();

void docks()
{

 circle1();
 circle2();
 circle3();
 arc2();
 arc1();
 speedo();
 obj3();
 ob2();
 obj1();
  closegraph();

}

void startgraph()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm,"c:\\turboc3\\bgi");

}

void info()
{
      onaps4();
      delay(1000);
      startgraph();
      loadbitmap("onaps123.bmp");
      setcolor(12);

      outtextxy(10,450,"Press Any Key To Exit...");
      getch();
   closegraph();
}
void header()
{
     fillmyscr();
     setcolor(12);
     int  x = 40, y = 40 ;
	       arc(x,y,0,360,10);
	       arc(x,y,0,360,12);
	       arc(x,y,0,360,14);
	       arc(x,y,0,360,16);
	       arc(x,y,0,360,18);
	       arc(x,y,0,360,20);
      settextstyle(8,0,4);
      outtextxy(60,30,"naps");
      details();
}
void e()
{
	int x=200 , y= 125;
	for(int i=0 ;i<=360; i++)
	{
	    arc(x,y,0,i,10);
	    arc(x,y,0,i,8);
	    arc(x,y,0,i,6);
	    delay(10);
	}
}
void p()
{
	int x=410 , y= 230;
	for(int i=0 ;i<=360; i++)
	{
	    arc(x,y,0,i,10);
	    arc(x,y,0,i,8);
	    arc(x,y,0,i,6);
	    delay(10);
	}
}
void b()
{
	int x=265 , y= 230;
	for(int i=0 ;i<=360; i++)
	{
	    arc(x,y,0,i,10);
	    arc(x,y,0,i,8);
	    arc(x,y,0,i,6);
	    delay(10);
	}
}
void f()
{
	int x=410 , y= 120;
	for(int i=0 ;i<=360; i++)
	{
	    arc(x,y,0,i,10);
	    arc(x,y,0,i,8);
	    arc(x,y,0,i,6);
	    delay(10);
	}
}


void showdate()
{
    setcolor(12);
     struct date d1;
     struct time t1;
	getdate(&d1);
	gettime(&t1);
	textcolor(4);
	settextstyle(1,0,1);
       outtextxy(20,300,"Date :");
       gotoxy(10,20);
       cout<<(int)d1.da_day<<"-"<<(int)d1.da_mon<<"-"<<d1.da_year;
       outtextxy(490,300,"Time :");
       gotoxy(70,20);
       cout<<(int)t1.ti_hour<<":"<<(int)t1.ti_min<<":"<<(int)t1.ti_sec;

}

void ppt()
{
     startgraph();
     setbkcolor(RED);
     setcolor(LIGHTCYAN);
     for(int i=-20,k=638,j=0,l=490;j<700;j+=1,l-=1,i+=1,k-=1)
     {
	delay(10);
	cleardevice();
	line(i,0,i,490);
	line(k,0,k,490);
	line(0,j,628,j);
	line(0,l,628,l);
     }

     void   *buffers;
     unsigned int size;
	cleardevice();
		rectangle(0,0,10,50);
		size=imagesize(0,0,300,100);
		buffers=malloc(size);
	getimage(0,0,300,100,buffers);
	     cleardevice();
	 for(int x=225;x<500;x++)
	 {
		putimage(x,225,buffers,XOR_PUT);
		delay(10);
	 }
	  free(buffers);
	  settextstyle(5,0,3);
	  outtextxy(242,235,"CJ Prerit");
	  delay(2000);
	  outtextxy(300,280,"Presents");
     //	delay(10);
	for( i=298 ;i< 700 ;i++)
	{   line(298,310,i,310);
	     delay(10);
	}
	closegraph();
}


void details()
{
       settextstyle(11,0,4);
	  circle(8,463,7);
	  outtextxy(5,460,"C Copyright Protected");
	  outtextxy(500,460,"CJ Prerit Ameta");
}

void win8()
{
    startgraph();
    int c=1,x1 = 0, y1 = 0,x2 = 0, y2 = 0,x3 = 0, y3 = 0, r = 100,b=1, r2=100, a=0, t = 0;
	    setcolor(12);
    void   *buffer;
    unsigned int size;
    int p=230,q=336,p2=238,p4=246,p5=252,p3=244,p1=236,q1=344;
    int k=0;
    float s = 0.05;
	while(!kbhit())
	{
	    setcolor(WHITE);
	    details();
		setbkcolor(BLACK);
		setcolor(BLUE);
		line(230,330,370,330);
		line(230,350,370,350);
		line(226,335,226,345);
		line(226,335,230,330);
		line(226,345,230,350);
		line(374,335,374,345);
		line(374,335,370,330);
		line(374,345,370,350);
		settextstyle(1,0,1);
		outtextxy(267,360,"Loading...");
		bar(p++,q,p1++,q1);
		bar(p2++,q,p3++,q1);
		bar(p4++,q,p5++,q1);
		    if(p5==375)
		    {
			 p=230;    			 p1=236;
			 p2=238;			 p3=244;
			 p4=246;			 p5=252;
		    }
		setfillstyle(15,BLUE);
		setcolor(1);
	    int x ,y;
	    floodfill(300-x,160-y,BROWN);
	    x1 = r * cos((PI * t)/180);
	    y1 = r * sin((PI * t)/180);
	    arc(300-x1,160-y1,0,360,10);
	    floodfill(300-x1,160-y1,BLUE);
	    x2 = r * cos((PI * t)/120);
	    y2 = r * sin((PI * t)/120);
	    arc(300-x2,160-y2,0,360,10);
	    floodfill(300-x2,160-y2,BLUE);
	    x3 = r * cos((PI * t)/90);
	    y3 = r * sin((PI * t)/90);
	    arc(300-x3,160-y3,0,360,10);
	    floodfill(300-x3,160-y3,BLUE);
	    delay(s);
	    cleardevice();
	    t++;
	    c++;   s=s+0.03;
	    if(c==722)
	    {
	       delay(2000);
	       goto st;
	    }
	}
st:
    closegraph();
}

void logo()
{
     int  x = 300, y = 230 ;
	setcolor(12);
	       arc(x,y,0,360,50);
	       arc(x,y,0,360,48);
	       arc(x,y,0,360,46);
	       arc(x,y,0,360,44);
	       arc(x,y,0,360,42);
	       arc(x,y,0,360,40);
       delay(1000);

}

void exitlogo()
{
       startgraph();
       int a,b,d,f,e , x = 300, y = 230 , c , r=1 , i;
	logo();
	  settextstyle(11,0,4);
	  setcolor(15);
	  details();
	  settextstyle(11,0,4);
	  setcolor(12);
	delay(1000);
	for(i=0,a=0,f=37,b=5,c=13,d=21,e=29;i<=360;i++,c++,a++,b++,d++,e++,f++)
	{
	       delay(10);
	       setcolor(0);
	       arc(x,y,0,a,50);
	       arc(x,y,0,b,48);
	       arc(x,y,0,c,46);
	       arc(x,y,0,d,44);
	       arc(x,y,0,e,42);
	       arc(x,y,0,f,40);
	       delay(10);
	 }
	 delay(1000);
	cleardevice();

	exit(1);

}

void bouncingball()
{
      startgraph();
	int x = 0, y = 0, r = 100,r2=100, a=0, t = 0;
	    setcolor(12);
	settextstyle(1,0,1);
	outtextxy(10,450,"Press any key to exit...");
	while(!kbhit())
	{
	    x = r * cos((PI * t+a)/180);
	    y = r * sin((PI * t)/180);
	    arc(300-x,160-y,0,360,10);
	    x = r2 * cos((PI * t)/180);
	    y = r2 * sin((PI * t+a)/180);
	    arc(300-x,160-y,0,360,10);
	    delay(10);
	    cleardevice();
	    t++;                   a++;
	}
    closegraph();
}

void onaps4()
{
    clrscr();
      startgraph();
	int x = 0, y = 0, r = 80,a=0, t = 0;
	    setcolor(12);
	while(a!=360)
	{
	    x = r * cos((PI * t)/180);
	    y = r * sin((PI * t)/180);
	    arc(300-x,160-y,0,a,10);
	    delay(10);
	    t++;                   a++;
	}
    closegraph();
}

void fillmyscr()
{

	setcolor(11);
	gotoxy(0,0);
	for(int i=1;i<(1601);i++)
		 cout<<"В";

}

void equalizer()
{

    int a=0, r,b = 0 , j1,j3,j4,j2,j5,j6,j8,j7,m=3;
	startgraph();
	fillmyscr();
	setcolor(12);
	outtextxy(10,400,"Press Any Key To Exit...");
		rectangle(150,100,471,300);
		randomize();

	while(!kbhit())
	{
	     r = a = 293 - random(193);           //first up

		 for(j1 = 292 ; j1>a ; j1--)
		 {
		     setcolor(1);
		     outtextxy(151, j1 ,"ллллл");delay(m);

		 }
	     r = a = 293 - random(193);           //second up

		 for(j2 = 292 ; j2>a ; j2--)
		 {
		     setcolor(1);
		     outtextxy(191, j2 ,"ллллл");delay(m);

		 }
	      r = a = 293 - random(193);        //third up

		 for(j3 = 292 ; j3>a ; j3--)
		 {
		     setcolor(1);
		     outtextxy(231, j3 ,"ллллл");delay(m);

		 }
	     r = a = 293 - random(193);          //fourth up

		 for(j4 = 292 ; j4>a ; j4--)
		 {
		     setcolor(1);
		     outtextxy(271, j4 ,"ллллл");delay(m);

		 }
	     r = a = 293 - random(193);           //fifth up

		 for(j5 = 292 ; j5>a ; j5--)
		 {
		     setcolor(1);
		     outtextxy(311, j5 ,"ллллл");delay(m);

		 }
	     r = a = 293 - random(193);           //sixth up

		 for(j6 = 292 ; j6>a ; j6--)
		 {
		     setcolor(1);
		     outtextxy(351, j6 ,"ллллл");delay(m);

		 }
	      r = a = 293 - random(193);        //seventh up

		 for(j7 = 292 ; j7>a ; j7--)
		 {
		     setcolor(1);
		     outtextxy(391, j7 ,"ллллл");delay(m);

		 }
	     r = a = 293 - random(193);          //eight up

		 for(j8 = 292 ; j8>a ; j8--)
		 {
		     setcolor(1);
		     outtextxy(431, j8 ,"ллллл");delay(m);

		 }

	     r = b = 293 - random(193);         //first down
		 for( ; j1<b ; j1++)
		 {
		     setcolor(15);
		     outtextxy(151, j1 ,"ллллл");delay(m);

		 }

	      r = b = 293 - random(193);         //second down
		 for( ; j2<b ; j2++)
		 {
		     setcolor(15);
		     outtextxy(191, j2 ,"ллллл");delay(m);

		 }

	     r = b = 293 - random(193);          //third down
		 for( ; j3<b ; j3++)
		 {
		     setcolor(15);
		     outtextxy(231, j3 ,"ллллл");delay(m);

		 }

	      r = b = 293 - random(193);         //fourth down
		 for( ; j4<b ; j4++)
		 {
		     setcolor(15);
		     outtextxy(271, j4 ,"ллллл");delay(m);

		 }
	      r = b = 293 - random(193);         //fifth down
		 for( ; j5<b ; j5++)
		 {
		     setcolor(15);
		     outtextxy(311, j5 ,"ллллл");delay(m);

		 }

	      r = b = 293 - random(193);         //sixth down
		 for( ; j6<b ; j6++)
		 {
		     setcolor(15);
		     outtextxy(351, j6 ,"ллллл");delay(m);

		 }

	     r = b = 293 - random(193);          //seventh down
		 for( ; j7<b ; j7++)
		 {
		     setcolor(15);
		     outtextxy(391, j7 ,"ллллл");delay(m);

		 }

	      r = b = 293 - random(193);         //eight down
		 for( ; j8<b ; j8++)
		 {
		     setcolor(15);
		     outtextxy(431, j8 ,"ллллл");delay(m);

		 }
	}
    closegraph();
}

void circle1()
{
    textmode(C80);
    clrscr();
    startgraph();
    int x = 280 , y = 180 , r , i;

	for(i=10, r=10; i<100 , r<50 ; i++ ,x++ ,y++ ,r++)
	   {
	       setcolor(1);
	       circle(x,y,r);
	       delay(100);
	   }
	   closegraph();
	   getch();
}

void circle2()
{
    int x = 280 , y = 180 , r , i;
    startgraph();
	for(i=10, r=10; i<100 , r<50 ; i++ ,x++ ,y++ ,r++)
	   {
	       setcolor(1);
	       circle(x,y,r);
	       delay(100);
	       cleardevice();
	   }
      closegraph();
	   getch();
}

void arc1()
{
    textmode(C80);
    clrscr();

    int x = 280 , y = 180 , c = 0 , r , i;
    startgraph();
	for(i=1 ; i<50 ; i++ , c++ ,y-- )
	   {
	       setcolor(c);
	       arc(x,y,0,180,100);
	       delay(100);
	   }
      closegraph();

    getch();
}

void arc2()
{
    textmode(C80);
    clrscr();
    startgraph();
    int x = 310, y = 238 , c = 0 , r=1 , i;

	for(i=1 ; i<100 ; i++ , r++ , c++ )
	   {
	       setcolor(c);
	       arc(x,y,0,180,r);
	       delay(50);
	   }
  closegraph();

    getch();
}

void speedo()
{
    textmode(C80);
    clrscr();

    int a , x = 300, y = 230 , c = 0 , r=1 , i;
    float p;
    startgraph();
	for(i=0, a=0, p = 0 ; i<=360 ; i++ , c++ , a++, p+=0.28)
	   {
	       setcolor(c);
	       arc(x,y,0,a,100);
	       delay(10);
	       gotoxy(36,15);
	       cout<<setprecision(3)<<p<<"%";
	   }
	       gotoxy(36,15);
	       cout<<"100.00%";
  closegraph();
	   getch();
}

void obj1()
{
    textmode(C80);
    clrscr();
    startgraph();
    int a , k , x = 300, y = 230 , c = 0 , r=1 , i;

	for(i=0, a=0 ,k = 50; i<=50 ; i++ , c++ , a++,k--)
	   {
	       setcolor(12);
	       arc(x,y,0,a,k);
	       arc(x,y,0,a,k);
	       delay(150);

	   }
  closegraph();
	   getch();
}

void ob2()
{
    int a , k , x = 300, y = 230 , c = 0 , r=1 , i;
    startgraph();
	for(i=0 ,a = 0, k = 200; i<=360 ; i++ , c++ , a++,k+=2)
	   {
	       setcolor(12);
	       arc(x,y,0,a,k);
	       arc(x,y,0,a,k);
	       delay(10);
	   }
  closegraph();
	   getch();
}

void obj3()
{
    textmode(C80);
    clrscr();
    startgraph();
    int a , k , x = 300, y = 230 , c = 0 , r=1 , i;

	for(i=0 ,a = 0, k = 200; i<=360 ; i++ , c++ , a++,k-=2)
	   {
	       setcolor(12);
	       arc(x,y,0,a,k);
	       arc(x,y,0,a,k);
	       delay(10);
	   }
  closegraph();
	   getch();
}

void circle3()
{
    textmode(C80);
    clrscr();

    int a , x = 300, y = 230 , c = 0 , r=1 , i;
    startgraph();
	for(i=0 ,a = 0; i<=360 ; i++ , c++ , a++)
	   {
	       setcolor(12);
	       arc(x,y,0,a,50);
	       arc(x,y,0,a,48);
	       arc(x,y,0,a,46);
	       arc(x,y,0,a,44);
	       arc(x,y,0,a,42);
	       arc(x,y,0,a,40);
	       delay(20);
	   }

  closegraph();
	   getch();
}

void onaps1()
{
    startgraph();
    settextstyle(7,0,5);
    int a,b,d,f,e , x = 300, y = 230 , c , r=1 , i;
	for(i=0,a=0,f=37,b=5,c=13,d=21,e=29;i<=360;i++,c++,a++,b++,d++,e++,f++)
	{
	       delay(8);
	       setcolor(12);
	       arc(x,y,0,a,50);
	       arc(x,y,0,b,48);
	       arc(x,y,0,c,46);
	       arc(x,y,0,d,44);
	       arc(x,y,0,e,42);
	       arc(x,y,0,f,40);
	       delay(10);
	 }
	 delay(1000);
closegraph();
}

void onaps2()
{

    int a,i, x = 300, y=230 ;
    startgraph();
	for(y=230  ; y<=390 ; y++)
	{
	       cleardevice();
	       setcolor(12);
	       arc(x,y,0,360,50);
	       arc(x,y,0,360,48);
	       arc(x,y,0,360,46);
	       arc(x,y,0,360,44);
	       arc(x,y,0,360,42);
	       arc(x,y,0,360,40);
	       delay(10);

	 }
  closegraph();
}
void onapsup()
{

    int  x = 300, y ;
    startgraph();
	for( y=390 ; y>229; y--)
	{
	       cleardevice();
	       setcolor(12);
	       arc(x,y,0,360,50);
	       arc(x,y,0,360,48);
	       arc(x,y,0,360,46);
	       arc(x,y,0,360,44);
	       arc(x,y,0,360,42);
	       arc(x,y,0,360,40);
	       delay(10);

	 }
  closegraph();
}


void naps()
{
    startgraph();
    int a,b,d,f,j,e , x = 300, y = 230 , c , r=1 , i;
	setcolor(12);
	       arc(x,y,0,360,50);
	       arc(x,y,0,360,48);
	       arc(x,y,0,360,46);
	       arc(x,y,0,360,44);
	       arc(x,y,0,360,42);
	       arc(x,y,0,360,40);
	delay(700);

    int x1=355,x2=380,x3=405,x4=430,y1=207;

	settextstyle(3,0,4);        //good modes are 10,8,7 (11 modes)
	outtextxy(x1,y1,"n"); delay(700);
	outtextxy(x2,y1,"a"); delay(700);
	outtextxy(x3,y1,"p"); delay(700);
	outtextxy(x4,y1,"s"); delay(700);


	for(d =20;x1<700;x1+=1.5,x2+=2,x3+=3,x4+=4,d-=0.05)
	{
	       arc(x,y,0,360,50);
	       arc(x,y,0,360,48);
	       arc(x,y,0,360,46);
	       arc(x,y,0,360,44);
	       arc(x,y,0,360,42);
	       arc(x,y,0,360,40);
				       delay(d);
		outtextxy(x1,y1,"n"); delay(d);
		outtextxy(x2,y1,"a"); delay(d);
		outtextxy(x3,y1,"p"); delay(d);
		outtextxy(x4,y1,"s"); delay(d);
	    cleardevice();
	}
	delay(500);
       closegraph();
}
