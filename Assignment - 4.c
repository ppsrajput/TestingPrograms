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
            int i=1;
            while(i<=5)
            {
                printf("MySirG\n");
                i++;
            }
        }
        break;


        case 2:
        {
            int i=1;
            while(i<=10)
            {
                printf("%d\n",i);
                i++;
            }
        }
        break;

        case 3:
        {
            int i=10;
            while(i>0)
            {
                printf("%d\n",i);
                i--;
            }
        }
        break;

        case 4:
        {
            int i=1;
            while(i<=10)
            {
                printf("%d\n",2*i-1);
                i++;
            }
        }
        break;

         case 5:
        {
            int i=10;
            while(i>0)
            {
                printf("%d\n",2*i-1);
                i--;
            }
        }
        break;

        case 6:
        {
            int i=1;
            while(i<=10)
            {
                printf("%d\n",2*i);
                i++;
            }
        }
        break;

         case 7:
        {
            int i=10;
            while(i>0)
            {
                printf("%d\n",2*i);
                i--;
            }
        }
        break;

        case 8:
        {
            int i=1;
            while(i<=10)
            {
                printf("%d\n",i*i);
                i++;
            }
        }
        break;

        case 9:
        {
            int i=1;
            while(i<=10)
            {
                printf("%d\n",i*i*i);
                i++;
            }
        }
        break;

         case 10:
        {
            int i=1;
            while(i<=10)
            {
                printf("5 X %d = %d \n",i,5*i);
                i++;
            }
        }
        break;

            default :
                printf("Incorrect Choice\n");
                break;


            }

        }
        return 0;
    }

