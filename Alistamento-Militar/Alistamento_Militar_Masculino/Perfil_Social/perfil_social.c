#include <stdio.h>
#include "perfil_social.h"

void perfil_social(PerfilSocial *perfil){
    
    printf("Qual a sua atual profissão ?: ");
    scanf(" %29[^\n]", perfil->profissao);

    printf("\nQual religião você segue ?: ");
    scanf(" %9[^\n]", perfil->religiao);

    printf("\nQual o seu estado civil atual ?: ");
    printf("\n[1] - Solteiro\n");
    printf("[2] - Namorando\n");
    printf("[3] - Casado\n");
    printf("[4] - Divorciado\n");
    printf("[5] - Separado\n");
    printf("[6] - Viúvo\n");

    printf("Selecionar opção: ");
    scanf(" %d", &perfil->estado_civil);
    
}