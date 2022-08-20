#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
void displayGameInfo();
void getRandomMatrix();
void printMatrix(int a[4][4],int zeroValueIndex);
void startGame(int a[4][4],char name[]);
void changeTextColor(int code);
int checkPlayerWon(int a[4][4]);
int zeroValueIndex;
int maxMoves=500;
int RepeatMoves=500;
int newZeroValueIndex;
int main()
{
    //changeTextColor(11);
    int a[4][4];
    printf("\n\n\tPlayer Name : ");
    char name[50];
    changeTextColor(11);
    fgets(name, 50, stdin);
    name[strlen(name)-1]='\0';
    displayGameInfo();
    getRandomMatrix(a);
    printMatrix(a,zeroValueIndex);
    startGame(a,name);
    return 0;

}
void displayGameInfo()
{
    system("cls");
    printf("\t\t\t\t\t\tMATRIX PUZZLE\n\n");
    changeTextColor(6);
    printf("\t\t\t\t\t\tRULE OF THIS GAME\n\n");
    printf("\t\t\t\t1. You can move only 1 step at a time by arrow key\n");
    changeTextColor(15);
    printf("\t\t\t\t\tMove Up   : by Up arrow key\n");
    printf("\t\t\t\t\tMove Down : by Down arrow key\n");
    printf("\t\t\t\t\tMove Left : by Left arrow key\n");
    printf("\t\t\t\t\tMove Right: by Right arrow key\n");
    changeTextColor(6);
    printf("\t\t\t\t2. You can move number at empty position only\n\n");
    printf("\t\t\t\t3. For each valid move : your total number of move will be decreased by 1\n\n");
    printf("\t\t\t\t4. Winning Situation : Number in 4*4 matrix should be in order from 1 to 15\n\n");
    changeTextColor(15);
    printf("\t\t\t\t\t     Winning Situation\n");
    printf("\t\t\t\t\t-------------------------\n");
    printf("\t\t\t\t\t|  1  |  2  |  3  |  4  |\n");
    printf("\t\t\t\t\t|  5  |  6  |  7  |  8  |\n");
    printf("\t\t\t\t\t|  9  | 10  | 11  | 12  |\n");
    printf("\t\t\t\t\t| 13  | 14  | 15  |     |\n");
    printf("\t\t\t\t\t-------------------------\n\n");
    changeTextColor(6);
    printf("\t\t\t\t5. You can exit the game at any time by pressing 'E' or 'e'\n\n");
    changeTextColor(15);
    printf("\t\t\t\tTry to win in minimum no of moves\n\n");
    printf("\t\t\t\tPlease press enter key to start the game\n");
    getchar();
}

void getRandomMatrix(int matrix[4][4])
{

    int i,j,temp;
    int temp_array[15];
    int temp_array_index=0;

    srand(time(0));
    zeroValueIndex=rand()%15+1;
    for(i=0; i<=14; i++)
    {
        temp=rand()%15+1;
        for(j=0; j<=i-1; j++)
            if(temp==temp_array[j])break;
        j==i?temp_array[i]=temp:i--;
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(!(i==(zeroValueIndex/4) && j==(zeroValueIndex%4)))
            {
                matrix[i][j]=temp_array[temp_array_index];
                temp_array_index++;
            }
            else
            {
                matrix[i][j]=0;
            }
        }

    }
}
void printMatrix(int a[4][4],int zeroValueIndex)
{
    int i,j;
    printf("\n\n\t\t-------------------------\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(j==0)printf("\t\t");
            if(!(4*i+j==zeroValueIndex))
                if(a[i][j]>9)
                    printf("| %d  ", a[i][j]);
                else
                    printf("|  %d  ", a[i][j]);
            else
                printf("|     ", a[i][j]);
        }
        printf("|\n");
    }
    printf("\t\t-------------------------");
}
void startGame(int a[4][4],char name[])
{
    int chr1, chr2;
    do
    {
        system("cls");
        printf("\n");
        changeTextColor(8);
        printf("\t Player Name : ");
        changeTextColor(15);
        printf("%s ,",name);
        changeTextColor(8);
        printf("  Moves Remaining :  ");
        changeTextColor(15);
        printf("%d",maxMoves);
        printf("\n");
        changeTextColor(11);
        printMatrix(a,zeroValueIndex);
        if(checkPlayerWon(a))
        {
            changeTextColor(2);
            printf("\n\n\t\t Congratulations !! %s , You Won .....\n\n",name);

            changeTextColor(15);
            printf("\n\n\t\t Press any key to exit\n\n");
            getch();
            break;

        }

        chr1 = getch();
        if (chr1 == 0xE0) //to check scroll key interrupt
        {
            chr2 = getch();
            switch(chr2)
            {
            case 72:
            {
                if(!(zeroValueIndex/4==3))
                {
                    newZeroValueIndex=zeroValueIndex+4;
                    a[zeroValueIndex/4][zeroValueIndex%4]=a[newZeroValueIndex/4][newZeroValueIndex%4];
                    a[newZeroValueIndex/4][newZeroValueIndex%4]=0;
                    zeroValueIndex=newZeroValueIndex;
                    maxMoves--;
                }
            }
            break;
            case 80:
            {
                if(!(zeroValueIndex/4==0))
                {
                    newZeroValueIndex=zeroValueIndex-4;
                    a[zeroValueIndex/4][zeroValueIndex%4]=a[newZeroValueIndex/4][newZeroValueIndex%4];
                    a[newZeroValueIndex/4][newZeroValueIndex%4]=0;
                    zeroValueIndex=newZeroValueIndex;
                    maxMoves--;
                }
            }
            break;
            case 75:
            {
                if(!(zeroValueIndex==15))
                {
                    newZeroValueIndex=zeroValueIndex+1;
                    a[zeroValueIndex/4][zeroValueIndex%4]=a[newZeroValueIndex/4][newZeroValueIndex%4];
                    a[newZeroValueIndex/4][newZeroValueIndex%4]=0;
                    zeroValueIndex=newZeroValueIndex;
                    maxMoves--;
                }
            }
            break;
            case 77:
            {
                if(!(zeroValueIndex==0))
                {
                    newZeroValueIndex=zeroValueIndex-1;
                    a[zeroValueIndex/4][zeroValueIndex%4]=a[newZeroValueIndex/4][newZeroValueIndex%4];
                    a[newZeroValueIndex/4][newZeroValueIndex%4]=0;
                    zeroValueIndex=newZeroValueIndex;
                    maxMoves--;
                }
            }
            break;
            default:
                printf("OTHER KEY PRESSED: %d %d\n", chr1, chr2);
                break;
            };
        }
        else if(chr1 ==69 || chr1==101)
        {
            changeTextColor(15);
            break;
        }
        else
        {
            printf("\n\n\tInvalid Key Pressed");
        }

        if(maxMoves==0)
        {
            system("cls");
            changeTextColor(4);
            printf("\n\t You Lose !!\n");
            changeTextColor(15);
            printf("\n\n\t Want to play again ? \n\n\t Enter 'Y'\n\n");
            int temp;
            temp=getch();
            if(temp==89 || temp==121)
            {
                getRandomMatrix(a);
                maxMoves=RepeatMoves;
            }
        }

    }
    while(maxMoves>0);
}
int checkPlayerWon(int a[4][4])
{

    if(a[0][0]==1 && a[0][1]==2 && a[0][2]==3 && a[0][3]==4 &&
       a[1][0]==5 && a[1][1]==6 && a[1][2]==7 && a[1][3]==8 &&
       a[2][0]==9 && a[2][1]==10 && a[2][2]==11 && a[2][3]==12 &&
       a[3][0]==13 && a[3][1]==14 && a[3][2]==15 && a[3][3]==0)

        return 1;
    else
        return 0;
}
void changeTextColor(int code)
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (code & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}
