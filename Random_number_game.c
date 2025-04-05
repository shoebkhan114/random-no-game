#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main()
{
    int mode,n,number,guess,nguess=1;
    printf("***Welcome to the number guess game***\n");
    printf("       ***By SHOEB KHAN***            \n");
    printf("       select mode of game           \n");
    printf("For Easy press '1'\n");
    printf("For medium press '2'\n");
    printf("For Hard press '3'\n");
    printf("enter the mode=");
    scanf("%d",&mode);
    if(mode==1)
    {
        n=50;
    }
    else if(mode==2)
    {
        n=100;
    }
    else if(mode==3)
    {
        n=200;
    }
    else{
        printf("                              Invelid mode!                    \n");
        printf("tap any number then press enter key for exit the game and restart game");
        scanf("%d",&n);
        return 0;
    }

    srand(time(0));
    number= rand()%n+1;
    printf("guess the number bteween 1 to %d\n",n);
    do
    {
        scanf("%d",&guess);
        if(guess<number)
        {
            printf("Choose the bigger number!\n");
        }
        else if(guess>number)
        {
            printf("Choose the lower number!\n");
        }
        else{
            printf("      ****_Congratulation_****    \n");
            printf("Guess the number in your %d attempts",nguess);
        }
        nguess++;
    }
     while(guess!=number);
    getch();

}
