#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <cs50.h>

int main(int argc, char **argv){
    //test arguments
    if(argc!=2){
        printf("Usage: ./substitution key");
        return 1;
    }
    else if(strlen(argv[1])!=26){
        printf("Key must contain 26 characters.");
        return 1;
    }
    else{
        string k = argv[1];
        for(int i=0; i<strlen(k); i++){
            if(!isalpha(k[i])){
                printf("Key must contain 26 unique alphabets)");
                return 1;
            }
            for(int j=i+1; j<strlen(k); j++){
                if(tolower(k[i]) == tolower(k[j])){
                    printf("Key must contain 26 unique alphabets");
                    return 1;
                }
            }
        }
    }

    string key = argv[1];
    string ptext = get_string("plaintext: ");
    char ctext[strlen(ptext)];

    //encrypt
    for(int i=0; i<strlen(ptext); i++){

        char c = ptext[i];

        if(isalpha(c) && islower(c)){
            //indices a=0, b=1 ... z=26
            ctext[i] = tolower(key[c-97]);
        }else if(isalpha(c) && isupper(c)){
            ctext[i] = toupper(key[c-65]);
        }else{
            ctext[i] = c;
        }
    }

    printf("ciphertext: %s\n", ctext);

    return 0;
}
