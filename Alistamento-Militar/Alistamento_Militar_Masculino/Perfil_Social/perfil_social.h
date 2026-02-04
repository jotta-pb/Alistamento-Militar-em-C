#ifndef PERFIL_SOCIAL_H
#define PERFIL_SOCIAL_H

// Estrutura que armazena os dados do perfil social
typedef struct {
    char profissao[30];
    char religiao[10];
    int estado_civil; // 1-6 conforme menu
} PerfilSocial;

void perfil_social(PerfilSocial *perfil);

#endif