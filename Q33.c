#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i=0,count=0;
    char bits[50];
    printf("Enter Data bits: ");
    scanf("%s",bits);
    printf("Data bits before Bit stuffing:%s",bits);
    printf("\nData bits after bit stuffing: ");
    for(i=0;i<strlen(bits);i++){
        if(bits[i]=='1')
        count++;
        else
        count=0;
        printf("%c",bits[i]);
        if(count==5){
            printf("0");
            count=0;
        }
    }
    return 0;
}