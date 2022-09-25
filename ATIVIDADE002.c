#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main () {
    setlocale(LC_ALL,"Portuguese");

    int idade;

    printf ("\nInforme a idade do eleitor: ");
    scanf ("%d", &idade);

    if (idade <0){
        printf("\nNão Nasceu\n");
    }else{
        if (idade <16) {
            printf ("\nNão Vota\n");
        }else{
            if (idade <18) {
                printf ("\nOpcional\n");
            }else
            if (idade <65) {
                if (idade == 41) {
                    printf ("\nNão Vota - ganha premio\n");
                } else {
                    printf ("\nObrigatorio\n");
                }
            }else {
                if (idade == 88) {
                        printf ("\nNão Vota - Ganha Premio\n");
                }else {
                    printf ("\nOpcional\n");

                }
            }
        }
    }

    return 0;
}
