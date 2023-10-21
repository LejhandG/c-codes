#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void main() {
    char *choices[3] = {"Rock", "Paper", "Scissors"};
    int humanchoice,computerchoice,times,humanpoints=0,computerpoints=0,tiepoints=0,start=1,userchoice;
    while(start) {
            printf("WELCOME TO ROCK,PAPER,SCISSORS\n");
    printf("Enter the total rounds of the game\n");
    scanf("%d",&times);
    for(int i=1;i<=times;i++) {
    while(1) {
    printf("Enter one of the choices: \n1: Rock\n2: Paper\n3: Scissors\n");
    scanf("%d",&humanchoice);
    if(humanchoice == 1 || humanchoice == 2 || humanchoice == 3) {
        break;
    }
    else {
        printf("Enter the correct option and retry\n");
    }
    }
    srand(time(NULL));
    computerchoice = (rand() % 3) + 1;
    if (computerchoice == 2 && humanchoice == 1 || computerchoice == 3 && humanchoice == 2 || computerchoice == 1 && humanchoice == 3) {
        printf("You chose: %s\nI chose: %s\nI win!\n",choices[humanchoice-1],choices[computerchoice-1]);
        computerpoints++;
    }
    else if (computerchoice == humanchoice) {
        printf("You chose: %s\nI chose: %s\nIts a tie!\n",choices[humanchoice-1],choices[computerchoice-1]);
        tiepoints++;
    }
    else {
        printf("You chose: %s\nI chose: %s\nYou win!\n",choices[humanchoice-1],choices[computerchoice-1]);
        humanpoints++;
    }
    }
    printf("STATISTICS OF THE GAME\nYou Won: %d times\nI Won: %d times\nWe had a tie: %d times\n",humanpoints,computerpoints,tiepoints);
    if(humanpoints>computerpoints) {
        printf("OVERALL THE WINNER IS: YOU!!\n");
    }
    if(humanpoints == computerpoints) {
        printf("OVERALL IT WAS A TIE! WANNA REMATCH?\n");
    }
    else {
        printf("OVERALL THE WINNER IS: ME!!\n");
    }
    printf("WANNA HAVE A REMATCH?\n1: REMATCH\n0: EXIT");
    scanf("%d",&userchoice);
    if(start == 0 || start == 1) {
        start = userchoice;
        continue;
    }
    else {
        printf("ENTER THE CORRECT OPTION: 0 TO EXIT, 1 TO REMATCH\n");
    }
    }
}
