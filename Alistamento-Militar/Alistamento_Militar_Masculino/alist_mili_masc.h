#ifndef ALIST_MILI_MASC_H
#define ALIST_MILI_MASC_H

// Precisa do tipo Endereco para declarar a função alist_mili_masc
#include "Naturalidade/naturalidade.h"
#include "Escolaridade/escolaridade.h"
#include "Perfil_Social/perfil_social.h"

// Estrutura que armazena os dados pessoais do jovem
typedef struct {
    char nome[50],
         data_nasc[10],
         nome_mae[50],
         nome_pai[50],
         rg[15],
         cpf[15],
         email[50],
         telefone_celular[20];
    
    int  altura[3],
         peso[3],
         escolha;
} DadosPessoais;

// Função principal do fluxo de alistamento masculino
void alist_mili_masc(DadosPessoais *dadospessoais, Endereco *endereco, 
                     Escolaridade *dados_escolaridade, PerfilSocial *dados_perfil);

#endif