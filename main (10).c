/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
   int o,a,b;
  // printf("choose the operation");
  // scanf("%d",&o);
   printf("Enter a,b values");
   scanf("%d%d",&a,&b);
   printf("menu:1-add\t 2-sub\t 3-mul\t 4-div\n");
   printf("choose the operation");
   scanf("%d",&o);
   switch(o)
   {
       case 1:printf("%d",a+b);
       break;
       case 2: printf("%d",a-b);
       break;
       case 3:printf("%d",a*b);
       break;
       case 4:printf("%d",a/b);
       break;
       default:printf("invalid");
       break;
   }
//return 0;
       
 

    return 0;
}

