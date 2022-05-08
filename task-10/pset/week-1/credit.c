#include<stdio.h>

void main(){
    long n;
    long r1=0, r2=0, i=0, final=0, card;
    printf("NUMBER: ");
    scanf("%ld", &n);
    while(n>0){
        if(i){
            r1 = 2*(n%10);
            if(r1>=10){
                while(r1>0){
                    final+=r1%10;
                    r1/=10;
                }
            }
            else{
                final+=r1;
            }
        }    
        else{
            r2 += n%10;
        }
        n/=10;
        if(n<100 && n>=10){
            card=n;
        }
        i?i--:i++;
    }
    final+=r2;
    
    if(final%10==0){
        if(card==34 || card==37)
            printf("AMEX\n");
        else if(card==51 || card==52 || card==53 || card==54 || card==55)
            printf("MASTERCARD\n");
        else
            printf("VISA\n");
    }
    else{
        printf("INVALID\n");
    }
}