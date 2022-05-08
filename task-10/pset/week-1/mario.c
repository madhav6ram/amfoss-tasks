#include<stdio.h>

void main(){
    int n;
    do{
        printf("Height: \n");
        scanf("%d", &n);
    }while(n<1 || n>8);
    
    for(int i=1; i<=n; i++){
        for(int a=1; a<=n-i; a++)
            printf(" ");
        for(int b=1; b<=i; b++)
            printf("#");
            
        printf("  ");
        
        for(int b=1; b<=i; b++)
            printf("#");
        printf("\n");
    }
}