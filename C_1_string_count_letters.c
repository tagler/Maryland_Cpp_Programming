#include <stdio.h>
#include <string.h>

int main()
{
    char word[100], first_letter;
    int length, n=0;
    
    printf("input a string with no spaces please: ");
    scanf("%s", word);
    
    length = strlen(word);
    first_letter = word[0];
    
    for (int i=0; i<length; i++)
    {
        if (word[i] == first_letter)
        {
            n++;
        }
    }
    
    printf("'%c' appears %d times in the string '%s' \n", first_letter, n, word);
    return 0;
}

