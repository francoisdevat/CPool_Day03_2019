/*
** EPITECH PROJECT, 2019
** les nombres croissant
** File description:
** cette fois c'est les chiffres
*/

void my_putchar(char c);

int my_print_digits(void)
{
    char chiffre;
    chiffre = '1';
    
    do
    {
        my_putchar(chiffre);
        chiffre++;
    }while (chiffre <= '9');
    my_putchar('\n');
}
