#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hii";
    char newstr[10];
    int ln= strlen(str);
    for(int i=0;str[i]!='\0';i++){
        newstr[i]=str[i];
    }
    printf("%s",newstr);
}

