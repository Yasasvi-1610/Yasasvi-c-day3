/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char name[30];
    puts("Enter your name");
    //gets(name);
    scanf("%[^\n]s",&name);
    puts("your name is:");
    puts(name);
    return 0;
}

