/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%3==0 || x%5==0)
    {
        if(x%3==0&&x%5!=0){
        printf("FIZZ");
        else if(x%3!=0&&x%5==0)
        printf("BIZZ");
        else
        printf("FIZZBIZZ");}
        else
        printf("no";)
    }
return 0;
}
    

