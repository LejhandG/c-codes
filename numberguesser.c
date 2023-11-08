#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int input,counter=0,chances=3,inputarr[3];
    srand(time(NULL));
    int correct_answer = (rand() % 100) + 1;
    printf("Enter a number to guess from 1-100\n");
    for (int i = 1; i <=3 ; i++)
    {
        scanf("%d",&input);
        if(input==correct_answer) {
            printf("The number was: %d\nYou guessed %d\nWELL DONE!!",correct_answer,input);
            break;
        }
        else {
            chances--;
            printf("Better luck next time!\nYou have %d more chances left\n",chances);
            inputarr[i-1] = input;
        }
    }
    if (chances == 0)
    {
        printf("You chose:\n");
        for(int i = 0; i < 3; i++)
        {
            printf("%d\t",inputarr[i]);
        }
        printf("\nAnd the correct option was: %d\nBetter luck next time!",correct_answer);
    }
    getch();
    // clrscr();
    return 0;
}
