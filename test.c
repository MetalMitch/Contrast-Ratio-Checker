
#include <stdio.h>

void removeSpace(char *p, char c)
{
    char *pDest = p; //Same as p (points to start of the string

    while (*p)
    {
        if (*p != c)
        {
            *pDest++ = *p;
            p++;
        }
        *pDest = '\0';
    }
}

int main(void)
{
    char str[] = "Hello";

    printf("Before remove: %s\n", str);

    removeSpace(str, 'o');

    printf("After Remove: %s\n", str);

    return 0;
}