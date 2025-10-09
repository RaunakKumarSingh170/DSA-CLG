#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="abcbjfbebf";
    int freq[256] = {0}; // Array to store frequency of all characters
    int i, max = 0;
    char maxChar;

    // Count frequency of each character
    for(i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    // Find character with maximum frequency
    for(i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            maxChar = i;
        }
    }

    printf("Most frequent character is '%c' and it appears %d times\n", maxChar, max);
    return 0;
}
