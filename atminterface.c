#include<stdio.h>
#include<conio.h>
int main() {
    char name[50], accno[50];
    int inibal,input=1;
    printf("Enter account holder name\n");
    gets(name);
    printf("Enter account number\n");
    gets(accno);
    printf("Enter account initial balance\n");
    scanf("%d",&inibal);
    while(input!=4) {
        printf("Choose one of the following options:\n1: Deposit Amount\n2: Withdraw Amount\n3: Mini Statemet\n4: Exit\n");
        scanf("%d",&input);
        switch (input)
    {
        case 1:
        int depamt;
        printf("Enter the amount you want to deposit\n");
        scanf("%d",&depamt);
        if(depamt>0) {
            inibal = inibal + depamt;
        }
        else {
            printf("Transaction Cancelled\n");
        }
        break;
        case 2:
        int withamt;
        printf("Enter the amount you want to withdraw\n");
        scanf("%d",&withamt);
        if(withamt>0) {
            inibal = inibal-withamt;
        }
        else {
            printf("Transaction Cancelled\n");
        }
        break;
        case 3:
        printf("Account Holder Name: %s\nAccount Number: %s\nCurrent Balance: %d\n",name,accno,inibal);
        break;
        default:
        break;
    }
    }
    getch();
    // clrscr();
    return 0;
}
