#include <stdio.h>
#include <string.h>
void vowel(char str[]);
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    vowel(str);
    return 0;
}
void vowel(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    printf("total vowels in string is: %d", count);
}