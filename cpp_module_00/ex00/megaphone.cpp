#include <iostream>

char to_upper(char c)
{
    if (c <= 'z' && c >= 'a')
            return (c - 32);
    return (c);
}

int main(int ac, char **av)
{
    (void)ac;

    if (ac > 1)
    {
        for (int i = 1; av[i]; i++)
        {
            for (int j = 0;av[i][j]; j++)
            {
                std::cout << to_upper(av[i][j]);
            }
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
}