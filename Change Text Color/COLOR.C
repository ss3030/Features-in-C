#include<stdio.h>
#include<conio.h>
void main()
{
textcolor(RED);    //to add red color to text
cprintf("HELLO");  //cprintf() and not printf()
textcolor(BLUE+BLINK);
cprintf("WORLD"); //add blinking effect
getch();





}
