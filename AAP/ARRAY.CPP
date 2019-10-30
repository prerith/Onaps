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
	cprintf("   ² ");   gotoxy(21,4);
	cprintf("  ² ²");   gotoxy(21,5);
	cprintf(" ²² ²²");  gotoxy(21,6);
	cprintf(" ²²²²²");  gotoxy(21,7);
	cprintf("²     ²rray");
	for(int i = 21 ,j = 21 ; i<62 ; i++, j++)
	  {

		textcolor(i-14);
		gotoxy(i,3);
		cprintf("   ² ");
		gotoxy(j,3);
		cprintf("  ");
		delay(10);
		gotoxy(i,4);
		cprintf("  ² ²");
		gotoxy(j,4);
		cprintf(" ");
		delay(5);
		gotoxy(i,5);
		cprintf(" ²² ²²");
		gotoxy(j,5);
		cprintf(" ");
	  }

	for(i = 21 ,j = 20 ; i<62 ; i++, j++)
	  {
		textcolor(i-14);
		gotoxy(i,6);
		cprintf(" ²²²²²");
		gotoxy(j,6);
		cprintf(" ");
		delay(5);
		gotoxy(i,7);
		cprintf("²     ²rray");
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
	cout<<" 1.º Search An Element in A Array";gotoxy(4,9); delay(100);
	cout<<" 2.º Sort Elements of Array In Ascending Order";   gotoxy(4,10);           delay(100);
	cout<<" 3.º Sort Elements of Array In Descending Order";   gotoxy(4,11);   delay(100);
	cout<<" 4.º Delete An Element of A Array";        gotoxy(4,12);   delay(100);
	cout<<" 5.º Search An Element in A Array";   gotoxy(4,13); delay(100);
	cout<<" 6.º Merge Elements of two Arrays";   gotoxy(4,13); delay(100);
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
