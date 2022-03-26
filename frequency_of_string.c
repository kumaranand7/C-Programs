#include <stdio.h>
int main() {
    char str[50], ch;
    int count=0;

    printf("Enter a string:");
    gets(str);

    printf("Enter a character: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (ch == str[i])
            count++;
    }

    printf("number of times %c in %s is %d", ch,str, count);
    return 0;
}