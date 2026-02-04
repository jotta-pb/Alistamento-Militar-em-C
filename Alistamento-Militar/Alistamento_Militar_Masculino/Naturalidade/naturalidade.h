//Header File

#ifndef NATURALIDADE_H
#define NATURALIDADE_H

// Estrutura que representa o endereço onde o jovem reside
typedef struct {
    char estado_residencia[10],
         cidade_reside[30],
         bairro_reside[30],
         rua_reside[30],
         casa_numero,
         cep[10],
         numero_casa[5];
} Endereco;

// Nome da função que será colocado no código principal.
void coletar_naturalidade(Endereco *endereco); 

#endif // Fim do bloco.