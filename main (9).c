/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int l,b,h;
    scanf("%d%d%d",&l,&b,&h);
    if(l==b & b==h){
    printf("equilateral triangle");
        
    }
    else if(l==b || l==h || b==h)
{
    printf("isoceles triangle");
}
    else
    printf("scalar triangle");
    

    return 0;
}

