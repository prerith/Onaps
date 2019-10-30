//By Prerit Ameta Class XI Science    +91779177339     cjprerit@gmail.com
//Project on C++
//Onaps - 'Live the Dreams...'     An Operationg System Design
//Time Duration: 19 - 01 - 2015  ---  13 - 02 - 2015    Approx  500hrs.
//Precautions to be taken to run Onaps -
//Remember the order of header files is also important to run the program.
//Make sure for graphics that the location is c:\\turboc3\\bgi
//Be Sure of CHANGING THE DIRECTORY to AAP folder.
// Username : cj   	       	      &		Password : adgjmptw

#include"header.cpp"
#include"fun.cpp"
#include"box.cpp"
#include"objects.cpp"
#include"string.cpp"
#include"matrix.cpp"
#include"collect.cpp"
#include"loads.cpp"
#include"cordnat.cpp"
#include"array.cpp"
#include"snake.cpp"

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
	     gotoxy(i,23);	 cout<<"²";
	     gotoxy(j,23);	 cout<<"²";
	     gotoxy(i,24);       cout<<"²";
	     gotoxy(j,24);       cout<<"²";
	     gotoxy(i,25);       cout<<"²";
	     gotoxy(j,25);	 cout<<"²";

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
		case 'o':            snake();                   break;
		default : gotoxy(26,12);cout<<"Invalid Character Entered!";
			  delay(1000);
	      }
	      closegraph();
	 }
}
// pressing 'o' in homescreen is a hidden feature of the project

void main()
{
    clrscr();

/*	ppt();
	onaps1();
	naps();
	win8();
	logslide2();
*/      homepage();

     getch();
}




