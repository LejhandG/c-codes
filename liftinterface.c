#include<stdio.h>
#include<conio.h>
int main() {
    int input=0;
    while (input!=-1)
    {
        printf("Enter the floor you want to go to! From 0-5\nEnter -1 to exit\n");
        scanf("%d",&input);
        switch(input) {
            case -1:
            break;
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            printf("Taking you to %d floor\n",input);
            break;
            default:
            printf("Wrong input! Please try again!\n");
        }
    }
    return 0;
}
