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
            int current=0;
            int prev=0;
            int next=0;
            int n,count=0;
            printf("Enter the nth number\n");
            scanf("%d",&n);
            while(count!=n)
            {
                count++;
                if(count==1)
                {
                    current=0;
                }
                else if(count==2)
                {
                    prev=current;
                    current=1;

                }
                else
                {
                    next=current+prev;
                    prev=current;
                    current=next;

                }



            }
            printf("Nth term of fibonacci series is %d (if we starts with 0)",current);

        }
        break;

        case 2:
        {
            int current=0;
            int prev=0;
            int next=0;
            int n,count=0;
            printf("Enter the number to print first N terms of Fibonacci series\n");
            scanf("%d",&n);
            while(count!=n)
            {
                count++;
                if(count==1)
                {
                    current=0;
                }
                else if(count==2)
                {
                    prev=current;
                    current=1;

                }
                else
                {
                    next=current+prev;
                    prev=current;
                    current=next;

                }

                printf("%d ",current);

            }

        }
        break;

        case 3:
        {
            int current=0;
            int prev=0;
            int next=0;
            int n,count=0;
            printf("Enter the number to check whether a given number is there in the Fibonacci series or not.\n");
            scanf("%d",&n);
            while(count!=n)
            {
                count++;
                if(count==1)
                {
                    current=0;
                }
                else if(count==2)
                {
                    prev=current;
                    current=1;

                }
                else
                {
                    next=current+prev;
                    prev=current;
                    current=next;

                }

                if(next==n)
                {
                    printf("Number found\n");
                    break;
                }
                if(next>n || (next!=n))
                {
                    printf("Number not found\n");
                    break;
                }


            }

        }
        break;
        case 4 :
        {
            printf("enter two number\n");
            int a,b,min;
            scanf("%d%d",&a,&b);
            min=a<b?a:b;
            while(a>0)
            {
                if(b%min==0 && a%min==0)
                {
                    printf("HCF of %d and %d is %d",a,b,min);
                    break;
                }
                min--;
            }

        }
        break;
        case 5 :
        {
            printf("enter two number to check co-prime\n");
            int a,b,min,hcf;
            scanf("%d%d",&a,&b);
            min=a<b?a:b;
            while(a>0)
            {
                if(b%min==0 && a%min==0)
                {
                    hcf=min;

                    break;
                }
                min--;
            }
            if(hcf==1)
                printf("%d and %d are co-prime numbers",a,b);
            else
                printf("%d and %d are not co-prime numbers",a,b);

        }
        break;
        case 6:
        {
            int i, a = 1, count;


            while(a <= 100)
            {
                count = 0;
                i = 2;
                while(i <= a/2)
                {
                    if(a%i == 0)
                    {
                        count++;
                        break;
                    }
                    i++;
                }
                if(count == 0 && a != 1 )
                {
                    printf(" %d ", a);
                }
                a++;
            }
        }
        break;

         case 7:
        {
            int i, a = 1, count;
            printf("Enter two number\n");
            int x,y,min,max;
            scanf("%d%d",&x,&y);
            min=x<y?x:y;
            max=x>y?x:y;

            while(min <= max)
            {
                count = 0;
                i = 2;
                while(i <= min/2)
                {
                    if(min%i == 0)
                    {
                        count++;
                        break;
                    }
                    i++;
                }
                if(count == 0 && min != 1 )
                {
                    printf(" %d ", min);
                }
                min++;
            }
        }
        break;

        case 8:
        {
            int i, count=0,flag=0;
            printf("Enter the number\n");
            int n;
            scanf("%d",&n);
            n+=1;

            while(count==0)
            {
                flag=0;
                i = 2;
                while(i <= n/2)
                {
                    if(n%i == 0)
                    {
                        flag=1;
                        break;

                    }

                    i++;
                }
                if(flag == 0)
                {
                    printf("%d ", n);
                    count = 1;
                }
                n++;
            }
        }
        break;


        case 9:
        {

            printf("Enter the number\n");
            int n,r,a,sumOfCubes=0;
            scanf("%d",&n);
            a=n;

            while(a>0)
            {
                r=a%10;
                sumOfCubes=sumOfCubes+(r*r*r);
                a/=10;

            }
            if(n==sumOfCubes){
                printf("%d is armstrong number",n);
            }else
            printf("%d is not armstrong number",n);
        }
        break;
         case 10:
        {


            int n=0,r,a,sumOfCubes=0;

            while(n<=1000)
            {
                a=n;
                while(a>0)
                {

                    r=a%10;
                    sumOfCubes=sumOfCubes+(r*r*r);
                    a/=10;

                }
                if(n==sumOfCubes)
                {
                    printf("%d ",n);
                }
                n++;
                sumOfCubes=0;
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

