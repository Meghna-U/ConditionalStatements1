#include<stdio.h>
void main()
{
   int m;
   char g;
   printf("Enter marks:");
   scanf("%d",&m);
   if(m>=85 && m<=100)
   {
     g='A';
   }
   else if(m>=70 && m<=84)
   {
     g='B';
   }
   else if(m>=55 && m<=69)
   {
     g='C';
   }
   else if(m>=40 && m<=54)
   {  
     g='D';
   }
   else
   {
     g='F';
   }
   printf("Grade %c",g);
}
