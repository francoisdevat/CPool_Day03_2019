/*
** EPITECH PROJECT, 2019
** alphabet
** File description:
** alphabet pour la task 1
*/

void my_putchar(char c);

int my_print_alpha(void)
{
    char lettre;
    lettre = 97;
        
    do
    {
        my_putchar(lettre);
        lettre++;
    } while (lettre <= 122); 
    my_putchar('\n');
}

