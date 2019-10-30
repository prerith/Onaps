//By Prerit Ameta Class XI Science



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
	cprintf("²²²²²²²²");  gotoxy(3,4);
	cprintf("²² ²² ²²");  gotoxy(3,5);
	cprintf("²² ²² ²²");  gotoxy(3,6);
	cprintf("²² ²² ²²");  gotoxy(3,7);
	cprintf("²² ²² ²²atrix");

      for(i = 3 ,j = 2 ; i<62 ; i++, j++)
	  {
		textcolor(i-14);
		gotoxy(i,3);
		cprintf("²²²²²²²²");
		gotoxy(j,3);
		cprintf(" ");
		delay(5);
		gotoxy(i,4);
		cprintf("²² ²² ²²");
		gotoxy(j,4);
		cprintf(" ");
		delay(5);
		gotoxy(i,5);
		cprintf("²² ²² ²²");
		gotoxy(j,5);
		cprintf(" ");
	  }

	for(i = 3 ,j = 2 ; i<62 ; i++, j++)
	  {
		textcolor(i-14);
		gotoxy(i,6);
		cprintf("²² ²² ²²");
		gotoxy(j,6);
		cprintf(" ");
		delay(5);
		gotoxy(i,7);
		cprintf("²² ²² ²²atrix");
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
	cprintf("1. º Create A Matrix."); 	       delay(m);
	gotoxy(4,5);
	cprintf("2. º Add Elements Of 2 Matrixes.");       delay(m);
	gotoxy(4,6);
	cprintf("3. º Subtract Elements Of 2 Matrixes.");  delay(m);
	gotoxy(4,7);
	cprintf("4. º Average Of Elemets Of Matrix."); delay(m);
	gotoxy(4,8);
	cprintf("5. º Maximum Element Of Matrix.");    delay(m);
	gotoxy(4,9);
	cprintf("6. º Smallest Element Of Matrix.");   delay(m);
	gotoxy(4,10);
	cprintf("7. º Right Diagonal of Matrix.");     delay(m);
	gotoxy(4,11);
	cprintf("8. º Left Diagonal Of Matrix.");      delay(m);
	gotoxy(4,12);
	cprintf("9. º Border Of Matrix.");             delay(m);
	gotoxy(4,13);
	cprintf("10.º All Corners Of Matrix.");        delay(m);
	gotoxy(4,14);
	cprintf("11.º Centre Element Of A Square Matrix."); delay(m);
	gotoxy(4,15);
	cprintf("12.º Print Only A Row Of Matrix.");   delay(m);
	gotoxy(4,16);
	cprintf("13.º Print Only A Column Of Matrix.");delay(m);
	gotoxy(4,17);
	cprintf("14.º Print Only One Row And Column Of Matrix."); delay(m);
	gotoxy(4,18);
	cprintf("15.º Eleminate A Row Of Matrix.");    delay(m);
	gotoxy(4,19);
	cprintf("16.º Upper Left Triangle Of Matrix.");delay(m);
	gotoxy(4,20);
	cprintf("17.º Enter Elements Of Matrix In Array.");  delay(m);
	gotoxy(4,21);
	cprintf("18.º Eleminate A Row And A Column Of Matrix.");  delay(m);
	gotoxy(4,22);
	cprintf("19.º Delete Corners Of A Matrix.");   delay(m);
	gotoxy(4,23);
	cprintf("20.º Transpose A Matrix.");           delay(m);

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












