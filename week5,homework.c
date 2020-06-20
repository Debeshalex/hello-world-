#include<stdio.h>
#include<conio.h>
#include<math.h>
       void main ()
   {
       int  day = 0, d1,d2,d3,d4,d5 , sum;

       while ( day <= 5)
      {
        printf("enter the daily run time ");
        scanf("%d","%d" ,"%d","%d","%d",&d1,&d2,&d3,&d4,&d5);

        if ( day >= 0)
       {

          sum = d1+d2+d3+d4+d5;

          day=day ++;

          printf(" total weekly run,%d", sum);}
        else
         {
           printf( "run must be posative" );

        }

          getch();
   }

