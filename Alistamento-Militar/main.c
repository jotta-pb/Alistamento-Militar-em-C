#include <stdio.h>

#include <locale.h> // Biblioteca para configurar localização (acentos, formatação de data/número, etc.)

// Header do módulo de alistamento masculino: define os tipos DadosPessoais, Endereco
// e o protótipo da função alist_mili_masc. ([Nome da pasta/[Nome do arquivo.h])
#include "Alistamento_Militar_Masculino/alist_mili_masc.h"

int main()
{
    // Define localização para português (mensagens, possivelmente acentuação, etc.)
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    // Estruturas que vão armazenar os dados pessoais, endereço,
    // escolaridade e perfil social do jovem que está fazendo o alistamento.
    DadosPessoais dados;
    Endereco endereco;
    Escolaridade escolaridade;
    PerfilSocial perfil;
    
    printf("=============================\n");
    printf(" --- Alistamento Militar --- \n");
    printf("=============================\n");
    
do {
    
    printf("\nJovem, em qual dessas situações você se encontra ?\n\n");
    printf("[1] - Exterior: Moro no exterior.\n");
    printf("[2] - Problema de saúde: Sou pessoa com deficiência.\n");
    printf("[3] - Alistamento Militar Feminino: Alistamento militar para o segmento feminino.\n");
    printf("[4] - Alistamento Militar Masculino: Não me encaixo em nenhum dos itens anteriores, continue para o meu alistamento.\n");
    printf("[0] - Sair do programa.\n");
    
    printf("Selecionar opção: ");
    scanf("%d", &opcao);
    
    
    // O número armazenado na variável "opcao" será usado para as comparações.
    switch(opcao){
    
    case 1:
        printf("Exterior (POR FAZER)");
    break;
    
    case 2:
        printf("Problema de saúde (POR FAZER)");
    break;
    
    case 3:
        printf("Alistamento Militar Feminino (POR FAZER)");
    break;
    
    case 4:
        // Encaminha para o fluxo de alistamento masculino,
        // preenchendo as estruturas de dados, endereço, escolaridade e perfil social.
        alist_mili_masc(&dados, &endereco, &escolaridade, &perfil);
    break;
    
    case 0:
        printf("Programa encerrado.");
    break;

    default:
        printf("Selecione apenas opções de 1 - 4\n");
    }
// Enquanto a opção for menor que 0 ou maior que 4, repete o menu.
}while(opcao < 0 || opcao > 4 );
    
return 0;
}