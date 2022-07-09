#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
void main()
{

    bool x=true;
    printf("Please enter you question number and get your answer. And if you want to exit the program please enter 0 \n");
    while(x)
    {
        printf("\nEnter choice : \n");
        int choice;
        scanf("%d",&choice);

        switch (choice)
        {
        case 0:
            x=false;
            break;
        case 1:
            printf("Hello Students");
            break;

        case 2:
            printf  ("Hello \nStudents");
            break;

        case 3:
            printf("\"MySirg\"");
            break;
        case 4:
            printf("Enter the radius of cricle : \n");
            float R;
            scanf("%f",&R);
            float A;
            A=R*R*3.14;
            printf("Area of circle is %f \n",A);
            break;
        case 5:
            printf("Enter your String \n");
            char str[100];
            scanf("%s",&str);

            int length=printf(str);
            printf("\nyour string length is %d: \n",length);
            break;
        case 6:
            printf("\" Hello, Saurabh Sir\"\n");
            break;
        case 7:
            printf("\%%d\n");
            break;
        case 8:
            printf("\\n\n");
            break;
        case 9:
            printf("\\\\\n");
            break;

        case 10:
            printf("Enter the date in the format \"DD/MM/YYYY\"\n");
            char date[100];
            char answer[100]="";
            scanf("%s",&date);
            char * dateToken = strtok(date, "/");
            int temp;
            temp=1;// Keep printing tokens while one of the
            // delimiters present in str[].
            while (dateToken != NULL)
            {
                if(temp==1)
                {
                    strcat(answer,"Day- ");
                }
                if(temp==2)
                {
                    strcat(answer," Month- ");
                }
                if(temp==3)
                {
                    strcat(answer," Year- ");
                }
                strcat(answer,dateToken);
                dateToken = strtok(NULL, "/");
                temp=temp+1;

            }
            printf("%s\n",answer);
            break;
        case 11:
            printf("Enter the time in the format \"HH:MM\"\n");
            char time[100];
            char answer2[100]="";
            scanf("%s",&time);
            char * timeToken = strtok(time, ":");
            int temp2;
            temp2=1;// Keep printing tokens while one of the
            // delimiters present in str[].
            while (timeToken != NULL)
            {

                if(temp2==1)
                {
                    strcat(answer2,timeToken);
                    strcat(answer2," Hour and ");
                }
                if(temp2==2)
                {
                    strcat(answer2,timeToken);
                    strcat(answer2," minute ");
                }

                timeToken = strtok(NULL, ":");
                temp2=temp2+1;

            }
            printf("%s\n",answer2);
            break;
        case 12 :

            //int x = printf("ineuron");
            //printf("%d",x);
            break;
        default :
            printf("Incorrect Choice\n");
            break;

        }

    }



}
