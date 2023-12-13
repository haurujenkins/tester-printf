/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-pier <lle-pier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:49:00 by lle-pier          #+#    #+#             */
/*   Updated: 2023/11/30 11:27:15 by lle-pier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int successfulComparisons = 0;

void compareResults(int ft_result, int std_result) {
    if (ft_result == std_result) {
        printf("  \033[32m\u2713\033[0m"); // Afficher une coche verte
        successfulComparisons++;
    } else {
        printf("  \033[31m\u2717\033[0m"); // Afficher une croix rouge
    }
}

void printYellow(const char *label, const char *text, int value) {
    printf("\033[33m%s%s%i\033[0m", label, text, value); // Texte jaune
}

void printFunnyFace() {
    printf("\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⢞⣩⡿⠿⠶⢤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⠻⠇⠀⠀⠀⠀⠈⠙⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢳⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⡀⠀⢀⡴⠚⠉⠓⢦⡴⠒⠉⠲⣟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⢀⡤⠖⢾⡛⢳⡄⠀⠀⠀⠀⠀⠀⠀⠀⣸⣇⢀⣸⠐⠶⠀⠀⠀⠃⠀⠀⠰⢿⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⢋⣽⠶⣤⠀⠀⠀⠀\n");
    printf("⢀⣴⠟⠧⣀⡴⠛⠉⠛⣆⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⠘⢦⡀⠀⢀⡠⠋⠉⢉⣷⡏⠀⠀⠀⠀⠀⠀⠀⠀⡴⢟⠉⠻⣄⡤⠚⠳⣄⠀⠀\n");
    printf("⢸⠉⣧⡄⢹⣄⣀⡼⠀⣿⠀⠀⠀⠀⠀⠀⠀⣻⣿⡯⠀⠀⣩⡽⠟⠒⠒⠚⠉⠙⠳⣤⣤⣄⠀⠀⠀⠀⠀⡇⠈⠳⣤⣿⠀⣠⡏⡿⠀⠀\n");
    printf("⠈⢧⣈⠙⠋⠀⠹⠀⠀⠉⠳⣄⠀⠀⠀⠀⠀⢳⣚⣃⣀⡼⠁⠀⠀⠀⠀⠀⠀⠀⠀⣼⢃⡟⠀⠀⠀⣠⠾⠁⠀⠸⠁⠈⠙⣩⠞⠁⠀⠀\n");
    printf("⠀⠀⠉⠳⣆⠀⠀⠀⠀⠀⠀⠈⠳⣤⡀⠀⠀⡇⠰⡇⠀⠀⠀⠀⠀⠀⠀⠀⣀⣻⡿⠀⢀⡴⠚⠁⠀⠀⠀⠀⠀⢀⡞⠁⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠘⢧⡀⠀⠀⠀⠀⠀⠀⠀⠈⠛⡟⢶⡷⠶⠶⠾⠿⣶⣖⠒⠉⡿⢴⡋⠉⠉⠓⢦⡀⠀⠀⠀⠀⣀⡼⠃⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠈⠳⣄⠀⠀⠀⠀⠀⠀⠀⠈⠛⡟⢶⡷⠶⠶⠾⠿⣶⣖⠒⠉⡿⢴⡋⠉⠉⠓⢦⡀⠀⠀⠀⠀⣀⡼⠃⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠈⢷⣄⠀⠀⠀⠀⠀⠀⣼⠁⠀⠹⣆⠀⠀⢠⠇⠉⢷⣀⣿⡋⢳⠀⠀⠀⠀⠹⣄⠀⢀⡴⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⣄⠀⠀⢀⡼⠁⠀⠀⠀⢹⡖⠒⠞⠀⠀⠀⠙⠀⢹⡍⠀⠀⠀⠀⠀⠘⡖⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢻⡶⠋⠀⠀⠀⠀⠀⠀⣷⠀⠀⠀⠀⠀⠀⠀⠀⢷⡀⠀⠀⠀⢀⡴⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⢤⣀⡀⠀⠀⠀⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀⢾⣇⣠⠴⠚⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣨⠟⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸                                                \n");
}

void printAsciiArt() {
    printf("─▄▀▀▀▀▄─█──█────▄▀▀█─▄▀▀▀▀▄─█▀▀▄\n");
    printf("─█────█─█──█────█────█────█─█──█\n");
    printf("─█────█─█▀▀█────█─▄▄─█────█─█──█\n");
    printf("─▀▄▄▄▄▀─█──█────▀▄▄█─▀▄▄▄▄▀─█▄▄▀\n\n");

    printf("─────────▄██████▀▀▀▀▀▀▄\n");
    printf("─────▄█████████▄───────▀▀▄▄\n");
    printf("──▄█████████████───────────▀▀▄\n");
    printf("▄██████████████─▄▀───▀▄─▀▄▄▄──▀▄\n");
    printf("█████████████████──▄▀─▀▄▄▄▄▄▄────█\n");
    printf("███████████████──▄▀─▀▄▄▄▄▄▄──────█\n");
    printf("█████████████████▀█──▄█▄▄▄───────█\n");
    printf("███████████──█▀█──▀▄─█─█─█───────█\n");
    printf("████████████████───▀█─▀██▄▄──────█\n");
    printf("█████████████████──▄─▀█▄─────▄───█\n");
    printf("█████████████████▀███▀▀─▀▄────█──█\n");
    printf("████████████████──────────█──▄▀──█\n");
    printf("████████████████▄▀▀▀▀▀▀▄──█──────█\n");
    printf("████████████████▀▀▀▀▀▀▀▄──█──────█\n");
    printf("▀████████████████▀▀▀▀▀▀──────────█\n");
    printf("──███████████████▀▀─────█──────▄▀\n");
    printf("──▀█████████████────────█────▄▀\n");
    printf("────▀████████████▄───▄▄█▀─▄█▀\n");
    printf("──────▀████████████▀▀▀──▄███\n");
    printf("──────████████████████████─█\n");
    printf("─────████████████████████──█\n");
    printf("────████████████████████───█\n");

    printf("─────────────█─────█─█──█─█───█\n");
    printf("─────────────█─────█─█──█─▀█─█▀\n");
    printf("─────────────█─▄█▄─█─█▀▀█──▀█▀\n");
    printf("─────────────██▀─▀██─█──█───█\n");
}

int main(void)
{
    int i;
    int jjjj;

    i = ft_printf("test simple de ma fonction");
    printYellow(" --- mon retour : ", "", i);
    printf("\n");
    jjjj = printf("test simple de la fonction");
    printYellow(" --- son retour : ", "", jjjj);
    compareResults(i, jjjj);
    printf("\n\n");

    i = ft_printf("test mix de ma fonction : %c %d %i %u %s %p %x %X", 'a', 42, 43, 44, "hello", NULL, 456, 456);
    printYellow(" --- mon retour : ", "", i);
    printf("\n");
    jjjj = printf("test mix de la fonction : %c %d %i %u %s %p %x %X", 'a', 42, 43, 44, "hello", NULL, 456, 456);
    printYellow(" --- son retour : ", "", jjjj);
    compareResults(i, jjjj);
    printf("\n\n");

    i = ft_printf("test de mes %%i : %i %i %i %i %i", NULL, 0, 2147483647, -2147483648, -42);
    printYellow(" --- mon retour : ", "", i);
    printf("\n");
    jjjj = printf("test de ses %%i : %i %i %i %i %i", NULL, 0, 2147483647, -2147483648, -42);
    printYellow(" --- son retour : ", "", jjjj);
    compareResults(i, jjjj);
    printf("\n\n");

    i = ft_printf("test de mes %%c : %c %c %c %c %c", 'a', '9', 0, '    ', '@');
    printYellow(" --- mon retour : ", "", i);
    printf("\n");
    jjjj = printf("test de ses %%c : %c %c %c %c %c", 'a', '9', 0, '    ', '@');
    printYellow(" --- son retour : ", "", jjjj);
    compareResults(i, jjjj);
    printf("\n\n");

    i = ft_printf("test de mes %%d : %d %d %d %d %d", NULL, 0, 2147483647, -2147483648, -42);
    printYellow(" --- mon retour : ", "", i);
    printf("\n");
    jjjj = printf("test de ses %%d : %d %d %d %d %d", NULL, 0, 2147483647, -2147483648, -42);
    printYellow(" --- son retour : ", "", jjjj);
    compareResults(i, jjjj);
    printf("\n\n");

    i = ft_printf("test de mes %%u : %u %u %u %u %u", NULL, 0, -1, -2147483648, 456);
    printYellow(" --- mon retour : ", "", i);
    printf("\n");
    jjjj = printf("test de ses %%u : %u %u %u %u %u", NULL, 0, -1, -2147483648, 456);
    printYellow(" --- son retour : ", "", jjjj);
    compareResults(i, jjjj);
    printf("\n\n");

    i = ft_printf("test de mes %%s : %s %s %s %s %s", NULL, "012345678910", "Hello", "a", "!@#$%cs");
    printYellow(" --- mon retour : ", "", i);
    printf("\n");
    jjjj = printf("test de ses %%s : %s %s %s %s %s", NULL, "012345678910", "Hello", "a", "!@#$%cs");
    printYellow(" --- son retour : ", "", jjjj);
    compareResults(i, jjjj);
    printf("\n\n");

    char    p = "bonjour";
    char    r = 'a';
    char    *pointeur = p;
    char    *pt2 = r;

    i = ft_printf("test de mes %%p : %p %p %p", NULL, pointeur, pt2);
    printYellow(" --- mon retour : ", "", i);
    printf("\n");
    jjjj = printf("test de ses %%p : %p %p %p", NULL, pointeur, pt2);
    printYellow(" --- son retour : ", "", jjjj);
    compareResults(i, jjjj);
    printf("\n\n");

    i = ft_printf("test de mes %%x : %x %x %x %x %x", pointeur, 0, -1, -2147483648, 456);
    printYellow(" --- mon retour : ", "", i);
    printf("\n");
    jjjj = printf("test de ses %%x : %x %x %x %x %x", pointeur, 0, -1, -2147483648, 456);
    printYellow(" --- son retour : ", "", jjjj);
    compareResults(i, jjjj);
    printf("\n\n");

    i = ft_printf("test de mes %%X : %X %X %X %X %X", pt2, 0, -1, -2147483648, 456);
    printYellow(" --- mon retour : ", "", i);
    printf("\n");
    jjjj = printf("test de ses %%X : %X %X %X %X %X", pt2, 0, -1, -2147483648, 456);
    printYellow(" --- son retour : ", "", jjjj);
    compareResults(i, jjjj);
    printf("\n\n");

    if (successfulComparisons == 10) {
        printf("\033[32mBRAVO! Tous les tests ont réussi.\033[0m\n");
        printFunnyFace();
    } else {
        printf("\033[31mFAIL! Au moins une comparaison a échoué.\033[0m\n");
        printAsciiArt();
    }
}

