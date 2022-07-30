#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Please enter your question number and get your answer. And if you want to exit the program please enter 0 \n");
    while(1)
    {
        printf("\nEnter choice : \n");
        int choice;
        scanf("%d",&choice);
        switch (choice)
        {
        case 0:
        {
            exit(0);
        }
        case 1:
        {
            int a;
            printf("Enter the number\n");
            scanf("%d",&a);
            if(a>=0)
                printf("Its Positive\n");
            else
                printf("Its Non-Positive\n");
        }
        break;

        case 2:
        {
            int a;
            printf("Enter the number to check divisible by 5 or not\n");
            scanf("%d",&a);
            if(a%5==0)
                printf("Its divisible by 5\n");
            else
                printf("Its Not divisible by 5\n");
        }
        break;

        case 3:
        {
            int a;
            printf("Enter the number \n");
            scanf("%d",&a);
            if(a%2==0)
                printf("even\n");
            else
                printf("odd\n");
        }
        break;

        case 4:
        {
            int a;
            printf("Enter the number \n");
            scanf("%d",&a);
            if(a&1)
                printf("odd\n");
            else
                printf("even\n");
        }
        break;

        case 5:
        {
            int a;
            printf("Enter the number to check whether a given number is a three-digit number or not.\n");
            scanf("%d",&a);
            if((a>=100&&a<=999)|| (a>=-999&&a<=-100))
                printf("Yes, The number is three digit number\n");
            else
                printf("No, The number is not three digit number\n");
        }
        break;
        case 6:
        {
            int a;
            int b;
            printf("Enter first number\n");
            scanf("%d",&a);
            printf("Enter second number\n");
            scanf("%d",&b);
            if(a>b)
                printf("%d is greatest\n",a);
            else if(b>a)
                printf("%d is greatest\n",b);
            else
                printf("Both are same : %d \n",a);
        }
        break;

        case 7:
        {
            int a;
            int b;
            int c;
            int d;
            printf("Enter first values for a,b,c\n");
            scanf("%d%d%d",&a,&b,&c);
            d=b*b -4*a*c;
            if(d>0)
                printf("Real and distinct\n");
            else if(d<0)
                printf("Imaginary\n");
            else
                printf("Real and equal\n");
        }
        break;

        case 8:
        {
            printf("Enter the year");
            int year;
            scanf("%d",&year);
            if(year%100==0)
            {
                if(year%400==0)
                {

                    printf("Leap Year");
                }
                else
                {
                    printf("Not Leap Year");
                }

            }
            else
            {
                if(year%4==0)
                {

                    printf("Leap Year");
                }
                else
                {
                    printf("Not Leap Year");
                }
            }
        }
        break;

        case 9:
        {
            int a;
            int b;
            int c;
            printf("Please enter three integer\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a>b && a>c)
                printf("%d is greatest",a);
            else if(b>a && b>c)
                printf("%d is greatest",b);
            else if(c>a && c>b)
                printf("%d is greatest",c);
            else if(a==b && a>c)
                printf("%d is greatest",a);
            else if(b==c && b>a)
                printf("%d is greatest",b);
            else if(a==c && a>b)
                printf("%d is greatest",c);
            else if(a==b&&b==c)
                printf("%d is greatest",c);
        }


        break;

        case 10 :
        {

            float cost,sell;
            printf("Enter cost price \n");
            scanf("%f",&cost);
            printf("Enter sell price \n");
            scanf("%f",&sell);
            float proftOrLossPer;
            proftOrLossPer=100*(sell-cost)/cost;
            proftOrLossPer>=0 ? printf("profit percentage is %f \n",proftOrLossPer) : printf("loss percentage is %f \n",proftOrLossPer);


        }
        break;

        case 11 :
        {
            printf("enter 5 subjects marks\n");
            float a,b,c,d,e;
            scanf("%f",&a);
            scanf("%f",&b);
            scanf("%f",&c);
            scanf("%f",&d);
            scanf("%f",&e);

            printf("%f",(a+b+c+d+e));
            if(((a+b+c+d+e)/5) >=33)
                printf("Passed\n");
            else
                printf("Failed\n");

        }
        break;
        case 12 :
        {
            printf("enter the alphabet\n");
            char x;
            scanf(" %c",&x);
            int a=x;
            if(a>=65 && a<=90)
                printf("Uppercase");
            else if(a>=97 && a<=122)
                printf("Lowercase");
            else
                printf("Invalid alphabet");

        }
        break;
        case 13 :
        {
            printf("enter the number\n");
            int x;
            scanf("%d",&x);

            if(x%6==0)
                printf("Divisible by 3 and 2");
            else
                printf("Not Divisible by 3 and 2");

        }
        break;

        case 14 :
        {
            printf("enter the number\n");
            int x;
            scanf("%d",&x);

            if(x%7==0 || x%3==0)
                printf("Divisible by 7 or 3\n");
            else
                printf("Neither Divisible by 3 nor 2\n");

        }
        break;
        case  15 : {

        printf("enter the number\n");
            int x;
            scanf("%d",&x);
            if(x==0)
                printf("%d is Zero",x);
                else if(x>0)
                printf("%d is Positive",x);
                else
                printf("%d is Negitive",x);
        }
        break;

        case 16 :
        {
            printf("enter the alphabet\n");
            char x;
            scanf(" %c",&x);
            int a=x;
            if(a>=48 && a<=57)
                printf("%c is Digit",x);
            else if(a>=65 && a<=90)
                printf("%c is Uppercase Alphabet",x);
            else if(a>=97 && a<=122)
                printf("%c is Lowercase Alphabet",x);
            else
                printf("%c is Special Character",x);

        }
        break;

         case 17 :
        {
            printf("enter the sides of triangle \n");
            int a,b,c;
            scanf("%d",&a);
            scanf("%d",&b);
            scanf("%d",&c);
            if((a<b+c)&&(b<a+c)&&(c<a+b))
                printf("Triangle is Valid");
            else
               printf("Triangle is Invalid");

        }
        break;

         case 18 :
        {
            printf("enter the month number \n");
            int a;
            scanf("%d",&a);
            if( a==1|| a==3|| a==5|| a==7|| a==8|| a==10|| a==12)
                printf("31 Days in the month");
            else if(a==4|| a==6||a==5||a==9||a==11)
               printf("30 Days in the month");
            else if(a==2)
               printf("28 or 29 days are possible in the month");
            else
                printf("Invalid Month number");

        }
        break;

        default :
            printf("Incorrect Choice\n");
            break;


        }

    }
    return 0;
}

