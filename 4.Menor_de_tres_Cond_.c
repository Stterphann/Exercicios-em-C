#include<stdio.h>

int main (){

    int a, b, c;

    printf ("Primeiro valor: ");
    scanf ("%d", &a);

    printf ("Segundo valor: ");
    scanf ("%d", &b);

    printf ("Terceiro valor: ");
    scanf ("%d", &c);

    if (a < b && a < c) {
        printf ("Menor valor: %d", a);
    }
    else if (b < c) {
        printf ("Menor valor: %d", b);
    }
    else {
        printf ("Menor valor %d", c);
    }

return 0;
}
