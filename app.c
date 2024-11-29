#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
void main()
{
    char *sides[]={"Heads","Tails"};
    int PlayersGuess,ComputerToss;
    char PlayAgain;

    srand(time(0));

    do
    {

    printf("Welcome to the Coin Toss Game!");
    printf("\nEnter the outcome:");
    printf("\n1:Heads:\n2:Tails:\nEnter your choice:");
    scanf("%d",&PlayersGuess);

    ComputerToss=rand() % 2;

        printf("The coin landed on = %s\n",sides[ComputerToss]);

        if(PlayersGuess==ComputerToss)
        {
            printf("Congratulations! You Win The Game!");
        }

        else
        {
            printf("Please Try Again!");
        }

        printf("\nDo you want to play again: (y/n):");
        scanf(" %c",&PlayAgain);
    }
    while(PlayAgain=='y' || PlayAgain=='Y');
    getch();
    }