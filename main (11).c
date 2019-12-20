/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int bal=1000,pin,op,w,d;
    //printf("menu:\n 1-display balance\ 2-deposit\n 3-withdraw\n 4-exit\n");
    printf("Enter pin no:\t");
    scanf("%d",&pin);
    if (pin==1234) 
    {
        printf("Access ig granted");
    }
    else
    {
        printf("access is denied");    
    }
        printf("menu:\n 1-display balance\ 2-deposit\n 3-withdraw\n 4-exit\n");
        printf("enter the operation");
        scanf("%d",&op);
        
    switch(op)
    {
        case 1:printf("Total balance=%d",b);
        if (b%1000==0)
        printf("balance is multiple of 1000");
        else
        printf("Not a multiple of 1000");
        break;
        case 2:
    }
    return 0;
}

