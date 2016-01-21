#include <stdio.h>
#include <string.h>
#include <ctype.h>
int length(char input[])
{
    int i;
    for(i=0;;i++){
        if(input[i]=='\0'){
            break;
        }
    }
    return i;
}
int main()
{
    char input[101];
    do
    {
        gets(input);

        char *before,*after;
        before=input;
        while(*before!='\0'&&isspace(*before)) before++;
        after=input+length(input)-1;
        while(after>=input&&isspace(*after)) after--;
        *(after+1)='\0';
        strcpy(input,before);
        puts(input);
    }while(strcmp(input,"END"));

    return 0;
}



