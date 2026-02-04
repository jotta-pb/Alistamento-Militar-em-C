#include <stdio.h>
#include "alist_mili_masc.h"// Importa a nova função criada separadamente.
#include "Naturalidade/naturalidade.h"
#include "Escolaridade/escolaridade.h"
#include "Perfil_Social/perfil_social.h"
#include "../resumo.c"

// Foi criada a struct no arquivo "alist-mili-masc.h". "DadosPessoais" é o nome da struct e
// "dadospessoais" é o nome da váriáel onde as variáveis dentro da struct ficam guardadas.

// Recebe ponteiros para as estruturas onde os dados serão armazenados.
void alist_mili_masc(DadosPessoais *dadospessoais, Endereco *endereco,
                     Escolaridade *dados_escolaridade, PerfilSocial *dados_perfil){
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf(" --- Alistamento Militar Masculino --- \n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    printf("[DATA ATUAL]\n");
    printf("Faltam [tantos dias] para o último dia do alistamento (30 de junho de [ano atual]\n");

    printf("Nome completo: ");
    scanf(" %49[^\n]", dadospessoais->nome);

    printf("Data de nascimento [DD/MM/AAAA]: ");
    scanf(" %s", dadospessoais->data_nasc);

    printf("CPF (Apenas números): ");
    scanf(" %s", dadospessoais->cpf);

    printf("RG: ");
    scanf(" %s", dadospessoais->rg);

    printf("Nome da completo da mãe: ");
    scanf(" %[^\n]", dadospessoais->nome_mae);

    printf("Nome completo do pai: ");
    scanf(" %[^\n]", dadospessoais->nome_pai);

    printf("E-mail para atualizações: ");
    scanf(" %s", dadospessoais->email);

    printf("Telefone celular: ");
    scanf(" %19s", dadospessoais->telefone_celular);
    
    // Ao chegar aqui o programa "pula" para o módulo de naturalidade,
    // coleta os dados de endereço e depois volta para cá.
    coletar_naturalidade(endereco);

    // Coleta informações de escolaridade
    escolaridade(dados_escolaridade);

    // Coleta informações de perfil social
    perfil_social(dados_perfil);

    printf("\n===============================\n");
    printf(" --- Características físicas --- \n");
    printf("=================================\n");

    printf("Qual a sua altura atual (cm) ? ");
    scanf("%d", &dadospessoais->altura[0]);

    printf("Qual o seu peso atual (kg) ? ");
    scanf("%d", &dadospessoais->peso[0]);

    printf("\nDESEJA PRESTAR O SERVIÇO MILITAR ? [1-SIM / 0-NÃO]: ");
    scanf("%d", &dadospessoais->escolha);


    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf(" --- Resumo Final: Verifique os dados inseridos! --- \n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    resumo(dadospessoais, endereco, dados_escolaridade, dados_perfil);

}