#include<stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char pass[500];
    int uppercase=0;
    int lowercase=0;
    int digit=0;
    int character=0;
    int i=0;
    scanf("%s",pass);


    int len = strlen(pass);
    for (i=0;i<len;i++){
        if (isupper(pass[i])){
            uppercase=1;
        }
        if (islower(pass[i])){
            lowercase=1;
        }

        if (pass[i]>=48 && pass[i]<=57){
            digit=1;
        }
        if (pass[i]=='#' || pass[i]=='@' || pass[i]=='_' || pass[i]=='$'){
            character=1;

        }


    }

    if(uppercase>0 && lowercase>0 && digit>0 && character>0){
        printf("OK");
    }
    if (uppercase==0 ){
        printf("Uppercase character missing, ");
    }
    if (lowercase==0){
        printf("lowercase is missing, ");
    }
    if (digit==0){
        printf("Digit missing, ");
    }
    if (character==0){
        printf("Special character missing");
    }
}
