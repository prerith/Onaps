

void box(int x1, int y1, int x2, int y2, int ct, int cb);

void box(int x1, int y1, int x2, int y2, int ct, int cb)
{
    int i;
    textcolor(ct);
    textbackground(cb);

    gotoxy(x1,y1);
	    cprintf("�");  		 //205,201,200,188,187,186
	for(i = x1 ; i < x2 ; i++)
	    cprintf("�");
	    cprintf("�");
    gotoxy(x1,y2);
	    cprintf("�");
	for(i = x1 ; i < x2 ; i++)
	    cprintf("�");
    gotoxy(x2,y1);
	for(i = y1 ; i < y2-1 ; i++ , y1++)
	{
	    gotoxy(x2+1,y1+1);
		cprintf("�");
	    gotoxy(x1,y1+1);
		cprintf("�");
	}
    gotoxy(x2+1,y2);
	    cprintf("�");

}
