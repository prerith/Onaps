

void fun();
void calculator();
void piano();


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