#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 2023.06.19   C Lab

    //part B section A


    //Q2

    int count=0,mark,tot=0;
    float avg;

    while(count<10)
    {
        count++;
        printf("Enter mark:\n");
        scanf("%d",&mark);
        tot=tot+mark;
    }

    avg=tot/10;

    if(avg<50)
        printf("fail!");
    else
        printf("pass!");

      // Q1 using Do while

      int z=0;

      do{
        printf("%d",z);
        z++;
      }while(z<=100);

     // Q1 using for loop
     int i;
     for(i=0;i<=100;i++)
     {
         printf("%d  ",i);
     }

   //Q1 using while


   int x=0;

   while(x<=100)
   {
       printf("%d  ",x);
       x++;
   }



    //Q5

    int m;

    printf("Enter month number:\n");
    scanf("%d",&m);

    switch(m)
    {
      case 1:printf("31 of days in January");break;
      case 2:printf("28 of days in February");break;
      case 3:printf("31 of days in March");break;
      case 4:printf("30 of days in Apirl");break;
      case 5:printf("31 of days in May");break;
      case 6:printf("30 of days in June");break;
      case 7:printf("31 of days in July");break;
      case 8:printf("31 of days in August");break;
      case 9:printf("30 of days in September");break;
      case 10:printf("31 of days in October");break;
      case 11:printf("30 of days in November");break;
      case 12:printf("31 of days in December");break;
      default:printf("invalid input");break;

    }



    //Q4

    char v;

    printf("Enter a character:\n");
    scanf("%c",&v);

    switch(v)
    {
        case 'a':printf("It is a vowel");break;
        case 'e':printf("It is a vowel");break;
        case 'i':printf("It is a vowel");break;
        case 'o':printf("It is a vowel");break;
        case 'u':printf("It is a vowel");break;
        default:printf("It is not a vowel");
    }
    }



    // Q3

    int choice;
    float c,r,a,v,x=3.14;

    printf("Menu \n");
    printf("1. Calculate the circumferece of a circle\n");
    printf("2. Calculate Area\n");
    printf("3.calculate volume\n");

    printf("Enter your choice:\n");
    scanf("%d",&choice);

    printf("Enter radius:\n");
    scanf("%f",&r);

    if(choice==1)
        {c=2*x*r;
        printf("circumferece of a circle = %.2f\n",c);
        }
    else if(choice==2){
        a=x*r*r;
        printf("Area of a circle = %.2f\n",a);
    }
    else
           {

            v=(4.0/3.0)*x*r*r*r;
            printf("volume of a circle = %.2f\n",v);

           }


}



}
