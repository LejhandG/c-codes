#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
    char username[20],passinput[20],passsaved[20];
    int chances=3;
    printf("Enter your username:\n");
    gets(username);
    printf("Enter your password:\n");
    gets(passsaved);
    printf("Enter your password to login\n");
    for (int i = 1; i <= 3; i++)
    {
        gets(passinput);
        if(strcmp(passinput,passsaved) == 0) {
            printf("You entered the correct password! Logging you in\n");
            break;
        }
        else {
            chances--;
            if(chances==0) {
                printf("You have no attempts left!\n");
            }
            else {
                printf("Please try again!\n%d attempts left!\n",chances);
            }
        }
    }
    getch();
    // clrscr();
    return 0;
}
