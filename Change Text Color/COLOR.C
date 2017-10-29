#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
textcolor(RED);    //to add color to text
cprintf("HELLO");  //observe that it is cprintf() and not printf()
textcolor(BLUE+BLINK);
cprintf("WORLD"); //to add blinking effect
getch();





}
