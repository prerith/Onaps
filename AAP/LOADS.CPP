//By CJ Prerit Ameta +917791997339





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
		cprintf("�");
		gotoxy(j-2,10);
		cprintf("�");
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
	     cprintf("�");
	   for(i=12 ,p=-12;i<69 ; i++,p+=2)
	   {
	      gotoxy(i,10);
		 textcolor(11);
		     cprintf("�");
	      gotoxy(i-1,10);
		 textcolor(3);
		     cprintf("�");
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
	     cprintf("�");
	   for(i=10 ,p=-16;i<69 ; i++,p+=2)
	   {
	      gotoxy(i,10);
		 textcolor(11);
		     cprintf("�");
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
	     cprintf("�");
	   for(j=10,l=12 , k=1 , p=-12 ; l<41 ; p+=4 , k++,j++,l++)
	   {
	      gotoxy(j,10);
		 textcolor(3);
		     cprintf("�");
	      gotoxy(j+k,10);
		 textcolor(11);
		     cprintf("�");
	      gotoxy(j-1,10);
		 textcolor(3);
		     cprintf("�");
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
	     cprintf("�");
	   for(j=10, c=0, l=12, k=1, p=-14 ; l<70 ; p+=2, k+=c, c++, j++, l++)
	   {
	     if(j<20)
	     {
	      gotoxy(j+k,10);
		 textcolor(9);
		     cprintf("�");
	      gotoxy(j-1,10);
		 textcolor(3);
		     cprintf("�");
	      }
	      else
	      {
		gotoxy(j-1,10);
		 textcolor(3);
		     cprintf("�");
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
		     cprintf("�");
	      gotoxy(j,10);
		 textcolor(3);
		     cprintf("�");
	      }
	      else
	      {
		gotoxy(j,10);
		 textcolor(3);
		     cprintf("�");
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
      cprintf("    �����   ");         	     gotoxy(x,10);
      cprintf("�����   ����� ");             gotoxy(x,11);
      cprintf("��         ��");              gotoxy(x,12);
      cprintf("��         ��");              gotoxy(x,13);
      cprintf("��         ��");              gotoxy(x,14);
      cprintf("��         ��");              gotoxy(x,15);
      cprintf("��         ��");              gotoxy(x,16);
      cprintf("�������������");

   int i,j,k,p;
	textcolor(12);
      for(i=28, p=20, j =15, k=1; k<6 ;k++, j--,p+=20)
      {

	gotoxy(i,j);
	    cprintf("���������");
	       delay(500);
	gotoxy(i+3,13);
	    cout<<p<<"%";
      }
	gotoxy(31,10);
	    cprintf("���");
      getch();

}


