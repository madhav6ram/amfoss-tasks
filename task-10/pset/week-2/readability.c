#include <stdio.h>
#include <string.h>
#include <math.h>
#include <cs50.h>

int main(){

    double letters=0, words=0, sentences=0;

    string s = get_string("Text: ");
    for(int i=0; i<strlen(s); i++){
        if(s[i] == ' ' || (i==strlen(s)-1)){
            words++;
        }
        if(s[i] == '.' || s[i] == '!' || s[i] == '?'){
            sentences++;
        }
        else if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
            letters++;
        }
    }

    printf("\n%f letter(s)\n%f word(s)\n%f sentence(s)\n", letters, words, sentences);

    double L, S;
    L = 100.0*letters/words;
    S = 100.0*sentences/words;

    double index = 0.0588 * L - 0.296 * S - 15.8;
    int int_index = round(index);

    if(int_index<1){
        printf("Before Grade 1\n");
    }
    else if(int_index>=16){
        printf("Grade 16+\n");
    }
    else{
        printf("Grade %d\n", int_index);
    }

    return 0;
}