#include<stdio.h>
#include<math.h>

int main () {

    int a, b;

    printf ("Digite dois numeros inteiros:\n");
    scanf ("%d\n", &a);
    scanf ("%d", &b);

    if (a % b == 0 || b % a == 0) {
        printf ("Sao multiplos\n");
    }
    else {
        printf ("Nao sao multiplos\n");
    }

    return 0;
}
