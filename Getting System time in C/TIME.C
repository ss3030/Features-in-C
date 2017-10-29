#include<stdio.h>
#include<conio.h>
#include<time.h>

void main ()
{

   time_t rawtime;
   struct tm *info;
      //add by how many hours your location differs from gmt
   clrscr();
   time(&rawtime);

   info = gmtime(&rawtime );

   printf("Current world clock:\n");
   printf("Time in India:%2d:%02d\n", (info->tm_hour+5)%24, info->tm_min+30);

   getch();
}
