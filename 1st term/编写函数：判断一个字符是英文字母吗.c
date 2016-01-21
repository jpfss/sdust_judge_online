#include<stdio.h>
#include<ctype.h>

int is_alpha(char tmp){
    return isalpha(tmp);
}


int main()
{
    char ch;
    scanf("%c", &ch);
    printf("%s",
            ( is_alpha(ch) ? "Yes, it is a letter."
                          : "No, it is not a letter." )
          );
    return 0;
}
