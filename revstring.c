//WRITE A PROGRAM TO REVERSE THE STATEMENT
//WITH DETAILED EXPLAINATION FROM DHRUV

//PREPROCESSOR INCLUDE
#include<stdio.h>
#include<string.h>
#include<ctype.h>
//MENTIONED I OUTSIDE MAIN CONDITION BECAUSE I WANT IT TO BE GLOBAL VARIABLE AND TO BE ACCESSED ANYWHERE
int i;
//STARTING OF THE MAIN FUNCTION
int main() {
    //INITIALIZING INPUT ARRAY OF 100 CAN BE CHANGED BY YOUR CHOICE AND COUNTER=0 THAT WILL BE UNDERSTOOD LATER WHY
    char input[100],counter=0;
    //TELL THE USER TO ENTER A STRING
    printf("Enter a string to reverse\n");
    //TAKE IN THE STRING USING GETS AS SCANF DOESNT ACCEPT AFTER SPACES
    gets(input);
    //START A LOOP AND WE'LL RUN THE LOOP FROM THE LAST TO THE FIRST HENCE
    //WE INITIALIZE THE I AS THE LENGTH OF THE STRING AS IT SHOULD START FROM THE LAST
    //I SHOULD BE >=0 WITHOUT WHICH IT WILL CAUSE AN INFINITE LOOP AND THE STARTING INDEX OF AN ARRAY IS 0 NOT 1
    //I-- TO DECREMENT TILL WE REACH THE FIRST LETTER OF THE ARRAY
    for (int i = strlen(input) - 1; i >= 0; i--) {
        //WE START ACCESSING LETTERS FROM THE BACK EXAMPLE
        //HELLO WORLD - SO FIRST IT ACCEESSES D THEN L ETC AND WHEN IT REACHES THE SPACE IT ENTERS THE IF CONDITION
        if (isspace(input[i]) || i==0) {
            //AFTER ENTERING THE IF WE START A LOOP TO ACCESS THE WORLD WHICH WAS ACCESSED BEFORE THE SPACE
            //REFER THE LINK FOR EXPLAINATION OF THE BELOW
            //https://youtu.be/m5rhy1RDSKk
            for (int j = i; j <= i + counter; j++) {
                printf("%c", input[j]);
            }
            counter = 0;
                printf(" ");
        } else {
            counter++;
        }
    }
    return 0;
}
