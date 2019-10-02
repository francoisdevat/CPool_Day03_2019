/*
** EPITECH PROJECT, 2019
** l'alphabet à l'envers
** File description:
** comme my print alpha mais à  l'envers
*/

void my_putchar(char c);

int my_print_revalpha(void)
{
    char lettre;
    lettre = 122;

        do
        {
            my_putchar(lettre);
            lettre--;
        } while (lettre  >= 97);
        my_putchar('\n');
}
