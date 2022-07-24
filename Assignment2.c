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
        case 0:{
        exit(0);
        }
        case 1:
        {
            int a;
            printf("Enter the number\n");
            scanf("%d",&a);
            int x=0;
            int r=0;
            r=a%10;
            printf("Unit Digit is %d \n",r);
        }

        break;

        case 2:
        {
            int a;
            printf("Enter the number \n");
            scanf("%d",&a);
            printf("The number without its last digit is %d",a/10);
        }

        break;


        case 3:
        {
            int a;
            int b;
            int c;
            printf("Enter the first number \n");
            scanf("%d",&a);
            printf("Enter the second number \n");
            scanf("%d",&b);
            printf("You have entered a=%d and b=%d\n",a,b);
            c=a+b;
            a=c-a;
            b=c-b;
            printf("The numbers after swapping a=%d and b=%d\n",a,b);
        }
        break;

        case 4:
        {
            int a;
            int b;
            printf("Enter the first number \n");
            scanf("%d",&a);
            printf("Enter the second number \n");
            scanf("%d",&b);
            printf("You have entered a=%d and b=%d\n",a,b);
            a=a+b;
            b=a-b;
            a=a-b;
            printf("The numbers after swapping a=%d and b=%d\n",a,b);
        }

        break;

        case 5:
        {
            int a;
            int r;
            int sum=0;
            printf("Enter the three-digit number\n");
            scanf("%d",&a);
            while(a>0)
            {
                r=a%10;
                sum=sum+r;
                a=a/10;

            }
            printf("The sum of digit of the number is %d\n",sum);
        }

        break;

        case 6:
        {
            char a;
            printf("Enter the character\n");
            scanf(" %c",&a);
            printf("ASCII value of the entered character is %d\n",a);
        }

        break;

        case 7:
        {

            int a;
            printf("Enter the number\n");
            scanf("%d",&a);
            int count=0;
            while(1){
                    count++;
                if(a&1){
                    printf("Position of first 1 in LSB is %d",count);
                    break;
                }
                a=a>>1;
            }

        }
        break;
        case 8:
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

        case 9:
        {

            printf("\nEnter the choice to get the size of following data type: \n");
            printf("1. int\n");
            printf("2. float\n");
            printf("3. char\n");
            printf("4. double\n");
            int choice;
            scanf("%d",&choice);
            switch (choice)
            {

            case 1:
            {

                printf("%d",sizeof(int));
                break;
            }
            case 2:
            {
                printf("%d",sizeof(float));
                break;



            }
            case 3:
            {
                printf("%d",sizeof(char));
                break;
            }


            case 4:
            {
                printf("%d",sizeof(double));
                break;
            }
            default :
                printf("Incorrect Choice\n");
                break;

            }


        }
        break;
        case 10 :
        {
            printf("enter the number\n");
            int a;
            scanf("%d",&a);
            a/=10;
            a*=10;
            printf("Result is %d",a);

        }
        break;

        case 11 :
        {
            printf("price of 1 USD is INR 76.23.\n");
            int a;
            int b;

            scanf("%d",&a);
            printf("enter the number (single digit) which has to be append\n");
            scanf("%d",&b);
            a*=10;
            printf("Result is %d",a+b);

        }
        break;

        case 12 :
        {
            printf("Price of 1 USD is INR 76.23.\n");
            float a;
            printf("enter the amount in INR to convert into it USD.\n");
            scanf("%f",&a);
            printf("INR %f = %f USD",a,a/76.23);

        }
        break;

        case 13 :
        {
            printf("Enter the number (three or more or less digit)\n");
            int a;
            int r;
            int length;
            char text[20];
            int result;
            scanf("%d",&a);
            int x;
            x=a/10;
            r=a%10;
            sprintf(text,"%d",x);
            length=strlen(text);
            result=r*pow(10,length)+x;
            printf("The number after rotating its digits by one position towards the right is %d",result);

        }
        break;

        default :
            printf("Incorrect Choice\n");
            break;


        }

    }
    return 0;
}
