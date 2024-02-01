#include "./libft/libft.h"

int main(void)
{
    int fd = open("file.txt", 0);
    ft_printf("%s",get_next_line(fd));
}

//gcc -o your_program your_program.c -L./libft -lft
