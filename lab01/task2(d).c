#include <stdio.h>
#include <string.h>

void check(char mail[]){
    char *first=strtok(mail,"@");
    first=strtok(NULL,"@");

    if (strcmp(first,"kaaj.com")==0){
        printf("Email address is outdated");
    }else if (strcmp(first,"sheba.xyz")==0){
        printf("Email address is okay");
    }

}
int main()
{
    char mail[150],first[150];
    scanf("%s",mail);
    check(mail);
    return 0;
}
