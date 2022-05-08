#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 
void showInput(int choice){
 
     switch(choice){
 
        case 0:
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||   %cO/",'\\');
            printf("\n\t||    | ");
            printf("\n\t||   / %c",'\\');
            printf("\n\t||      ");
            break;
        case 1:
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||   %cO/",'\\');
            printf("\n\t||    | ");
            printf("\n\t||     %c",'\\');
            printf("\n\t||      ");
            break;
        case 2:
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||   %cO/",'\\');
            printf("\n\t||    | ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            break;
        case 3:
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||   %cO/",'\\');
            printf("\n\t||      ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            break;
        case 4:
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||   %cO ",'\\');
            printf("\n\t||      ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            break;
        case 5:
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||    O ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            break;
     }
}
 
 
int main(){
 
    int gameCount, score = 0;
    printf("\n\nEnter number of rounds of Guessing Game: \n\n");
    scanf("%d", &gameCount);
    int originalScore = gameCount;
 
    while(gameCount--){
 
        char inputWord[200];
        char finalOutput[200];
        int wrongTry, matchFound = 0;
        int winner, length;
        char alphabetInput;
 
        system("cls");
        printf("\n\n !!!!!!!!!!!!!!!!!!!Welcome to the Guessing Game!!!!!!!!!!!!!!!!!\n\n\n");
 
        printf("\n\n Enter number of wrong attempts allowed: ");
        scanf("%d",&wrongTry);
 
        printf("\nEnter any word in small letters and press ENTER");
        printf("\nEnter ==>  ");
        fflush(stdin);
        scanf("%s",inputWord);
 
        printf("\nLets start ask your friend to play!!!");
        printf("\nPress Enter");
        getchar();
 
        length = strlen(inputWord);
        wrongTry++;
 
        system("cls");
 
        printf("\n\n You will get %d chances to guess the correct word", wrongTry+length);
        printf("\n\n So help Alen and Joseph and get...set...GO..!!");
        printf("\n\n Press enter ");
        getchar();
        system("cls");
 
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");
 
        printf("\n\n The word has %d alphabets \n\n",length);
        for(int i = 0; i < length ; i++)
        {
            finalOutput[i] = '_';
            finalOutput[length] = '\0';
        }
 
        while(wrongTry != 0){
 
            for(int i = 0; i < length; i++)
            {
                printf(" ");
                printf("%c",finalOutput[i]);
            }
 
            printf("\n\n Enter an alphabet from a to z in lower case!!");
            printf("\n\n\t Enter ->  ");
 
            fflush(stdin);
            scanf("%c", &alphabetInput);
            printf("\n");
 
            if((alphabetInput < 'a') || (alphabetInput > 'z')){
                system("cls");
                printf("\n\n\t Wrong input, try again ");
                continue;
            }
 
            matchFound = 0;
            for(int counter = 0; counter < length; counter++)
            {
                if(alphabetInput == inputWord[counter]){
                    finalOutput[counter] = alphabetInput;
                    matchFound = 1;
                }
            }
            if(matchFound == 0){
                system("cls");
                printf("\n\n\t Wrong :( You have %d tries left ", --wrongTry);
                showInput(wrongTry%5);
            }
 
            winner = strcmp(finalOutput,inputWord);
 
            if(winner == 0)
            {
                score++;
                system("cls");
                printf("\n\n\t Nice You are the WINNER !!!!!");
                printf("\n\n\t The Word was %s ",inputWord);
                printf("\n\n\t EASY HUH???\n\n");
                getchar();
                break;
            }
        }
        if(wrongTry <= 0)
        {
            printf("\n\n\t The Word was %s ",inputWord);
            printf("\n\n\t Better luck next round");
            printf("\n\n\t Press Enter");
            getchar();
        }
        getchar();
    }
    system("cls");
    printf("\n\n\t The Game Score %d / %d", score, originalScore);
    getchar();
    return 0;
}
 