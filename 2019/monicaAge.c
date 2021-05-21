#include <stdio.h>
#include <stdlib.h>

/* 
    Gabriela Tomaz do Amaral Ribeiro - 20200543
*/

/* 
    A idade de Dona Mônica
*/

int main() {
    int m,
        older,
        ages[3],
        i;

    printf("Insira a idade de Dona Mônica: ");
    scanf("%d", &m);

    for (i = 0; i < 2; i++)
    {
        printf("Insira a idade do filho %d: ", i + 1);
        scanf("%d", &ages[i]);
    }

    ages[2] = m - (ages[0] + ages[1]);
    
    older = ages[0];
    for (i = 1; i < 3; i++)
        if (ages[i] > older) older = ages[i];

    printf("%d", older);
   
    return 0;
}

/* 
    Gabriela Tomaz do Amaral Ribeiro - 20200543
*/
