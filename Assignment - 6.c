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
            printf("Enter the number\n");
            int a,x;
            int sum=0;
            scanf("%d",&a);
            x=a;
            while(a>0)
            {
                sum=sum+a;
                a--;
            }
            printf("Sum of first %d natural numbers is %d",x,sum);

        }
        break;
        case 2:
        {
            printf("Enter the number\n");
            int a,x;
            int sum=0;
            scanf("%d",&a);
            x=a;
            while(a>0)
            {
                sum=sum+a*2;
                a--;
            }
            printf("Sum of first %d even natural numbers is %d",x,sum);

        }
        break;
        case 3:
        {
            printf("Enter the number\n");
            int a,x;
            int sum=0;
            scanf("%d",&a);
            x=a;
            while(a>0)
            {
                sum=sum+a*2-1;
                a--;
            }
            printf("Sum of first %d odd natural numbers is %d",x,sum);

        }
        break;
        case 4:
        {
            printf("Enter the number\n");
            int a,x;
            int sum=0;
            scanf("%d",&a);
            x=a;
            while(a>0)
            {
                sum=sum+a*a;
                a--;
            }
            printf("Sum of squares of first %d natural numbers is %d",x,sum);

        }
        break;

        case 5:
        {
            printf("Enter the number\n");
            int a,x;
            int sum=0;
            scanf("%d",&a);
            x=a;
            while(a>0)
            {
                sum+=a*a*a;
                a--;
            }
            printf("Sum of qubes of first %d natural numbers is %d",x,sum);

        }
        break;

        case 6:
        {
            printf("Enter the number\n");
            int a,x;
            int fact=1;
            scanf("%d",&a);
            x=a;
            while(a>0)
            {
                fact*=a;
                a--;
            }
            printf("Factorial of %d  is %d",x,fact);

        }
        break;

        case 7:
        {
            printf("Enter the number\n");
            int a,x,count=0;
            scanf("%d",&a);
            x=a;
            if(a==0)
            {
                printf("Digit count of %d is 0",x);
            }
            else
            {
                if(a<0)a=a-a-a;
                do
                {
                    count++;
                    a/=10;
                }
                while(a>0);
                printf("Digit count of %d is %d",x,count);
            }



        }
        break;
        case 8 :
        {
            int n,i,m=0,flag=0;
            printf("Enter the number to check prime:");
            scanf("%d",&n);
            m=n/2;
            for(i=2; i<=m; i++)
            {
                if(n%i==0)
                {
                    printf("Number is not prime");
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                printf("Number is prime");
        }
        break;
        case 9 :
        {

            int n1, n2, max;
            printf("Enter two positive integers: ");
            scanf("%d %d", &n1, &n2);

            // maximum number between n1 and n2 is stored in max
            max = (n1 > n2) ? n1 : n2;

            while (1)
            {
                if (max % n1 == 0 && max % n2 == 0)
                {
                    printf("The LCM of %d and %d is %d.", n1, n2, max);
                    break;
                }
                ++max;
            }
        }
        break;

        case 10:{
        int x;
        int r=0;
        int result=0;
        printf("enter the number\n");
        scanf("%d",&x);

        while(x>0)
        {
            r=x%10;
            result=result*10 + r;
            x/=10;


        }
        printf("%d",result);
        }break;

        default :
            printf("Incorrect Choice\n");
            break;


        }

    }
    return 0;
}

