#ifndef ESCOLARIDADE_H
#define ESCOLARIDADE_H

// Estrutura que armazena os dados de escolaridade
typedef struct {
    char escola[60];
    int nivel_escolaridade; // 1-7 conforme menu
} Escolaridade;

void escolaridade(Escolaridade *escolaridade);

#endif