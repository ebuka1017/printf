#include "main.h"

int main(void)
{
    int len;

    len = _printf("Hello, %s!\n", "world");
    _printf("Length: %d\n", len);

    _printf("Character: %c\n", 'A');

    _printf("Percent: %%\n");

    return 0;
}

