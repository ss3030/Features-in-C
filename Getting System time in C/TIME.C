#include<stdio.h>
#include<conio.h>
#include<time.h>

void main ()
{

   time_t rawtime;
   struct tm *info;
   
   clrscr();
   time(&rawtime);

   info = gmtime(&rawtime );

   printf("Current world clock:\n");
   printf("Time in China:%2d:%02d\n", (info->tm_hour+8)%24, info->tm_min);

   getch();
}
