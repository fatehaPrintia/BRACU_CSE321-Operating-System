#include<stdio.h>
#include <string.h>
void palindrome(char*pal)
{
    int len=strlen(pal);
	char *forward ,*backword;
    forward=pal;
    backword=forward+len-1;
    for (forward=pal; backword>=forward;)
    {
        if (*forward==*backword)
        {
        forward++;
        backword--;
        }
        else{
        break;
        }
    }

    if (forward>backword){
          printf("Palindrome");
        }

    else{
    printf(" Not Palindrome");

    }
}

int main()
{
    char pal[10000];
    scanf("%s",pal);
    palindrome(pal);
    return 0;
}
