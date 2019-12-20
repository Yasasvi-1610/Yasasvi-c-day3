/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,sum;
    printf("Enter a,b values");
    scanf("%d%d",&a,&b);
    
    while(a>0)
    {
        if(a%2!=0)
        {sum+=b;}
        a=a/2;
        b=b*2;
        
    }
    printf("the product is%d",sum);

    return 0;
}

