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

            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    if(j<=i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }


                }
                printf("\n");
            }

        }
        break;

        case 2:
        {
            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    if(j>=n+1-i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }


                }
                printf("\n");
            }
        }
        break;

        case 3:
        {

            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    if(j<=n+1-i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }


                }
                printf("\n");
            }

        }
        break;
        case 4 :
        {
            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    if(j>=i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }


                }
                printf("\n");
            }

        }
        break;
        case 5 :
        {

            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n*2-1; j++)
                {
                    if(j>=n+1-i && j<=i+n-1)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }


                }
                printf("\n");
            }

        }
        break;
        case 6:
        {
            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n*2-1; j++)
                {
                    if(j>=i && j<=n*2-i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }


                }
                printf("\n");
            }
        }
        break;

        case 7:
        {
            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n*2; j++)
                {
                    if(j>=i+n || j<=n+1-i )
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }


                }
                printf("\n");
            }
        }
        break;

        case 8:
        {
            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                int x=0;
                for(j=1; j<=n*2-1; j++)
                {

                    if(j>=n+1-i && j<=i+n-1)
                    {
                        if(j<=n)
                        {
                            x++;
                        }
                        else
                        {
                            x--;
                        }
                        printf("%d",x);
                    }
                    else
                    {
                        printf(" ");
                    }


                }
                printf("\n");
            }
        }
        break;


        case 9:
        {
            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                int x=0;
                for(j=1; j<=n*2-1; j++)
                {
                    if(j>=i && j<=n*2-i)
                    {
                        if(j<=n)
                        {
                            x++;
                        }
                        else
                        {
                            x--;
                        }
                        printf("%d",x);
                    }
                    else
                    {
                        printf(" ");
                    }


                }
                printf("\n");
            }

        }
        break;
        case 10:
        {
            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                int x=0;
                for(j=1; j<=n*2-1; j++)
                {
                    if(j>=i+n-1 || j<=n+1-i)
                    {
                        if(j<=n)
                        {
                            x++;
                            printf("%d",x);
                        }

                        else
                        {
                            printf("%d",x);
                            x--;

                        }

                    }
                    else
                    {
                        printf(" ");
                    }


                }
                printf("\n");
            }
        }
        break;

        case 11:
        {
            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                int x=64;
                for(j=1; j<=n*2-1; j++)
                {

                    if(j>=n+1-i && j<=i+n-1)
                    {
                        if(j<=n)
                        {
                            x++;
                        }
                        else
                        {
                            x--;
                        }
                        printf("%c",x);
                    }
                    else
                    {
                        printf(" ");
                    }


                }
                printf("\n");
            }

        }
        break;

        case 12:
        {
            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                int x=64;
                for(j=1; j<=n*2-1; j++)
                {
                    if(j>=i && j<=n*2-i)
                    {
                        if(j<=n)
                        {
                            x++;
                        }
                        else
                        {
                            x--;
                        }
                        printf("%c",x);
                    }
                    else
                    {
                        printf(" ");
                    }


                }
                printf("\n");
            }

        }
        break;

        case 13:
        {
            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                int x=64;
                for(j=1; j<=n*2-1; j++)
                {
                    if(j>=i+n-1 || j<=n+1-i)
                    {
                        if(j<=n)
                        {
                            x++;
                            printf("%c",x);
                        }

                        else
                        {
                            printf("%c",x);
                            x--;

                        }

                    }
                    else
                    {
                        printf(" ");
                    }


                }
                printf("\n");
            }

        }
        break;
        case 14 :
        {

            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    if(i==n)
                        printf("*");
                    else if(j==1 || j==i)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");

            }
        }
        break;
        case 15 :
        {
            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    if(i==n)
                        printf("*");
                    else if(j==n || j==(n+1-i))
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");

            }
        }
        break;
        case 16:
        {
            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n*2-1; j++)
                {
                    if(i==n)
                        printf("*");
                    else if( j==n+1-i || j==i+n-1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");

            }
        }
        break;

        case 17:
        {
            int i,j,n;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n*2-1; j++)
                {
                    if(i==1)
                        printf("*");
                    else if(j==i || j==2*n-i)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");

            }
        }
        break;

        case 18:
        {
            int i,j,n,x=0;
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                i<=(n/2)+1?x++:x--;
                for(j=1; j<=n; j++)
                {

                    if(j>=(n/2)+1+1-x && j<=(n/2)+1-1+x)
                        printf("*");
                    else
                        printf(" ");

                }
                printf("\n");

            }
        }
        break;


        case 19:
        {
            int i,j,n,index=0,x=0;
            char str[5]= {'*','A','B','C','*'};
            printf("Enter the row number\n");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                i<=(n/2)+1?x++:x--;
                for(j=1; j<=n; j++)
                {

                    if(i==n/2+1)
                    {
                        printf("%c",str[index]);
                        index++;
                    }
                    else if(j>=(n/2)+1+1-x && j<=(n/2)+1-1+x)
                        printf("*");
                    else
                        printf(" ");

                }
                printf("\n");

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

