#include <stdio.h>
#include "escolaridade.h"

void escolaridade(Escolaridade *escolaridade){
    
    printf("Qual foi a última escola em que você estudou ?: ");
    scanf(" %59[^\n]", escolaridade->escola);
    
    printf("Selecione sua escolaridade [1-7]\n");
    printf("[1] - Última escola em que estudou\n");
    printf("[2] - Ensino Fundamental Incompleto\n");
    printf("[3] - Ensino Fundamental Completo\n");
    printf("[4] - Ensino Médio Incompleto\n");
    printf("[5] - Ensino Médio Completo\n");
    printf("[6] - Ensino Superior Incompleto\n");
    printf("[7] - Ensino Superior Completo.\n");
    
    printf("Selecionar opção: ");
    scanf(" %d", &escolaridade->nivel_escolaridade);
}