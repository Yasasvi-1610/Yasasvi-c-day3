/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int x,y,z;
   printf("Enter 3 values\n");
   scanf("%d%d%d",&x,&y,&z);
   if(x>y && x>z)
    {
        printf("largest number:%d",x);
    }
else if(y>x && y>z)
    {
          printf("largest number:%d",y);
    }
    else
    {
        printf("largest number:%d",z);
    }
    return 0;
}

