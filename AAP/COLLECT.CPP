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
	cprintf("께께께");  gotoxy(3,4);
	cprintf("께    ");  gotoxy(3,5);
	cprintf("께    ");  gotoxy(3,6);
	cprintf("께    ");  gotoxy(3,7);
	cprintf("께께께ollection");

      for(i = 3 ,j = 2 ; i<62 ; i++, j++)
	  {
		textcolor(i-14);
		gotoxy(i,3);
		cprintf("께께께");
		gotoxy(j,3);
		cprintf(" ");
		delay(5);
		gotoxy(i,4);
		cprintf("께");
		gotoxy(j,4);
		cprintf(" ");
		delay(5);
		gotoxy(i,5);
		cprintf("께");
		gotoxy(j,5);
		cprintf(" ");
	  }

	for(i = 3 ,j = 2 ; i<62 ; i++, j++)
	  {
		textcolor(i-14);
		gotoxy(i,6);
		cprintf("께");
		gotoxy(j,6);
		cprintf(" ");
		delay(5);
		gotoxy(i,7);
		cprintf("께께께ollection");
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
	cprintf("1. � Add Two Numbers."); 	       delay(m);
	gotoxy(4,5);
	cprintf("2. � Subtract two Numbers.");       delay(m);
	gotoxy(4,6);
	cprintf("3. � Multiply Two Numbers.");  delay(m);
	gotoxy(4,7);
	cprintf("4. � Division Of Two Numbers."); delay(m);
	gotoxy(4,8);
	cprintf("5. � Greater in Numbers.");    delay(m);
	gotoxy(4,9);
	cprintf("6. � Average of Numbers.");   delay(m);
	gotoxy(4,10);
	cprintf("7. � Simple Interest.");     delay(m);
	gotoxy(4,11);
	cprintf("8. � Perimeter Of Rectangle.");      delay(m);
	gotoxy(4,12);
	cprintf("9. � Perimeter Of Circle.");             delay(m);
	gotoxy(4,13);
	cprintf("10.� Perimeter of Triangle.");        delay(m);
	gotoxy(4,14);
	cprintf("11.� Area of Circle."); delay(m);
	gotoxy(4,15);
	cprintf("12.� Area of Rectangle.");   delay(m);
	gotoxy(4,16);
	cprintf("13.� Square root a Number.");delay(m);
	gotoxy(4,17);
	cprintf("14.� Cube Root of a Number."); delay(m);
	gotoxy(4,18);
	cprintf("15.� Compound Interest.");    delay(m);
	gotoxy(4,19);
	cprintf("16.� LCM .");delay(m);
	gotoxy(4,20);
	cprintf("17.� Power.");  delay(m);
	gotoxy(4,21);
	cprintf("18.� Square.");  delay(m);
	gotoxy(4,22);
	cprintf("19.� Cube.");   delay(m);
	gotoxy(4,23);
	cprintf("20.� Area of Triangle.");           delay(m);

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












