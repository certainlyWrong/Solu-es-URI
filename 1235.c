#include <stdio.h>
#include <string.h>

int main()
{
    unsigned int cases = 0;
    scanf("%u", &cases);
    setbuf(stdin, NULL);

    while(cases)
    {
        char string[101] = {};
        scanf("%[^\n]s", string);
        setbuf(stdin, NULL);
        int tam = strlen(string), i = 0;

        for (i = tam/2-1; i >= 0; i--)
            printf("%c", string[i]);
        for (i = tam-1; i >= tam/2; i--)
            printf("%c", string[i]);
        
        printf("\n");
        cases--;
    }
    return 0;
}