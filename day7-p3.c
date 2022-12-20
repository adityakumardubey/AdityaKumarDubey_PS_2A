// C program to check palindromic string by reversing and
// comparing
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter String (upto 20 characters length): ");
    scanf("%s", str);

    int strSize = strlen(str);
    if (strSize > 20) {
        printf("\nError: strSize should be less than 20 "
               "characters.");
        return 0;
    }

    // reverse 'str' and store in 'strReversed'
    char strReversed[20];
    for (int i = strSize - 1; i >= 0; --i) {
        strReversed[strSize - 1 - i] = str[i];
    }

    // comparing string, if they are equal then it's a
    // palindromic string.
    if (strcmp(str, strReversed) == 0) {
        printf("\n%s is a palindrome", str);
    }
    else {
        printf("\n%s is not a palindrome", str);
    }
    return 0;
}

