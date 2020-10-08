#include <unistd.h>

void    bm_putstr(char *str)
{
    int index;

    index = 0;
    while(str[index])
        write(1, &str[index++], 1);
}

int main(void)
{
    bm_putstr("Hello world! Nice to meet you! :-)");
    write(1, "\n", 1);
    return (0);
}
