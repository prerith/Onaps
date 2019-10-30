

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


