//By Prerit Ameta Class XI Science    +917791997339     cjprerit@gmail.com
//Project on C++
//Onaps - 'Live the Dreams...'     An Operationg System Design
//Time Duration: 19 - 01 - 2015  ---  13 - 02 - 2015    Approx  500hrs.
//Precautions to be taken to run Onaps -
//Remember the order of header files is also important to run the program.
//Make sure for graphics that the location is c:\\turboc3\\bgi
//Be Sure of CHANGING THE DIRECTORY to AAP folder.
// Username : cj   	       	      &		Password : adgjmptw



#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<Graphics.h>
#include<fstream.h>
#include<process.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<iomanip.h>
#include<mouse.h>





void fun();
void calculator();
void piano();
int loadbitmap(char *filename)
{
   FILE *ptr=NULL;                //file handle to open bitmap file
   int width,height;              //width and height of the bitmap
   unsigned long temp=0,i=0,j=0;  //some variables i need
   unsigned long ww;
   ptr=fopen(filename,"rb");      //open the bitmap file
   if(!ptr) return 0;             //if its not there return
   width=0;height=0;              //initialise wisth and height to zero
   fseek(ptr,18,SEEK_SET);        //got to offset 18 in file
   for(i=0x1;i<=0x10000;i*=0x100) //read the width
   {
	   temp=fgetc(ptr);
	   width+=(temp*i);
   }
   fseek(ptr,22,SEEK_SET);        //go to offset 22 in file
   for(i=0x1;i<=0x10000;i*=0x100) //read the height
   {
	   temp=fgetc(ptr);
	   height+=(temp*i);
   }

   ww=width;
   //ww is the number of reads to make for each horizontal line
   if(ww%2)
   //ww has to be half of width - since each pixel is only 4 bits of information
   ww++;ww/=2;
   //just getting the correct value
   if(ww%4)
   //now - ww is stored as sets of 4 pixels each
   ww=(ww/4)*4+4;
   //if width is less than ww*2 we ignore what we read

   fseek(ptr,119,SEEK_SET);
   //Ok! offset 119 - lets read the pixels -
   //remember the bitmap is stroed up - side - down
   int ch,ch1,ch2;
   for(i=0;i<height;i++)
   for(j=0;j<ww;j++)
   {
	   ch=fgetc(ptr);
	   //each character read is 2 pixels - yes 4 bits per pixel - so 16 colors
	   ch1=ch;ch2=ch;
	   //find those colors using bitwise ops
	   ch1=ch1&(0x0f);
	   //ch1=ch1$gt;$gt;4;
	   // ~~
	   ch2=ch2&(0x0f);
	   // ~~
	   if(j*2<width)
	   //ok so put the first pixel read on screen
	   putpixel((j)*2,(height-1-i),ch1);
	   if(j*2+1<width)
	   //put the second pixel read on screen
	   putpixel((j)*2+1,(height-1-i),ch2);
   }
   fclose(ptr);
   //close the file handle
   return 1;
}




void piano()
{
    clrscr();
    closegraph();
       char cc ;
	  int a;
	  cout<<"This Program is a Piano.";
	  cout<<"\nThe Frequencies List and Their Respectible Frequencies are below.";
	  gotoxy (1,5);
	  cout<<" A: 500  ";cout<<" S: 1000 ";
	  cout<<" D: 1500 ";cout<<" F: 2000 ";
	  cout<<" G: 2500 ";cout<<" H: 3000 ";
	  cout<<" J: 3500 ";cout<<" K: 4000 ";
	  cout<<" L: 4500 ";
	  gotoxy(1,8);
	  cout<<" Q: 100  ";cout<<" W: 250  ";
	  cout<<" R: 850  ";cout<<" E: 750  ";
	  cout<<" T: 1150 ";cout<<" Y: 1350 ";
	  cout<<" U: 1650 ";cout<<" I: 1850 ";
	  cout<<" O: 2150 ";cout<<" P: 2350 ";
	  gotoxy(1,11);
	  cout<<" Z: 3250 ";cout<<" X: 3750 ";
	  cout<<" C: 4250 ";cout<<" V: 4750 ";
	  cout<<" B: 5250 ";cout<<" N: 5750 ";
	  cout<<" M: 6000 ";
	  gotoxy(23,13);cout<<"Make Sure That Caps Lock is ON.";
	  gotoxy(28,15);cout<<" To End Press SPACE ";

	  cout<<"\n\nEnter Your Choice: ";
st:	  cc = getch();
	  a = cc;
	  if(a == 81)
		sound(100);
	  else
	  if(a == 87)
		sound(250);
	  else
	  if(a == 69)
		sound(750);
	  else
	  if(a == 82)
		sound(850);
	  else
	  if(a == 84)
		sound(1150);
	  else
	  if(a == 89)
		sound(1350);
	  else
	  if(a == 85)
		sound(1650);
	  else
	  if(a == 73)
		sound(1850);
	  else
	  if(a == 79)
		sound(2150);
	  else
	  if(a == 80)
		sound(2350);
	  else
	  if(a == 81)
		sound(2600);
	  else
	  if(a == 82)
		sound(2850);
	  else
	  if(a == 65)
		sound(500);
	  else
	  if(a == 83)
		sound(1000);
	  else
	  if(a == 68)
		sound(1500);
	  else
	  if(a == 70)
		sound(2000);
	  else
	  if(a == 71)
		sound(2500);
	  else
	  if(a == 72)
		sound(3000);
	  else
	  if(a == 74)
		sound(3500);
	  else
	  if(a == 75)
		sound(4000);
	  else
	  if(a == 76)
		sound(4500);
	  else
	  if(a == 90)
		sound(3250);
	  else
	  if(a == 88)
		sound(3750);
	  else
	  if(a == 67)
		sound(4250);
	  else
	  if(a == 86)
		sound(4750);
	  else
	  if(a == 66)
		sound(5250);
	  else
	  if(a == 78)
		sound(5750);
	  else
	  if(a == 77)
		sound(6000);
	  else

	  if(a == 32)
		goto end;
	  else
		cout<<"\nThe Choice is Invaid!";

		goto st;
end:
	  gotoxy(27,20);
	  cout<<"Hope You Have Enjoyed it!!";
	  nosound();
    getch();

}

void fun()
{
    int ch;
     while(1)
     {
	clrscr();
	cout<<"1. Piano\n";
	cout<<"2. Calculator\n";
	cout<<"Press 0 to quit...\n";
	gotoxy(10,20);cin>>ch;
	switch(ch)
	  {
		case 1  :  piano();      break;
		case 2  :  calculator(); break;
		case 0  :  return;
	  }
      }
}

void calculator()
{
     closegraph();
	long double x,y;
	char ch,ar;
	do
       {
	clrscr();
	cout<<"This is a Calculator containing the following functions.";
	cout<<" Type               \n";
	cout<<" [+] for Addition   \n";
	cout<<" [-] for Subtraction\n";
	cout<<" [*] for Multiplication\n";
	cout<<" [/] for Division   \n";
	cout<<" [%] for Percentage \n";
	cout<<" [^] for Power\n";
	cout<<"Enter Function To use:  ";
	cin>>ch;
	cout<<(char)7;
	cout<<endl;
	//For Addition
       if(ch=='+')
		{
		clrscr();
		cout<<"You are using Addition\n ";
		cout<<"Enter First Number = \n ";
		cin>>x;
		cout<<"Enter Second Number = \n ";
		cin>>y;
		cout<<"Your answer is\n  ";
		cout<<x+y;
		cout<<(char)7;
		}
	// For Subtraction
	 if(ch=='-')
		{
		clrscr();
		cout<<"You are using Subtraction\n ";
		cout<<"Enter First Number = \n ";
		cin>>x;
		cout<<"Enter Second Number =\n  ";
		cin>>y;
		cout<<"Your answer is \n ";
		cout<<x-y;
		cout<<(char)7;
		}
	// For Multiplication
	 if(ch=='*')
		{
		clrscr();
		cout<<"You are using Multiplication\n ";
		cout<<"Enter First Number = \n ";
		cin>>x;
		cout<<"Enter Second Number =\n  ";
		cin>>y;
		cout<<"Your answer is \n ";
		cout<<x*y;
		cout<<(char)7;
		}
	// For Division
	 if(ch=='/')
		{
		clrscr();
		cout<<"You are using Division\n ";
		cout<<"Enter First Number = \n ";
		cin>>x;
		cout<<"Enter Second Number = \n ";
		cin>>y;
		cout<<"Your answer is \n ";
		cout<<x/y;
		cout<<(char)7;
		}
		// For Percentage
	 if(ch=='%')
		{
		clrscr();
		cout<<"You are using Percentage\n ";
		cout<<"Enter Number = \n ";
		cin>>x;
		cout<<"Enter Percentage =\n  ";
		cin>>y;
		cout<<"Your answer is \n ";
		cout<<y/100*x;
		cout<<(char)7;
	}
		//For Power
	if(ch=='^')
		{
		clrscr();
		cout<<"You are using Power\n ";
		cout<<"Enter Number = \n ";
		cin>>x;
		cout<<"Enter Power = \n ";
		cin>>y;
		cout<<"Your answer is\n  ";
		cout<<pow(x,y);
		cout<<(char)7;
	}
		cout<<endl;
		cout<<"Do you want to continue..Y/N?";
		cin>>ar;

		}
		while(ar=='Y'|| ar=='y');
		if(ar=='N' || ar=='n')
		{
			cout<<"Thankyou for using this Calculator. Good Bye. \n ";
			cout<<"Press any key to exit.......\n ";
			return ;
		}

}
void box(int x1, int y1, int x2, int y2, int ct, int cb);

void box(int x1, int y1, int x2, int y2, int ct, int cb)
{
    int i;
    textcolor(ct);
    textbackground(cb);

    gotoxy(x1,y1);
	    cprintf("…");  		 //205,201,200,188,187,186
	for(i = x1 ; i < x2 ; i++)
	    cprintf("Õ");
	    cprintf("ª");
    gotoxy(x1,y2);
	    cprintf("»");
	for(i = x1 ; i < x2 ; i++)
	    cprintf("Õ");
    gotoxy(x2,y1);
	for(i = y1 ; i < y2-1 ; i++ , y1++)
	{
	    gotoxy(x2+1,y1+1);
		cprintf("∫");
	    gotoxy(x1,y1+1);
		cprintf("∫");
	}
    gotoxy(x2+1,y2);
	    cprintf("º");

}
#define PI 3.14


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
		 cout<<"≤";

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
		     outtextxy(151, j1 ,"€€€€€");delay(m);

		 }
	     r = a = 293 - random(193);           //second up

		 for(j2 = 292 ; j2>a ; j2--)
		 {
		     setcolor(1);
		     outtextxy(191, j2 ,"€€€€€");delay(m);

		 }
	      r = a = 293 - random(193);        //third up

		 for(j3 = 292 ; j3>a ; j3--)
		 {
		     setcolor(1);
		     outtextxy(231, j3 ,"€€€€€");delay(m);

		 }
	     r = a = 293 - random(193);          //fourth up

		 for(j4 = 292 ; j4>a ; j4--)
		 {
		     setcolor(1);
		     outtextxy(271, j4 ,"€€€€€");delay(m);

		 }
	     r = a = 293 - random(193);           //fifth up

		 for(j5 = 292 ; j5>a ; j5--)
		 {
		     setcolor(1);
		     outtextxy(311, j5 ,"€€€€€");delay(m);

		 }
	     r = a = 293 - random(193);           //sixth up

		 for(j6 = 292 ; j6>a ; j6--)
		 {
		     setcolor(1);
		     outtextxy(351, j6 ,"€€€€€");delay(m);

		 }
	      r = a = 293 - random(193);        //seventh up

		 for(j7 = 292 ; j7>a ; j7--)
		 {
		     setcolor(1);
		     outtextxy(391, j7 ,"€€€€€");delay(m);

		 }
	     r = a = 293 - random(193);          //eight up

		 for(j8 = 292 ; j8>a ; j8--)
		 {
		     setcolor(1);
		     outtextxy(431, j8 ,"€€€€€");delay(m);

		 }

	     r = b = 293 - random(193);         //first down
		 for( ; j1<b ; j1++)
		 {
		     setcolor(15);
		     outtextxy(151, j1 ,"€€€€€");delay(m);

		 }

	      r = b = 293 - random(193);         //second down
		 for( ; j2<b ; j2++)
		 {
		     setcolor(15);
		     outtextxy(191, j2 ,"€€€€€");delay(m);

		 }

	     r = b = 293 - random(193);          //third down
		 for( ; j3<b ; j3++)
		 {
		     setcolor(15);
		     outtextxy(231, j3 ,"€€€€€");delay(m);

		 }

	      r = b = 293 - random(193);         //fourth down
		 for( ; j4<b ; j4++)
		 {
		     setcolor(15);
		     outtextxy(271, j4 ,"€€€€€");delay(m);

		 }
	      r = b = 293 - random(193);         //fifth down
		 for( ; j5<b ; j5++)
		 {
		     setcolor(15);
		     outtextxy(311, j5 ,"€€€€€");delay(m);

		 }

	      r = b = 293 - random(193);         //sixth down
		 for( ; j6<b ; j6++)
		 {
		     setcolor(15);
		     outtextxy(351, j6 ,"€€€€€");delay(m);

		 }

	     r = b = 293 - random(193);          //seventh down
		 for( ; j7<b ; j7++)
		 {
		     setcolor(15);
		     outtextxy(391, j7 ,"€€€€€");delay(m);

		 }

	      r = b = 293 - random(193);         //eight down
		 for( ; j8<b ; j8++)
		 {
		     setcolor(15);
		     outtextxy(431, j8 ,"€€€€€");delay(m);

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
void flcapi();
void convertcase();
void pali();
void lowercase();
void uppercase();
void stringani();
int mystrstr(char*arr,char*arr2) ;
void mystrrev(char*arr,int e)   ;
void mystrcat(char*arr,char*arr2) ;
void mystrcpy(char*arr)            ;
int mystrlen(const char*arr)         ;
int mystrcmp(char*arr,char*arr2)      ;
void string();

int mystrlen(const char*arr)
{
	int len;
	for( len=0 ; arr[len]!='\0'; len++);
	return len;
}

void mystrcpy(char*arr)
{
	char arr2[31];
	for(int i=0;arr[i];i++)
	{
		arr2[i]=arr[i];
	}
	arr2[i]='\0';
	puts(arr2);
}

void mystrcat(char*arr,char*arr2)
{
	int length=mystrlen(arr);
	for(int i=length,j=0;arr2[j];j++)
	{
		arr[i++]=arr2[j];
	}
	arr[i]='\0';
	puts(arr);
}

int mystrcmp(char*arr,char*arr2)
{
	int res;
	for(int i=0;arr[i]||arr2[i];i++)
	{
		if(arr[i]!=arr2[i])
		{
			res=arr[i]-arr2[i];
			break;
		}
		else
			res=0;
	}
	return res;
}

void mystrrev(char*arr,int e)
{
	for(int i=0,p=e-1;i<e/2;i++,p--)
	{
		arr[i]=arr[i]+arr[p];
		arr[p]=arr[i]-arr[p];
		arr[i]=arr[i]-arr[p];
	}
       gotoxy(15,19);	cout<<"Reversed string is: "<<arr;
}

int mystrstr(char*arr,char*arr2)
{    int pos;signed found=0;
	for (int i=0;arr[i];i++)
	{	pos=i;
		for(int j=0;arr2[j];j++,i++)
		{	if(arr[i]!=arr2[j])
			{	pos=i;
				break;
			}
		}
		if(arr2[j]=='\0')
		{
			found=1;
			break;
		}
	}
		if(found)
		{    gotoxy(15,19);    cout<<"The String is on Position : ";
		     return (pos+1);

		}
		else
		{    gotoxy(15,19);    cout<<" String Not Found ";
			return 0;
		}
}


void stringani()
{
	  for(int i = 3 , j = 2 ; i<62 ; i++, j++)
	  {
		textcolor(i-14);
		gotoxy(i,3);
		cprintf("≤≤≤≤");
		gotoxy(j,3);
		cprintf(" ");
		delay(5);
		gotoxy(i,4);
		cprintf("≤≤");
		gotoxy(j,4);
		cprintf(" ");
		delay(5);
		gotoxy(i,5);
		cprintf("≤≤≤≤");
		gotoxy(j,5);
		cprintf(" ");
	  }

	for(i = 3 ,j = 2 ; i<62 ; i++, j++)
	  {
		textcolor(i-14);
		gotoxy(i,6);
		cprintf("  ≤≤");
		gotoxy(j,6);
		cprintf(" ");
		delay(5);
		gotoxy(i,7);
		cprintf("≤≤≤≤tring");
		gotoxy(j,7);
		cprintf(" ");
		delay(5);
	  }
}
void string()
{

     while(1)
     {
	clrscr();
	 textcolor(12);
      char arr[100],arr2[100], cha ;
      int ch,a,n;
	 box(1,1,78,25,1,0);
	 delay(1000);
	 stringani();
	 box(3,3,6,24,2,0);
	 delay(500);
	gotoxy(4,4);
	gotoxy(4,8);
	cout<<" 1.∫ FIND STRING LENGTH";gotoxy(4,9); delay(100);
	cout<<" 2.∫ COPY THE STRING";   gotoxy(4,10);           delay(100);
	cout<<" 3.∫ CONCATENATE TWO STRINGS";   gotoxy(4,11);   delay(100);
	cout<<" 4.∫ REVERSE THE STRING";        gotoxy(4,12);   delay(100);
	cout<<" 5.∫ FIND A STRING IN ANOTHER STRING";   gotoxy(4,13); delay(100);
	cout<<" 6.∫ FIND A CHARACTER IN A STRING";      gotoxy(4,14); delay(100);
	cout<<" 7.∫ Convert into Lowercase ";gotoxy(4,15);            delay(100);
	cout<<" 8.∫ Convert into Uppercase ";   gotoxy(4,16);         delay(100);
	cout<<" 9.∫ Palindrome ";   gotoxy(4,17);                     delay(100);
	cout<<"10.∫ Convert Case";   gotoxy(4,18);                    delay(100);
       gotoxy(50,13);
	cout<<"Enter Your Desired Choice";
       gotoxy(60,24);
	cout<<"Press 0 To Exit.";
	gotoxy(62,14);
	cin>>ch;
	box(13,18,57,24,12,0);
	    switch(ch)
	    {
		case 1:	gotoxy(15,19);cout<<"Enter String : ";gets(arr);
			int c=mystrlen(arr);
			gotoxy(15,21);cout<<"The Length Of String is : ";cout<<c;
			break;
		case 2:	gotoxy(15,19);cout<<"Enter String : ";gets(arr);
			gotoxy(15,21);cout<<"The String After Copying is: ";mystrcpy(arr);
			break;
		case 3:	gotoxy(15,19);cout<<"Enter String1 : ";gets(arr);
			gotoxy(15,21);cout<<"Enter String2 : ";gets(arr2);
			gotoxy(15,23);cout<<"The Joined String is : ";mystrcat(arr,arr2);
			  break;
		case 4: gotoxy(15,19);cout<<"Enter String : ";gets(arr);
			gotoxy(15,21);cout<<"No.of characters to be reversed : ";cin>>n;
			mystrrev(arr,n);
			break;
		case 5: gotoxy(15,19);cout<<"Enter String1 : ";gets(arr);
			gotoxy(15,21);cout<<"Enter String to be Found : ";gets(arr2);
			int s=mystrstr(arr,arr2);cout<<s;
			break;
		case 6: gotoxy(15,19);cout<<"Enter String : "; gets(arr);
			gotoxy(15,21);cout<<"Enter a character to be Found: ";cin>>cha;
				for(int i=0;arr[i]!='\0';i++)
				{     gotoxy(15,19);
					if (arr[i]==cha)
					cout<<"The Character Found On Position : "<<i+1;
					else
					cout<<"Character Not Found";
				}
			break;
		case 7:	gotoxy(15,19);  lowercase();
			break;
		case 8:	gotoxy(15,19);  uppercase();
			  break;
		case 9: gotoxy(15,19);  pali();
			break;
		case 10: gotoxy(15,19); convertcase();  break;
		case 0: return ;

	    }
		getch();
      }
}
void lowercase()
{
	char  v[100], s[100];
	gotoxy(15,19);cout<<"Enter The string in Uppercase : ";
	gets(s);
	gotoxy(15,21);	cout<<"The String in Lowercase is : ";
	for(int i = 0 ;  s[i] != '\0'  ; i++ )
	{    v[i] = tolower(s[i]);
		cout<<v[i];
	}

}
void uppercase()
{

	char  v[100], s[100];
gotoxy(15,19);	cout<<"Enter The string in lowercase : ";
	gets(s);
	gotoxy(15,21);	cout<<"The String in uppercase is : ";
	for(int i = 0 ;  s[i] != '\0'  ; i++ )
	{    v[i] = toupper(s[i]);
		cout<<v[i];
	}

}

void pali()
{
	int i , n , j ;
	char s[100];

gotoxy(15,19);	     cout<<"Enter string : ";
	     gets(s);
gotoxy(15,21);
	     for(i = 0 ; s[i]!='\0' ;i++)
			;
	     n = i;
	     j = i - 1 ;
	     for(i = 0; i<n/2; i++ ,j-- )
	     {
		  if(s[i]!=s[j])
		      break;

	     }
	     if(i==n/2)
		cout<<"Palindrome";
	     else
		cout<<"Not palindrome";

}

void convertcase()
{
  char c[20] , d ;
	   int l,i=15 ,  y , a , b = 0  ;

gotoxy(15,19);		cout<<"Enter String : ";cin>>c;
  l = strlen(c);
first:	   a = c[b];
 if (a>=97 && a<=122)
	 {     y =  a - 32;
	      d = y;
	 }
	 else
	 {
	     y=a+32;
	     d=y;
	 }
    gotoxy(i++,21);  cout<<d;
    b++;
    if (b<l)
 goto first;

}
void create();
void smlele();
void maxele();
void mtrxinarray();
void llc();
void rc();
void ult();
void avele();
void addele();
void bothd();
void delrow();
void allcorners();
void transpose();
void rd();
void ld();
void subtractele();
void centreele();
void delrow();
void printrow();
void printcolumn();
void printrandc();
void delrandc();
void border();
void delcorners();
void matrixani();
void matrix();


void matrixani()
{
     clrscr();
     gotoxy(21,7);
	box(1,1,78,25,1,0);
	delay(500);

    int i , j;
    gotoxy(3,3);
	cprintf("≤≤≤≤≤≤≤≤");  gotoxy(3,4);
	cprintf("≤≤ ≤≤ ≤≤");  gotoxy(3,5);
	cprintf("≤≤ ≤≤ ≤≤");  gotoxy(3,6);
	cprintf("≤≤ ≤≤ ≤≤");  gotoxy(3,7);
	cprintf("≤≤ ≤≤ ≤≤atrix");

      for(i = 3 ,j = 2 ; i<62 ; i++, j++)
	  {
		textcolor(i-14);
		gotoxy(i,3);
		cprintf("≤≤≤≤≤≤≤≤");
		gotoxy(j,3);
		cprintf(" ");
		delay(5);
		gotoxy(i,4);
		cprintf("≤≤ ≤≤ ≤≤");
		gotoxy(j,4);
		cprintf(" ");
		delay(5);
		gotoxy(i,5);
		cprintf("≤≤ ≤≤ ≤≤");
		gotoxy(j,5);
		cprintf(" ");
	  }

	for(i = 3 ,j = 2 ; i<62 ; i++, j++)
	  {
		textcolor(i-14);
		gotoxy(i,6);
		cprintf("≤≤ ≤≤ ≤≤");
		gotoxy(j,6);
		cprintf(" ");
		delay(5);
		gotoxy(i,7);
		cprintf("≤≤ ≤≤ ≤≤atrix");
		gotoxy(j,7);
		cprintf(" ");
		delay(5);
	  }
}

void matrix()
{
     int m=100, ch;
     while(1)
     {
	clrscr();

	box(1,1,78,25,2,0);
	delay(1000);
	matrixani();

	box(3,3,6,24,1,0);
	textcolor(6);
     int i , j;
     char t[5];
	gotoxy(4,4);
	cprintf("1. ∫ Create A Matrix."); 	       delay(m);
	gotoxy(4,5);
	cprintf("2. ∫ Add Elements Of 2 Matrixes.");       delay(m);
	gotoxy(4,6);
	cprintf("3. ∫ Subtract Elements Of 2 Matrixes.");  delay(m);
	gotoxy(4,7);
	cprintf("4. ∫ Average Of Elemets Of Matrix."); delay(m);
	gotoxy(4,8);
	cprintf("5. ∫ Maximum Element Of Matrix.");    delay(m);
	gotoxy(4,9);
	cprintf("6. ∫ Smallest Element Of Matrix.");   delay(m);
	gotoxy(4,10);
	cprintf("7. ∫ Right Diagonal of Matrix.");     delay(m);
	gotoxy(4,11);
	cprintf("8. ∫ Left Diagonal Of Matrix.");      delay(m);
	gotoxy(4,12);
	cprintf("9. ∫ Border Of Matrix.");             delay(m);
	gotoxy(4,13);
	cprintf("10.∫ All Corners Of Matrix.");        delay(m);
	gotoxy(4,14);
	cprintf("11.∫ Centre Element Of A Square Matrix."); delay(m);
	gotoxy(4,15);
	cprintf("12.∫ Print Only A Row Of Matrix.");   delay(m);
	gotoxy(4,16);
	cprintf("13.∫ Print Only A Column Of Matrix.");delay(m);
	gotoxy(4,17);
	cprintf("14.∫ Print Only One Row And Column Of Matrix."); delay(m);
	gotoxy(4,18);
	cprintf("15.∫ Eleminate A Row Of Matrix.");    delay(m);
	gotoxy(4,19);
	cprintf("16.∫ Upper Left Triangle Of Matrix.");delay(m);
	gotoxy(4,20);
	cprintf("17.∫ Enter Elements Of Matrix In Array.");  delay(m);
	gotoxy(4,21);
	cprintf("18.∫ Eleminate A Row And A Column Of Matrix.");  delay(m);
	gotoxy(4,22);
	cprintf("19.∫ Delete Corners Of A Matrix.");   delay(m);
	gotoxy(4,23);
	cprintf("20.∫ Transpose A Matrix.");           delay(m);

	textcolor(3);

      gotoxy(60,24);
	cprintf("Press 0 To Exit.");

      gotoxy(50,13);
	cprintf("Enter Your Desired Choice");
      gotoxy(62,14);
	 cin>>t;
	 ch=atoi(t);     //convert if any character to integer
	 textcolor(10);
	    switch(ch)
	    {
		case 1: create();	     break;
		case 2: addele();    	     break;
		case 3: subtractele();       break;
		case 4: avele();       	     break;
		case 5: maxele();     	     break;
		case 6: smlele();     	     break;
		case 7: rd();         	     break;
		case 8: ld();         	     break;
		case 9: border();     	     break;
		case 10: allcorners();	     break;
		case 11: centreele(); 	     break;
		case 12: printrow();  	     break;
		case 13: printcolumn();	     break;
		case 14: printrandc();	     break;
		case 15: delrow();    	     break;
		case 16: ult();       	     break;
		case 17: mtrxinarray();	     break;
		case 18: delrandc();  	     break;
		case 19: delcorners();	     break;
		case 20: transpose(); 	     break;
		case 0 : return ;
		default : gotoxy(52,16);cout<<"Invalid Choice Entered!";
				delay(500);
	     }
     }
}

void create()
{
    clrscr();
	int m[100][100] , i , j , c , r ;
	cout<<"This Program is on Matrix\n";
	cout<<"Enter Number of Rows: \n";
	cin>>r;
	cout<<"Enter Number of Columns: \n";
	cin>>c;
	cout<<"Enter Elements: \n";
	    for(i = 0 ; i < r ; i++ )
	    {	for(j = 0 ; j < c ; j ++)
		    cin>>m[i][j];
	    }
	cout<<"The Matrix is as follows: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		    cout<<m[i][j]<<"\t";
		cout<<"\n";
	    }
    getch();
}

void maxele()
{    clrscr();
	int m[100][100] , max = 0 , i , j , c , r ;
	  cout<<"This Program is to Find the max element in the matrix\n";
	  cout<<"Enter Number of Rows: \n";
	  cin>>r;
	  cout<<"Enter Number of Columns: \n";
	  cin>>c;
	  cout<<"Enter Elements: \n";
	    for(i = 0 ; i < r ; i++ )
	    {	for(j = 0 ; j < c ; j ++)
		    cin>>m[i][j];
	    }
	    cout<<"The Matrix is as follows: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		    cout<<m[i][j]<<"\t";
		    cout<<"\n";
	    }
		    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		    if(m[i][j] > max)
			max = m[i][j];
	    }
	    cout<<"The Greatest Element in the matrix is: "<<max;
    getch();
}
void smlele()
{
   clrscr();
	int m[100][100] ,max = 0 , min , i , j , c , r ;
	  cout<<"This Program is on to Find the smallest element in the matrix\n";
	  cout<<"Enter Number of Rows: \n";
	  cin>>r;
	  cout<<"Enter Number of Columns: \n";
	  cin>>c;
	  cout<<"Enter Elements: \n";
	    for(i = 0 ; i < r ; i++ )
	    {	for(j = 0 ; j < c ; j ++)
		    cin>>m[i][j];
	    }
	    cout<<"The Matrix is as follows: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		    cout<<m[i][j]<<"\t";
		cout<<"\n";
	    }  for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		    if(m[i][j] > max)
			max = m[i][j];
	    }    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		    if(m[i][j] < max)
			max = m[i][j];
	    }
	    cout<<"The Smallest Element in the matrix is: "<<max;
   getch();
}
void llc()
{
    clrscr();
	int m[100][100] , a[100], i , j , c , k = 0 , r ;

	cout<<"This Program is on the lower left corner of the matrix.\n";
	cout<<"Enter Number of Rows: \n";
	cin>>r;
	cout<<"Enter Number of Columns: \n";
	cin>>c;

	cout<<"Enter Elements: \n";
	    for(i = 0 ; i < r ; i++ )
	    {	for(j = 0 ; j < c ; j ++)
		    cin>>m[i][j];
	    }
	cout<<"The Matrix is as follows: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		    cout<<m[i][j]<<"\t";
		cout<<"\n";
	    }
	cout<<"The lower left corner of the matrix is: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++ )
		{   if(i>j)
		       cout<<m[i][j];
		    cout<<"\t";
		}
		cout<<"\n";
	    }
    getch();
}

void rc()
{    clrscr();
	int m[100][100] , a[100], i , j , c ,  r ;
cout<<"This Program is on the right corner of the matrix.\n";
	cout<<"Enter Number of Rows: \n";	cin>>r;
	cout<<"Enter Number of Columns: \n";	cin>>c;
cout<<"Enter Elements: \n";
	    for(i = 0 ; i < r ; i++ )
	    {	for(j = 0 ; j < c ; j ++)
		    cin>>m[i][j];
	    }    cout<<"The Matrix is as follows: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		    cout<<m[i][j]<<"\t";
		cout<<"\n";
	    } cout<<"The right corner of the matrix is: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++ )
		{   if(i<j)
		       cout<<m[i][j];
		    cout<<"\t";
		}  cout<<"\n";
	    }
   getch();
}
void ult()
{
    clrscr();
	int m[100][100] , a[100], i , j , c , k = 0 , r ;
cout<<"This Program is on the upper left side triangle of the matrix.\n";
	cout<<"Enter Number of Rows: \n";	cin>>r;
	cout<<"Enter Number of Columns: \n";	cin>>c;
cout<<"Enter Elements: \n";
	    for(i = 0 ; i < r ; i++ )
	    {	for(j = 0 ; j < c ; j ++)
		    cin>>m[i][j];
	    }cout<<"The Matrix is as follows: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		    cout<<m[i][j]<<"\t";
		cout<<"\n";
	    }cout<<"The upper left triangle of the matrix is:\n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++ )
		   if(i<=j)
		       cout<<m[i][j]<<"\t";
		cout<<"\n";
	    }  getch();
}
void mtrxinarray()
{    clrscr();
	int m[100][100] , a[100], i , j , c , k = 0 , r ;
cout<<"This Program is to fix the elements of the matrix in the array.\n";
	cout<<"Enter Number of Rows: \n";	cin>>r;
	cout<<"Enter Number of Columns: \n";	cin>>c;
cout<<"Enter Elements: \n";
	    for(i = 0 ; i < r ; i++ )
	    {	for(j = 0 ; j < c ; j ++)
		    cin>>m[i][j];
	    }    cout<<"The Matrix is as follows: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		    cout<<m[i][j]<<"\t";
		cout<<"\n";
	    } cout<<"The array is as follows: ";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++ )
		   a[k++] = m[i][j];
	    }   for(k = 0 ; k < (r*c) ; k++ )
		    cout<<a[k]<<"  ";
    getch();
}
void avele()
{    clrscr();
	int m[100][100] , sum = 0, avg , i , j , c , r ;
cout<<"This Program is to find the average of the elements in the matrix\n";
	cout<<"Enter Number of Rows: \n";	cin>>r;
	cout<<"Enter Number of Columns: \n";	cin>>c;
cout<<"Enter Elements: \n";
	    for(i = 0 ; i < r ; i++ )
	    {	for(j = 0 ; j < c ; j ++)
		    cin>>m[i][j];
	    }    cout<<"The Matrix is as follows: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		    cout<<m[i][j]<<"\t";
		cout<<"\n";
	    }
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		   sum  = sum + m[i][j];
    }	avg = sum / (r * c);
cout<<"The average of the Elements in the matrix is: "<<avg;
  getch();
}
void addele()
{    clrscr();
	int m[100][100] , sum = 0 , i , j , c , r ;
cout<<"This Program is to add the elements in the matrix\n";
	cout<<"Enter Number of Rows: \n";	cin>>r;
	cout<<"Enter Number of Columns: \n";	cin>>c;
cout<<"Enter Elements: \n";
	    for(i = 0 ; i < r ; i++ )
	    {	for(j = 0 ; j < c ; j ++)
		    cin>>m[i][j];
	    }
	cout<<"The Matrix is as follows: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		    cout<<m[i][j]<<"\t";
		cout<<"\n";
	    }
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		   sum  = sum + m[i][j];
    }    cout<<"The Sum of the Elements in the matrix is: "<<sum;
    getch();
}
void delrow()
{
    clrscr();
       int p , r, n  , c , i , j , m[100][100];
	  cout<<"This Program is on Elimination of row in Matrix. \n";
	  cout<<"Enter No. of Rows: ";
	  cin>>r;
	  cout<<"Enter No. of Columns: ";
	  cin>>c;
	  cout<<"Enter Elements: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cin>>m[i][j];
	  }
	  cout<<"The Entered Matrix is: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cout<<m[i][j]<<"\t" ;
	      cout<<"\n";
	  }
	  cout<<"Enter Row No. Which you do not want: ";
	  cin>>n;
	  n-=1;
	  cout<<"The Matrix After Change is as follows: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
	      {	 if(i!=n)
		    cout<<m[i][j]<<"\t";
		 else
		    cout<<"\t";
	      }
	      cout<<"\n";
	  }


    getch();
}

void transpose()
{
    clrscr();
       int r , c , i , j , m[100][100],m2[100][100];
	  cout<<"This Program is on The Transpose Of Matrix\n";
	  cout<<"Enter No. of Rows: ";
	  cin>>r;
	  cout<<"Enter No. of Columns: ";
	  cin>>c;
	  cout<<"Enter Elements: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cin>>m[i][j];
	  }
	  cout<<"The Matrix entered is: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cout<<m[i][j]<<" ";
	      cout<<"\n";
	  }
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
	      {
		    m2[i][j] = m[j][i];
	      }
	  }
	  cout<<"The Matrix after Transposition is: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cout<<m2[i][j]<<" ";
	      cout<<"\n";
	  }
    getch();
}

void allcorners()
{
    clrscr();
	int m[100][100], i, p , j , c , k = 0 , r ;

	cout<<"This Program is on the corners of the matrix.\n";
	cout<<"Enter Number of Rows: \n";
	cin>>r;
	cout<<"Enter Number of Columns: \n";
	cin>>c;

	p =r - 1;
	cout<<"Enter Elements: \n";
	    for(i = 0 ; i < r ; i++ )
	    {	for(j = 0 ; j < c ; j ++)
		    cin>>m[i][j];
	    }
	cout<<"The Matrix is as follows: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		    cout<<m[i][j]<<"\t";
		cout<<"\n";
	    }
	cout<<"The corners of the matrix are: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++ )
		{   if((i==j && (i==0 || j==p)) || i == j - p || j == i - p )
		       cout<<m[i][j];
		    cout<<"\t";
		}
		cout<<"\n";
	    }

    getch();
}




void rd()
{
    clrscr();
	int m[100][100] , a[100],p , q ,i ,  j , c , r ;

	cout<<"This Program is on the right diagonal of the matrix.\n";
	cout<<"Enter Number of Rows: \n";
	cin>>r;
	cout<<"Enter Number of Columns: \n";
	cin>>c;
	p = r-1;
	q = c-1;
	cout<<"Enter Elements: \n";
	    for(i = 0 ; i < r ; i++ )
	    {	for(j = 0 ; j < c ; j ++)
		    cin>>m[i][j];
	    }
	cout<<"The Matrix is as follows: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		    cout<<m[i][j]<<"\t";
		cout<<"\n";
	    }
	cout<<"The right diagonal of the matrix is: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++ )
		{   if(i+j == p)
			cout<<m[i][j];
		    cout<<"\t";
		}
		cout<<"\n";
	    }

    getch();
}
void ld()
{
    clrscr();
	int m[100][100] , a[100], i , j , c , k = 0 , r ;

	cout<<"This Program is on the left diagonal of the matrix.\n";
	cout<<"Enter Number of Rows: \n";
	cin>>r;
	cout<<"Enter Number of Columns: \n";
	cin>>c;

	cout<<"Enter Elements: \n";
	    for(i = 0 ; i < r ; i++ )
	    {	for(j = 0 ; j < c ; j ++)
		    cin>>m[i][j];
	    }
	cout<<"The Matrix is as follows: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		    cout<<m[i][j]<<"\t";
		cout<<"\n";
	    }
	cout<<"The left diagonal of the matrix is: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++ )
		{   if(i==j)
		       cout<<m[i][j];
		    cout<<"\t";
		}
		cout<<"\n";
	    }

    getch();
}
void bothd()
{
    clrscr();
	int m[100][100] , a[100],s = 0 ,p , q ,i ,  j , c , r ;

	cout<<"This Program is on the diagonals of the matrix\n";
	cout<<"Enter Number of Rows: \n";
	cin>>r;
	cout<<"Enter Number of Columns: \n";
	cin>>c;
	p = r-1;
	q = c-1;
	cout<<"Enter Elements: \n";
	    for(i = 0 ; i < r ; i++ )
	    {	for(j = 0 ; j < c ; j ++)
		    cin>>m[i][j];
	    }
	cout<<"The Matrix is as follows: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++)
		    cout<<m[i][j]<<"\t";
		cout<<"\n";
	    }
	cout<<"The right diagonal of the matrix is: \n";
	    for(i = 0 ; i < r ; i++ )
	    {   for(j = 0 ; j < c ; j ++ )
		{   if((i+j == p) || i==j)
		       cout<<m[i][j];
		   cout<<"\t";
		}
		cout<<"\n";
	    }

    getch();
}

void subtractele()
{
    clrscr();
       int r , c , i , j , m[100][100] ,k[100][100],l[100][100];
	  cout<<"This Program is on the Subtraction\n";
	  cout<<"of Elements in Matrix:\n";
	  cout<<"Enter No. Of Rows: ";
	  cin>>r;
	  cout<<"Enter No. of Columns: ";
	  cin>>c;
	  cout<<"Enter Elements for first\n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cin>>m[i][j];
	  }
	  cout<<"Enter Elements Second\n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cin>>k[i][j];
	  }
	  cout<<"First \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		    cout<<m[i][j]<<"  ";

	      cout<<"\n";
	  }
	  cout<<"Second \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		    cout<<k[i][j]<<"  ";
		cout<<"\n";
	  }
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
	      {
		  l[i][j] = m[i][j] -  k[i][j];
		  cout<<l[i][j]<<"  ";
	      }
	      cout<<"\n";
	  }
	  cout<<"The Matrix After Subtraction is:\n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		  cout<<l[i][j]<<"  ";
	      cout<<"\n";
	  }
    getch();
}

void delcorners()
{
    clrscr();
       int p ,q , r, n  , c , i , j , m[100][100];
	  cout<<"This Program is on Elimination.\n";
	  cout<<"of Corners of Matrix.\n";
	  cout<<"Enter No. of Rows: ";
	  cin>>r;
	  cout<<"Enter No. of Columns: ";
	  cin>>c;
	  cout<<"Enter Elements: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cin>>m[i][j];
	  }
	  cout<<"The Entered Matrix is: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cout<<m[i][j]<<"\t" ;
	      cout<<"\n";
	  }
	  p = r-1;
	  q = c-1;
	  cout<<"The Matrix is as Follows:\n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
	      {
		 if((j!=0 && j!=q) || (i!=0 && i!=p))
		    cout<<m[i][j]<<"\t";
		 else
		    cout<<"\t";
	      }
	      cout<<"\n";
	  }


    getch();
}
void centreele()
{
    clrscr();
       int p ,q , r, n  , c , i , j , m[100][100];
	  cout<<"This Program is To Find the Centre\n";
	  cout<<"Element of Square Matrix.\n";
	  cout<<"Enter No. of Rows: ";
	  cin>>r;
	  cout<<"Enter No. of Columns: ";
	  cin>>c;
	  cout<<"Enter Elements: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cin>>m[i][j];
	  }
	  cout<<"The Entered Matrix is: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cout<<m[i][j]<<"\t" ;
	      cout<<"\n";
	  }
	  p = r-1;
	  q = c-1;
	  cout<<"The Center Element of Square Matrix is :\n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
	      {
		 if((j!=0 && j!=q) || (i!=0 && i!=p))
		 {   if(i==j)
		       cout<<m[i][j]<<"\t";
		     else
		      cout<<"\t";
		 }
		 else
		    cout<<"\t";
	      }
	      cout<<"\n";
	  }


    getch();
}
void border()
{
    clrscr();
       int p ,q , r, n  , c , i , j , m[100][100];
	  cout<<"This Program is on Border of Matrix.\n";
	  cout<<"Enter No. of Rows: ";
	  cin>>r;
	  cout<<"Enter No. of Columns: ";
	  cin>>c;
	  cout<<"Enter Elements: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cin>>m[i][j];
	  }
	  cout<<"The Entered Matrix is: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cout<<m[i][j]<<"\t" ;
	      cout<<"\n";
	  }
	  p = r-1;
	  q = c-1;
	  cout<<"The Border of Matrix is :\n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
	      {
		 if((j==0 || j==q) || (i==0 || i==p))
		    cout<<m[i][j]<<"\t";
		 else
		    cout<<"\t";
	      }
	      cout<<"\n";
	  }
   getch();
}
void delrandc()
{
    clrscr();
       int p , r,r1 ,c1 , c , i , j , m[100][100];
	  cout<<"This Program is on Elimination of Row and column\n";
	  cout<<"& Column in a Matrix. \n";
	  cout<<"Enter No. of Rows: ";
	  cin>>r;
	  cout<<"Enter No. of Columns: ";
	  cin>>c;
	  cout<<"Enter Elements: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cin>>m[i][j];
	  }
	  cout<<"The Entered Matrix is: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cout<<m[i][j]<<"\t" ;
	      cout<<"\n";
	  }
	  cout<<"Enter Row No. Which you do not want: ";
	  cin>>r1;
	  r1-=1;
	  cout<<"Enter Column No. Which you do not want: ";
	  cin>>c1;
	  c1-=1;
	  cout<<"The Matrix After Change is as follows: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
	      {	 if(j!=c1 && i!=r1)
		    cout<<m[i][j]<<"\t";
		 else
		    cout<<"\t";
	      }
	      cout<<"\n";
	  }
    getch();
}
void printrandc()
{
    clrscr();
       int p , c1, r1, r, n  , c , i , j , m[100][100];
	  cout<<"This Program is to Print a Row &\n";
	  cout<<"column of Matrix. \n";
	  cout<<"Enter No. of Rows: ";
	  cin>>r;
	  cout<<"Enter No. of Columns: ";
	  cin>>c;
	  cout<<"Enter Elements: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cin>>m[i][j];
	  }
	  cout<<"The Entered Matrix is: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cout<<m[i][j]<<"\t" ;
	      cout<<"\n";
	  }
	  cout<<"Enter Column No. Which you Want: ";
	  cin>>c1;
	  c1-=1;
	  cout<<"Enter Row No. Which you Want: ";
	  cin>>r1;
	  r1-=1;
	  cout<<"The Column is  as Follows : \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
	      {	 if(i==r1 || j==c1)
		    cout<<m[i][j]<<"\t";
		 else
		    cout<<"\t";
	      }
	      cout<<"\n";
	  }
   getch();
}
void printcolumn()
{
    clrscr();
       int p , c1, r, n  , c , i , j , m[100][100];
	  cout<<"This Program is to Print a Column of Matrix.\n";
	  cout<<"Enter No. of Rows: ";
	  cin>>r;
	  cout<<"Enter No. of Columns: ";
	  cin>>c;
	  cout<<"Enter Elements: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cin>>m[i][j];
	  }
	  cout<<"The Entered Matrix is: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cout<<m[i][j]<<"\t" ;
	      cout<<"\n";
	  }
	  cout<<"Enter Column No. Which you Want: ";
	  cin>>c1;
	  c1-=1;
	  cout<<"The Column is  as Follows : \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
	      {	 if(j==c1)
		    cout<<m[i][j]<<"\t";
		 else
		    cout<<"\t";
	      }
	      cout<<"\n";
	  }

    getch();
}

void printrow()
{
    clrscr();
       int p , r1, r, n  , c , i , j , m[100][100];
	  cout<<"This Program is to Print a Row of Matrix.\n";
	  cout<<"Enter No. of Rows: ";
	  cin>>r;
	  cout<<"Enter No. of Columns: ";
	  cin>>c;
	  cout<<"Enter Elements: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cin>>m[i][j];
	  }
	  cout<<"The Entered Matrix is: \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
		     cout<<m[i][j]<<"\t" ;
	      cout<<"\n";
	  }
	  cout<<"Enter Row No. Which you Want: ";
	  cin>>r1;
	  r1-=1;
	  cout<<"The Row is  as Follows : \n";
	  for(i = 0 ; i < r ; i++)
	  {
	      for(j = 0 ; j < c ; j++ )
	      {	 if(i==r1)
		    cout<<m[i][j]<<"\t";
		 else
		    cout<<"\t";
	      }
	      cout<<"\n";
	  }

    getch();
}
//By Prerit Ameta Class Xi Science


void add();
void lcm();
void multiply();
void si();
void subtract();
void division();
void square();
void cube();
void avg();
void ci();
void arect();
void atri();
void sqroot();
void cuberoot();
void power();
void acircle();
void circ();
void prect();
void ptri();
void greater();
void collection();
void collectionani()
{
   clrscr();
     gotoxy(21,7);
	box(1,1,78,25,1,0);
	delay(500);

    int i , j;
    gotoxy(3,3);
	cprintf("≤≤≤≤≤≤");  gotoxy(3,4);
	cprintf("≤≤    ");  gotoxy(3,5);
	cprintf("≤≤    ");  gotoxy(3,6);
	cprintf("≤≤    ");  gotoxy(3,7);
	cprintf("≤≤≤≤≤≤ollection");

      for(i = 3 ,j = 2 ; i<62 ; i++, j++)
	  {
		textcolor(i-14);
		gotoxy(i,3);
		cprintf("≤≤≤≤≤≤");
		gotoxy(j,3);
		cprintf(" ");
		delay(5);
		gotoxy(i,4);
		cprintf("≤≤");
		gotoxy(j,4);
		cprintf(" ");
		delay(5);
		gotoxy(i,5);
		cprintf("≤≤");
		gotoxy(j,5);
		cprintf(" ");
	  }

	for(i = 3 ,j = 2 ; i<62 ; i++, j++)
	  {
		textcolor(i-14);
		gotoxy(i,6);
		cprintf("≤≤");
		gotoxy(j,6);
		cprintf(" ");
		delay(5);
		gotoxy(i,7);
		cprintf("≤≤≤≤≤≤ollection");
		gotoxy(j,7);
		cprintf(" ");
		delay(5);
	  }
}
void collection()
{
    int m=100, ch;
     while(1)
     {
	clrscr();

	box(1,1,78,25,2,0);
	delay(1000);
	collectionani();

	box(3,3,6,24,1,0);
	textcolor(6);
     int i , j;
     char t[5];
	gotoxy(4,4);
	cprintf("1. ∫ Add Two Numbers."); 	       delay(m);
	gotoxy(4,5);
	cprintf("2. ∫ Subtract two Numbers.");       delay(m);
	gotoxy(4,6);
	cprintf("3. ∫ Multiply Two Numbers.");  delay(m);
	gotoxy(4,7);
	cprintf("4. ∫ Division Of Two Numbers."); delay(m);
	gotoxy(4,8);
	cprintf("5. ∫ Greater in Numbers.");    delay(m);
	gotoxy(4,9);
	cprintf("6. ∫ Average of Numbers.");   delay(m);
	gotoxy(4,10);
	cprintf("7. ∫ Simple Interest.");     delay(m);
	gotoxy(4,11);
	cprintf("8. ∫ Perimeter Of Rectangle.");      delay(m);
	gotoxy(4,12);
	cprintf("9. ∫ Perimeter Of Circle.");             delay(m);
	gotoxy(4,13);
	cprintf("10.∫ Perimeter of Triangle.");        delay(m);
	gotoxy(4,14);
	cprintf("11.∫ Area of Circle."); delay(m);
	gotoxy(4,15);
	cprintf("12.∫ Area of Rectangle.");   delay(m);
	gotoxy(4,16);
	cprintf("13.∫ Square root a Number.");delay(m);
	gotoxy(4,17);
	cprintf("14.∫ Cube Root of a Number."); delay(m);
	gotoxy(4,18);
	cprintf("15.∫ Compound Interest.");    delay(m);
	gotoxy(4,19);
	cprintf("16.∫ LCM .");delay(m);
	gotoxy(4,20);
	cprintf("17.∫ Power.");  delay(m);
	gotoxy(4,21);
	cprintf("18.∫ Square.");  delay(m);
	gotoxy(4,22);
	cprintf("19.∫ Cube.");   delay(m);
	gotoxy(4,23);
	cprintf("20.∫ Area of Triangle.");           delay(m);

	textcolor(3);

      gotoxy(60,24);
	cprintf("Press 0 To Exit.");

      gotoxy(50,13);
	cprintf("Enter Your Desired Choice");
      gotoxy(62,14);
	 cin>>t;
	 ch=atoi(t);     //convert if any character to integer
	 textcolor(4);
	    switch(ch)
	    {
		case 1: add();	             break;
		case 3: multiply();    	     break;
		case 2: subtract();          break;
		case 4: division();          break;
		case 5: greater();     	     break;
		case 6: avg();     	     break;
		case 7: si();         	     break;
		case 8: prect();             break;
		case 9: circ();     	     break;
		case 10: ptri();	     break;
		case 11: acircle(); 	     break;
		case 12: arect();  	     break;
		case 13: sqroot();	     break;
		case 14: cuberoot();	     break;
		case 15: ci();    	     break;
		case 16: lcm();       	     break;
		case 17: power();	     break;
		case 18: square();  	     break;
		case 19: cube();	     break;
		case 20: atri(); 	     break;
		case 0 : return;
		default : gotoxy(52,16);cout<<"Invalid Choice Entered!";
				 getch();
	     }
     }

}
void greater()
{
   clrscr ();

     int a,b,c ;

	  gotoxy (15,10);

	  textcolor(5);

	  cprintf("The Program is to find the greatest of the two Number\n");

	  textcolor(12);

	  gotoxy (20,14);

	  cprintf("Enter First Number and Enter Second Number\n");

	  gotoxy (38,16);

	  cin>>a;

	  gotoxy (38,17);

	  cin>>b;

	  c = a > b;

	  gotoxy (25,19);

	  (c==1)?cout<<"First Number is Greater: "<<a:cout<<"Second Number is Greater: "<<b;

	  getch();
}
void ptri()
{
clrscr();
	float a, b, c, d ;
	gotoxy (18,10);

	cout<<"This Program is to Find The Perimeter of a Triangle.";

	cout<<"\n\nEnter the Length of First Side : ";

	cin>>a;

	cout<<"\n\nEnter the Length of Second Side : ";

	cin>>b;

	cout<<"\n\nEnter the Length of Third Side : ";

	cin>>c;

	d = (a+b+c);

	cout<<"\n\nThe Perimeter of the Triangle is : "<<d;

   getch();
}
void prect()
{
clrscr();
	float l, b, p ;
	gotoxy (18,10);

	cout<<"This Program is to Find The Perimeter of a Rectangle.";

	cout<<"\n\nEnter the Length : ";

	cin>>l;

	cout<<"\n\nEnter the Breadth : ";

	cin>>b;

	p = 2 * (l + b);

	cout<<"\n\nThe Perimeter of the Triangle is : "<<p;

   getch();
}
void circ()
{
clrscr();
	float r, b ;
	gotoxy (18,10);

	cout<<"This Program is to Find The Circumference of a Circle.";

	cout<<"\n\nEnter the Radius : ";

	cin>>r;

	b = 2 * (3.14 * r );

	cout<<"\n\nThe Circumference of the Circle is : "<<b;

   getch();
}
void acircle()
{
clrscr();
	float r, ar ;
	gotoxy (18,10);

	cout<<"This Program is to Find The Area of a Circle.";

	cout<<"\n\nEnter the Radius : ";

	cin>>r;

	ar = 3.14*(r);

	cout<<"\nThe Area of the Circle is : "<<ar;

   getch();
}
void power()
{
clrscr();
	float a , p ,c ;
	gotoxy (18,10);

	cout<<"This Program Is to Find The n(th) Power of a Number.";

	cout<<"\n\nEnter a Number : ";

	cin>>a;

	cout<<"\n\nEnter The Power in FLOAT form : ";

	cin>>p;

	c =  pow(a,p) ;

	cout<<"\n\nThe Number "<<a;

	cout<<" with Power "<<p;

	cout<<" is: "<<c;

   getch();
}
void cuberoot()
{
clrscr();
	float a , b;
	gotoxy (18,10);

	cout<<"This Program Is to Find The Cube Root of a Number.";

	cout<<"\n\nEnter a Number : ";

	cin>>a;

	b =  pow(a,1/3.0) ;

	cout<<"\nThe Cube Root of "<<a;

	cout<<" is : "<<b;

   getch();
}
void sqroot()
{
clrscr();
	float a , b;
	gotoxy (18,10);

	cout<<"This Program Is to Find The Square Root of a Number.";

	cout<<"\n\nEnter a Number : ";

	cin>>a;

	b =  sqrt (a) ;

	cout<<"\nThe Square Root of "<<a;

	cout<<" is : "<<b;

   getch();
}
void atri()
{
clrscr();
	float b , h , ar ;
	gotoxy (18,10);

	cout<<"This Program is to Find The Area of a Triangle.";

	cout<<"\n\nEnter the Base : ";

	cin>>b;

	cout<<"\nEnter the Height : ";

	cin>>h;

	ar =  1/2.0*(b*h);

	cout<<"\nThe Area of the Triangle is : "<<ar;

   getch();
}
void arect()
{
clrscr();
	float b , l , ar ;
	gotoxy (18,10);

	cout<<"This Program is to Find The Area of a Rectangle.";

	cout<<"\n\nEnter the Breadth : ";

	cin>>b;

	cout<<"\nEnter the Length : ";

	cin>>l;

	ar = (b*l);

	cout<<"\nThe Area of the Triangle is : "<<ar;

   getch();
}



void ci()
{
clrscr();
	float p, r, t, ci;
	gotoxy (18,10);

	cout<<"This Program Is to Find The Compound Interest.";

	cout<<"\n\nEnter the Principle : ";

	cin>>p;

	cout<<"\nEnter the Rate : ";

	cin>>r;

	cout<<"\nEnter the Time (in Years) : ";

	cin>>t;

	ci =  p * pow(1+r/100,t) - p;

	cout<<"\nThe Compound Interest of Priciple : "<<p;

	cout<<"  Rate : "<<r;

	cout<<"  Time : "<<t;

	cout<<"  is = "<<ci;

   getch();
}


void avg()
{
	clrscr ();

	float a,b,c;

	gotoxy(20,10);

	cout<<"This Program is to Find the Average of Two Numbers.";

	cout<<"\n\nEnter First Number: ";

	cin>>a;

	cout<<"\nEnter Second Number: ";

	cin>>b;

	c = (a + b) / 2;

	cout <<"\nFirst number = "<<a ;

	cout <<"\nSecond number = "<<b ;

	cout <<"\n\nThe average of two numbers is = "<<c ;

	getch();

}
void cube()
{
	clrscr ();

	gotoxy (20,10);

	int a,c;

	cout<<"This Program is to Find The Cube of a Number";

	cout<<"\n\nEnter a Number: ";

	cin>>a;

	c = a*a*a;

	cout <<"\n\nThe Cube of "<<a;

	cout<<" is = "<<c ;

   getch();

}
void square()
{
	clrscr ();

	gotoxy (20,10);

	int a,c;

	cout<<"This Program is to Find The Square of a Number.";

	cout<<"\n\nEnter a Number: ";

	cin>>a;

	c = a*a;

	cout <<"\n\nThe Square of "<<a;

	cout<<" is = "<<c ;

   getch();

}
void division()
{
	clrscr ();

	int a,b,c,d;

	gotoxy(20,10);

	cout<<"This program is of division of two numbers";

	cout<<"\n\nEnter first number.";

	cin>>a;

	cout<<"\nEnter second number.";

	cin>>b;

	c = a / b;

	d = a % b;

	cout <<"\n"<<a ;

	cout <<" / "<<b ;

	cout <<"\n\nThe Quotient is = "<<c ;

	cout <<"\n\nThe Remainder is = "<<d ;

   getch();

}
void subtract()
{
	clrscr ();

	int a,b,c;

	gotoxy(20,10);

	cout<<"This program is of Subtraction of two numbers";

	cout<<"\n\nEnter first number.";

	cin>>a;

	cout<<"\nEnter second number.";

	cin>>b;

	c = (a - b);

	cout <<"\nThe Difference of two numbers: ";

	cout <<""<<a ;

	cout <<"-"<<b ;

	cout<<" = "<<c;

   getch();

}
void si()
{
clrscr();
	int p, r, t, si;
	gotoxy (18,10);
	cout<<"This Program Is to Find The Simple Interest.";
	cout<<"\n\nEnter the Principle : ";
	cin>>p;
	cout<<"\nEnter the Rate : ";
cin>>r ;
cout<<"\nEnter the Time (in Years) : ";
cin>>t;
si = p*r*t/100;
cout<<"\nThe Simple Interest of Priciple : "<<p;
cout<<"  Rate : "<<r;
cout<<"  Time : "<<t;
cout<<"  is = "<<si;
	 getch();
}

void multiply()
{
	clrscr ();
int a,b,c;
gotoxy(20,10);
cout<<"This program is of Multiplication of two numbers";
cout<<"\n\nEnter first number:";
cin>>a;
cout<<"\nEnter second number:";
cin>>b;
c = (a * b);
cout <<"\nThe Product of two numbers: ";
cout <<""<<a ;
cout <<"*"<<b ;
cout<<" = "<<c;
    getch();
                                                  
}

void add()
{
	clrscr ();
int a,b,c;
gotoxy(20,10);
cout<<"This program is of Addition of two numbers";
cout<<"\n\nEnter first number:";
cin>>a;
cout<<"\nEnter second number:";
cin>>b;
c = (a + b);
cout <<"\nThe sum of two numbers: ";
cout <<""<<a ;
cout <<"+"<<b ;
       	cout<<" = "<<c;
    getch();

}

void lcm()
{
    clrscr();
	int c = 0 ,a, b , n ;
                  cout<<"This Program is To find the LCM of two numbers.\n";
	    cout<<"Enter Two Numbers: ";
	    cin>>a>>b;
    for(int i = 2  ;  i < (a*b)  ;  i++ )
	    {	if(i%a == 0  &&  i%b == 0)
		{           c = 1;
			break;
		}
	    }
		   cout<<"The LCM of Two numbers is:";
		if(c)
		    cout<<i;
		else
		    cout<<a*b;
    getch();
}



void battery();
void pbar6();
void pbar5();
void pbar4();
void pbar3();
void pbar1();
void pbar2();
void loads();


void loads()
{
    closegraph();
	 battery();
	 pbar6();
	 pbar5();
	 pbar4();
	 pbar3();
	 pbar1();
	 pbar2();


}



void pbar1()
{
   int i,j,p;
      clrscr();
	     box(8,8,69,12,1,0);
	 gotoxy(60,11);
	     textcolor(6+BLINK);
	     cprintf("Loading...");
	 gotoxy(10,10);
	  for(i = 10,j=70,p=13 ; i<40 ; i++, j--,p+=3)
	  {
		textcolor(i-14);
		gotoxy(i,10);
		cprintf("≤");
		gotoxy(j-2,10);
		cprintf("≤");
		gotoxy(38,9);
		cout<<p<<"%";
		delay(75);
	   }
      getch();
}

void pbar2()
{
   textmode(C80);
   int i,j,p;
      clrscr();
	     box(8,8,69,12,1,0);
	 gotoxy(60,11);
	     textcolor(6+BLINK);
	     cprintf("Loading...");
	 gotoxy(10,10);
	   textcolor(3);
	   for(i=12 ; i<71 ; i++)
	     cprintf("≤");
	   for(i=12 ,p=-12;i<69 ; i++,p+=2)
	   {
	      gotoxy(i,10);
		 textcolor(11);
		     cprintf("≤");
	      gotoxy(i-1,10);
		 textcolor(3);
		     cprintf("≤");
	      gotoxy(38,9);
		     if(p>0)
		     cout<<p<<"%";
		 delay(50);
	   }
      getch();
}

void pbar3()
{
   textmode(C80);
   int i,j,p;
      clrscr();
	     box(8,8,69,12,1,0);
	 gotoxy(60,11);
	     textcolor(6+BLINK);
	     cprintf("Loading...");
	 gotoxy(10,10);
	   textcolor(3);
	   for(i=12 ; i<71 ; i++)
	     cprintf("≤");
	   for(i=10 ,p=-16;i<69 ; i++,p+=2)
	   {
	      gotoxy(i,10);
		 textcolor(11);
		     cprintf("≤");
	      gotoxy(38,9);
		     if(p>0)
		     cout<<p<<"%";
		 delay(50);
	   }
      getch();

}

void pbar4()
{
   textmode(C80);
   int i,j,p,k,l,c;
      clrscr();
	     box(8,8,69,12,1,0);
	 gotoxy(60,11);
	     textcolor(6+BLINK);
	     cprintf("Loading...");
	 gotoxy(10,10);
	   textcolor(3);
	   for(i=12 ; i<71 ; i++)
	     cprintf("≤");
	   for(j=10,l=12 , k=1 , p=-12 ; l<41 ; p+=4 , k++,j++,l++)
	   {
	      gotoxy(j,10);
		 textcolor(3);
		     cprintf("≤");
	      gotoxy(j+k,10);
		 textcolor(11);
		     cprintf("≤");
	      gotoxy(j-1,10);
		 textcolor(3);
		     cprintf("≤");
	      gotoxy(38,9);
		     if(p>0)
		     cout<<p<<"%";
		 delay(100);
	   }
      getch();

}
void pbar5()
{
      textmode(C80);
   int i,j,p,k,l,c;
      clrscr();
	     box(8,8,69,12,1,0);
	 gotoxy(60,11);
	     textcolor(6+BLINK);
	     cprintf("Loading...");
	 gotoxy(10,10);
	   textcolor(3);
	   for(i=12 ; i<71 ; i++)
	     cprintf("≤");
	   for(j=10, c=0, l=12, k=1, p=-14 ; l<70 ; p+=2, k+=c, c++, j++, l++)
	   {
	     if(j<20)
	     {
	      gotoxy(j+k,10);
		 textcolor(9);
		     cprintf("≤");
	      gotoxy(j-1,10);
		 textcolor(3);
		     cprintf("≤");
	      }
	      else
	      {
		gotoxy(j-1,10);
		 textcolor(3);
		     cprintf("≤");
	      }
	      gotoxy(38,9);
		     if(p>0)
		     cout<<p<<"%";
		 delay(100);
	   }
      getch();

}
void pbar6()
{
   textmode(C80);
   int i,j,p,k,l,c;
      clrscr();
	     box(8,8,68,12,1,0);
	 gotoxy(58,11);
	     textcolor(6+BLINK);
	     cprintf("Loading...");
	   for(j=10, c=0, l=12, k=1, p=-14 ; l<70 ; p+=2, k+=c, c++, j++, l++)
	   {
	     if(j<20)
	     {
	      gotoxy(j+k,10);
		 textcolor(9);
		     cprintf("≤");
	      gotoxy(j,10);
		 textcolor(3);
		     cprintf("≤");
	      }
	      else
	      {
		gotoxy(j,10);
		 textcolor(3);
		     cprintf("≤");
	      }
	      gotoxy(38,9);
		     if(p>0)
		     cout<<p<<"%";
		 delay(100);
	   }
      getch();

}

void battery()
{
   int x=26, y;
      textcolor(9);			     gotoxy(x,9);
      cprintf("    ≤≤≤≤≤   ");         	     gotoxy(x,10);
      cprintf("≤≤≤≤≤   ≤≤≤≤≤ ");             gotoxy(x,11);
      cprintf("≤≤         ≤≤");              gotoxy(x,12);
      cprintf("≤≤         ≤≤");              gotoxy(x,13);
      cprintf("≤≤         ≤≤");              gotoxy(x,14);
      cprintf("≤≤         ≤≤");              gotoxy(x,15);
      cprintf("≤≤         ≤≤");              gotoxy(x,16);
      cprintf("≤≤≤≤≤≤≤≤≤≤≤≤≤");

   int i,j,k,p;
	textcolor(12);
      for(i=28, p=20, j =15, k=1; k<6 ;k++, j--,p+=20)
      {

	gotoxy(i,j);
	    cprintf("≤≤≤≤≤≤≤≤≤");
	       delay(500);
	gotoxy(i+3,13);
	    cout<<p<<"%";
      }
	gotoxy(31,10);
	    cprintf("≤≤≤");
      getch();

}
/*72 u
80    d
77     r
75      l
*/

void coordinate()
{
    startgraph();
    int xx,yy,u,d,l,r;
    char a[10],b[10];
	   int x,y;
		 char ch;
	x=getmaxx()/2;
	y=getmaxy()/2;

       outtextxy(x,y,"*");
	   while(1)
	   {
		ch=getch();
		 settextstyle(6,0,2);
		 outtextxy(10,10,"        ");

		cleardevice();
//		x=getx();
  //		y=gety();
		switch(ch)
		{
		    case  72:  y-- ;  //jkhl ljkl l/dn
				 break;
		    case  80: y++ ;  //up
				 break;
		    case  75:  x-- ;
				 break;
		    case  77:  x++;
				 break;

		    case  'q':
		    case  'Q':  return;    //return to homepage
		}

	       outtextxy(x,y,"*");
	       itoa(x,a,10);
	       itoa(y,b,10);
	       outtextxy(10,10,a);
	       outtextxy(50,10," , ");
	       outtextxy(75,10,b);
	       outtextxy(460,450,"Press Q To Quit");
	   }
      closegraph();
}













//By Prerit Ameta Class XI Science.

int search(int p[] , int no);
void sortasc(int p[] , int no);
void sortdes(int p[] , int no);
void print(int a[],int n);
void input(int a[],int n);
void dele(int a[],int &n);
void insert(int a[],int &n);
void merge();
void arrayani();
void array();

void arrayani()
{
       delay(500);
       gotoxy(21,3);
	cprintf("   ≤ ");   gotoxy(21,4);
	cprintf("  ≤ ≤");   gotoxy(21,5);
	cprintf(" ≤≤ ≤≤");  gotoxy(21,6);
	cprintf(" ≤≤≤≤≤");  gotoxy(21,7);
	cprintf("≤     ≤rray");
	for(int i = 21 ,j = 21 ; i<62 ; i++, j++)
	  {

		textcolor(i-14);
		gotoxy(i,3);
		cprintf("   ≤ ");
		gotoxy(j,3);
		cprintf("  ");
		delay(10);
		gotoxy(i,4);
		cprintf("  ≤ ≤");
		gotoxy(j,4);
		cprintf(" ");
		delay(5);
		gotoxy(i,5);
		cprintf(" ≤≤ ≤≤");
		gotoxy(j,5);
		cprintf(" ");
	  }

	for(i = 21 ,j = 20 ; i<62 ; i++, j++)
	  {
		textcolor(i-14);
		gotoxy(i,6);
		cprintf(" ≤≤≤≤≤");
		gotoxy(j,6);
		cprintf(" ");
		delay(5);
		gotoxy(i,7);
		cprintf("≤     ≤rray");
		gotoxy(j,7);
		cprintf(" ");
		delay(5);
	  }
}

void array()
{
    clrscr();
     while(1)
     {
       clrscr();
       int ch,p[100], no;
		 box(1,1,78,25,1,0);
		 arrayani();
		 box(3,3,6,24,2,0);
		     delay(500);
	    gotoxy(4,4);
	    gotoxy(4,8);
	cout<<" 1.∫ Search An Element in A Array";gotoxy(4,9); delay(100);
	cout<<" 2.∫ Sort Elements of Array In Ascending Order";   gotoxy(4,10);           delay(100);
	cout<<" 3.∫ Sort Elements of Array In Descending Order";   gotoxy(4,11);   delay(100);
	cout<<" 4.∫ Delete An Element of A Array";        gotoxy(4,12);   delay(100);
	cout<<" 5.∫ Search An Element in A Array";   gotoxy(4,13); delay(100);
	cout<<" 6.∫ Merge Elements of two Arrays";   gotoxy(4,13); delay(100);
	     gotoxy(50,13);
	cout<<"Enter Your Desired Choice";
	     gotoxy(60,24);
	cout<<"Press 0 To Exit.";
	     gotoxy(62,14);
	cin>>ch;
	     textcolor(12);
	     gotoxy(25,16);
		switch(ch)
		{
		    case 1:	cout<<"How Many Elements You Want : ";
				cin>>no; input(p,no);
				if(search(p,no)==0)
				   cout<<"Element Not Found";
				else
				cout<<"Element Found at position : "<<search(p,no); break;
		    case 2: 	cout<<"How Many Elements You Want : ";
				cin>>no; input(p,no);
				sortasc(p,no); print(p,no);break;
		    case 3: 	cout<<"How Many Elements You Want : ";
				cin>>no; input(p,no);
				sortdes(p,no); print(p,no);break;
		    case 4: 	cout<<"How Many Elements You Want : ";
				cin>>no; input(p,no);
				dele(p,no);     print(p,no);break;
		    case 5: 	cout<<"How Many Elements You Want : ";
				cin>>no; input(p,no);
				insert(p,no);  print(p,no);break;
		    case 6:	merge();  break;

		    case 0: return;

	}
	 getch();
     }

}

void input(int a[],int n)
{
   clrscr();
   int i;
   for(i=0;i<n;i++)
    {	cout<<"Enter Elements : ";
	     cin>>a[i];
    }

}

void print(int a[],int n)
{  int i;
   cout<<"Your Operation is As follows : ";
   for(i=0;i<n;i++)
	cout<<a[i]<<"  ";
}

void merge()
{
   clrscr();
  int i,j,k=0,la, lb,a[100],b[100],c[200];
	cout<<"How Many Elements in Array 1 : ";
	cin>>la;
	cout<<" Array 1  \n";
	   for(i=0;i<la;i++)
	   {	cout<<"Enter Elements : ";
		     cin>>a[i];
	   }
	cout<<"How Many Elements in Array 2 ";
	cin>>lb;
	cout<<" Array 2  \n";
	   for(i=0;i<lb;i++)
	   {	cout<<"Enter Elements : ";
		     cin>>b[i];
	   }
	   for(i=0;i<la;i++)
		   c[k++]=a[i];

	   for(j=0;j<lb;j++)
		  c[k++]=b[j];
	cout<<"Element in Array 3 are as follows :";
	   for(i=0;i<k;i++)
		cout<<c[i]<<"  ";

}

void insert(int a[],int &n)
{
   int i,ele,pos;
     cout<<"Enter Element to Be Inserted : ";
     cin>>ele;
     cout<<"Enter Postion : ";
     cin>>pos;
     pos+=1;
     for(i=n;i>pos;i--)
	  a[i]=a[i-1];

     a[pos]=ele;

     n+=1;

}

void dele(int a[],int &n)
{   int i,s,j,ans=0;
    cout<<"Enter Element to Be Deleted : ";
    cin>>s;
  //first search element to delete and find position
   for(i=0;i<n;i++)
      if(a[i]==s)
	{   ans=1; break;  }
   if(ans==1)
   {	cout<<a[i]<<" is present at  "<<i+1<<"  Location\n";
			  //here shifting of element left side
	for(j=i;j<n;j++)
	   a[j]=a[j+1];
	n=n-1;
   }
   else
	cout<<"\nElement is not present in array \n";
}

void sortasc(int a[] , int n)
{
    int i, j,t ;
       for(i = 0 ; i < n ;i++)
       {
	   for(j = 0 ; j< n ; j++)
	   {
	       if(a[i]<a[j])
	       {
		  t = a[i];
		  a[i]=a[j];
		  a[j] = t;
	       }
	   }
       }
}
void sortdes(int a[] , int n)
{
    int i, j,t ;
       for(i = 0 ; i < n ;i++)
       {
	   for(j = 0 ; j< n ; j++)
	   {
	       if(a[i]>a[j])
	       {
		  t = a[i];
		  a[i]=a[j];
		  a[j] = t;
	       }
	   }
       }
}
int search(int a[] , int n)
{
    int e;
    cout<<"Enter Element To Search for:";
    cin>>e;
    for(int i=0 ; i<n ;i++)
	if(a[i]==e)
	   return i+1;

   return 0;
}
















void logslide2();
void securepass(char pass[]);
int login();
void homepage();
void yes();
void no();

void securepass(char pass[])
{
    int i=0;
    char ch;
       do
       {
	  ch=getch();
	  cout<<"**";
	  pass[i]=ch;
	  i++;
       } while(ch!=13);
       pass[--i]='\0';

}

void logslide2()
{
     startgraph();
     setcolor(15);
     details();
	  int x = 300, y = 230;
	setcolor(12);
	  logo();
    void   *buffer;
    unsigned int sizes;
    int ola;
		x=200;	y=130;
		sizes=imagesize(x,y,400,330);
		buffer=malloc(sizes);
		getimage(x,y,400,330,buffer);
	     cleardevice();
	     putimage(81,130,buffer,XOR_PUT);
	     for( ;x>80;x--)
	     {
		cleardevice();
		setcolor(15);
		details();
		putimage(x,130,buffer,XOR_PUT);
		delay(5);
	     }
	  int x1 = 232;
/*	  for( x = 228; x<458 ;x++)
	  {
		cleardevice();
		putimage(81,130,buffer,XOR_PUT);
		bar3d(x1,205,x,225,10,1);
		bar3d(x1,253,x,272,10,1);
		delay(5);
	  }
*/

	  settextstyle(12,0,5);
	  setcolor(12);
	  outtextxy(235,205,"Username : ");
	  outtextxy(235,253,"Password : ");
	  ola = login();
/*	  for( x = 458; x>232 ;x--)
	  {
		cleardevice();
		putimage(81,130,buffer,XOR_PUT);
		bar3d(232,205,x,225,10,1);
		bar3d(232,253,x,272,10,1);
		delay(2);
	  }
*/
	  for(x=81 ;x<200;x++)
	  {
		cleardevice();
		putimage(x,130,buffer,XOR_PUT);
		setcolor(15);
		details();
		delay(5);
	  }

	      if(ola)
	      {
		  onaps2();
		  homepage();
	      }
	      else
	      {
		  exitlogo();
	      }
   closegraph();
}

int login()
{
     setcolor(15);
     details();
     int x = 181, y = 230 ;
	setcolor(12);
	       arc(x,y,0,360,50);
	       arc(x,y,0,360,48);
	       arc(x,y,0,360,46);
	       arc(x,y,0,360,44);
	       arc(x,y,0,360,42);
	       arc(x,y,0,360,40);
    int i,j,check;
     char usr[20],pass[20];
	    gotoxy(41,14);
	    cout<<"_";
	    gotoxy(41,14);
	    cin>>usr;
	    gotoxy(41,17);  cout<<"_";
	    gotoxy(41,17);
	    securepass(pass);

	if(strcmp(usr,"cj")==0 && strcmp(pass,"adgjmptw")==0)
	{
	     yes();
	     delay(1000);
	     check=1;
	}
	else
	{
	     check =0;
	     no();
	     delay(1000);
	}

    return check;
}

void yes()
{

    setcolor(15);
    details();
       delay(1000);
       setcolor(12);
       line(158,232,172,248);
	   line(172,248,205,220);
	   delay(1000);

}

void no()
{
    setcolor(15);
    details();
    delay(1000);   setcolor(12);
   line(163,213,200,250);
   line(200,213,163,250);
		       delay(1000);

}

void homepage(void)
{
    int x = 300, y = 380 , i,j;
      while(1)
      {
	   startgraph();
	   header();
	settextstyle(4,0,5);
	setcolor(1);
	outtextxy(30,140,"E");
	settextstyle(3,0,4);
	outtextxy(60,150,"qualizer");

	settextstyle(4,0,5);
	outtextxy(30,200,"B");
	settextstyle(3,0,4);
	outtextxy(60,210,"ouncing ball");

	settextstyle(4,0,5);
	outtextxy(440,200,"P");
	settextstyle(3,0,4);
	outtextxy(470,210,"ixel point");

	settextstyle(4,0,5);
	outtextxy(440,140,"F");
	settextstyle(3,0,4);
	outtextxy(470,150,"un");

	settextstyle(4,0,5);
	outtextxy(440,250,"L");
	settextstyle(3,0,4);
	outtextxy(470,260,"oads");

	settextstyle(4,0,5);
	outtextxy(30,250,"D");
	settextstyle(3,0,4);
	outtextxy(60,260,"ocks");



	setcolor(12);
	outtextxy(550,30,"Info");

      //	int x=200 , y= 125;
      //	int x=265 , y= 230;
      //	int x=410 , y= 120;
      //	int x=410 , y= 230;
/*	for(int i=0 ;i<=360; i++)
	{
	    arc(x,y,0,i,10);
	    arc(x,y,0,i,8);
	    arc(x,y,0,i,6);
	    delay(10);
	}
*/	       showdate();
	       setcolor(12);
	       arc(x,y,0,360,50);
	       arc(x,y,0,360,48);
	       arc(x,y,0,360,46);
	       arc(x,y,0,360,44);
	       arc(x,y,0,360,42);
	       arc(x,y,0,360,40);
	 delay(500);
	 for(i=30,j=46 ;i>3 ;i--,j++)
	 {   delay(100);
	     gotoxy(i,23);	 cout<<"≤";
	     gotoxy(j,23);	 cout<<"≤";
	     gotoxy(i,24);       cout<<"≤";
	     gotoxy(j,24);       cout<<"≤";
	     gotoxy(i,25);       cout<<"≤";
	     gotoxy(j,25);	 cout<<"≤";

	  }
	  delay(500);
	  line(125,351,125,400);
	  line(125,351,150,400);
	  line(150,400,175,351);
	  line(175,351,175,400);
	  gotoxy(24,25);
	  cout<<"atrix";

	  line(375,351,375,375);
	  line(375,351,400,351);
	  line(375,375,400,375);
	  line(400,375,400,400);
	  line(375,400,400,400);
	  gotoxy(52,25);
	  cout<<"tring";

	  delay(500);
	  line(50,351,75,400);
	  line(50,351,25,400);
	  line(62,375,37,375);
	  gotoxy(11,25);
	  cout<<"rray";

	  line(460,351,485,351);
	  line(460,351,460,400);
	  line(460,400,485,400);
	  gotoxy(62,25);
	  cout<<"ollection";

	  settextstyle(1,0,1);
	  outtextxy(270,450,"Q to Exit...");
     char ch;
      //	  gotoxy(33,24);
      //	  cout<<"Your Choice";

	  gotoxy(38,24);
	  cin>>ch;

	     switch(tolower(ch))
	     {
		case 'm':	     closegraph(); matrix();
			     break;
		case 'c':	     closegraph(); collection();
				     startgraph();
			     break;
		case 'a':	     closegraph(); array();
			     break;
		case 's':	     closegraph(); string();
			     break;
		case 'e':            e(); equalizer(); 		break;
		case 'b':            b(); bouncingball(); 	break;
		case 'f':            f(); closegraph(); fun();
				     startgraph();		break;
		case 'p':	     p(); coordinate(); 	break;
		case 'q':            onapsup();  exitlogo();    break;
		case 'i':            info();	  		break;
		case 'l':            loads();                   break;
		case 'd':            docks();                   break;
		default : gotoxy(26,12);cout<<"Invalid Character Entered!";
			  delay(1000);
	      }
	      closegraph();
	 }
}

void main()
{
    clrscr();

	ppt();
	onaps1();
	naps();
	win8();
	logslide2();


     getch();
}




