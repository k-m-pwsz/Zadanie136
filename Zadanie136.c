#include <stdio.h>
#include <stdlib.h>

#define TRUE    1
#define FALSE   0

#define OPCJA_PROSTOPADLOSCIAN 1
#define OPCJA_OSTROSLUP   2
#define OPCJA_WYJSCIE   0

void prostopadloscian();
void ostroslup();

int main() {
    int wybrana_opcja, wyjscie_z_programu;

    wyjscie_z_programu = FALSE;
    while(TRUE) {
        printf("Opcje programu:\n");
        printf("===============\n");
        printf("%d %s\n", OPCJA_PROSTOPADLOSCIAN,  " - pole prostopadloscianu");
        printf("%d %s\n", OPCJA_OSTROSLUP,    " - pole ostroslupa prawidlowego czworokatnego");
        printf("%d %s\n", OPCJA_WYJSCIE,    " - koniec");
        printf("\nPodaj kod polecenia: ");
        scanf("%d", &wybrana_opcja);

        switch(wybrana_opcja) {
            case OPCJA_PROSTOPADLOSCIAN:   prostopadloscian();          break;
            case OPCJA_OSTROSLUP:     ostroslup();            break;
            case OPCJA_WYJSCIE:     wyjscie_z_programu = TRUE;  break;
            default:                printf("Niepoprawny kod polecenia.\n");
        }
        if (wyjscie_z_programu == TRUE)
            break;
    }

    return EXIT_SUCCESS;
}

void prostopadloscian() {
    float a;
    float b;
    float c;
    float pole_prostopadloscianu;
    printf ("Podaj dlugosc boku a\n");
    scanf ("%f", &a);
    printf ("Podaj dlugosc boku b\n");
    scanf ("%f", &b);
    printf("Podaj dlugosc boku c\n");
    scanf("%f", &c);

    pole_prostopadloscianu = ((2*a*b)+(2*a*c)+(2*b*c));

    printf("Pole prostopadloscianu wynosi:%f\n", pole_prostopadloscianu);


}

void ostroslup() {
    /* TODO - osoba3 */

    /* TODO - w³aœciwe obliczanie pola zrealizowaæ poprzez dedykowan¹ funkcjê */

}
