#include <stdio.h>
#include <string.h>

int main()
{
    char str[24] = "JOMO KENYATTA";
    int n = strlen(str);
    int i;

    for (i=n-1; i>=0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}
