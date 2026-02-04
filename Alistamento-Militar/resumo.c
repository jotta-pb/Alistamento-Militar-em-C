#include <stdio.h>
#include "Alistamento_Militar_Masculino/alist_mili_masc.h"

void resumo(DadosPessoais *dadospessoais, Endereco *endereco, 
            Escolaridade *escolaridade, PerfilSocial *perfil){

    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf(" --- RESUMO DOS DADOS INSERIDOS --- \n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    // Dados Pessoais
    printf("--- DADOS PESSOAIS ---\n");
    printf("Nome: %s\n", dadospessoais->nome);
    printf("Data de nascimento: %s\n", dadospessoais->data_nasc);
    printf("Nome do pai: %s\n", dadospessoais->nome_pai);
    printf("Nome da mãe: %s\n", dadospessoais->nome_mae);
    printf("RG: %s\n", dadospessoais->rg);
    printf("CPF: %s\n", dadospessoais->cpf);
    printf("Email: %s\n", dadospessoais->email);
    printf("Número de telefone: %s\n\n", dadospessoais->telefone_celular);

    // Naturalidade
    printf("--- NATURALIDADE ---\n");
    printf("Estado onde reside: %s\n", endereco->estado_residencia);
    printf("Cidade: %s\n", endereco->cidade_reside);
    printf("Bairro: %s\n", endereco->bairro_reside);
    printf("Rua: %s\n", endereco->rua_reside);
    printf("CEP: %s\n", endereco->cep);
    printf("Número da casa: %s\n\n", endereco->numero_casa);

    // Escolaridade
    printf("--- ESCOLARIDADE ---\n");
    printf("Última escola: %s\n", escolaridade->escola);
    const char *niveis[] = {
        "",
        "Última escola em que estudou",
        "Ensino Fundamental Incompleto",
        "Ensino Fundamental Completo",
        "Ensino Médio Incompleto",
        "Ensino Médio Completo",
        "Ensino Superior Incompleto",
        "Ensino Superior Completo"
    };
    
    if (escolaridade->nivel_escolaridade >= 1 && escolaridade->nivel_escolaridade <= 7) {
        printf("Nível de escolaridade: %s\n\n", niveis[escolaridade->nivel_escolaridade]);
    } else {
        printf("Nível de escolaridade: Não informado\n\n");
    }

    // Perfil Social
    printf("--- PERFIL SOCIAL ---\n");
    printf("Profissão: %s\n", perfil->profissao);
    printf("Religião: %s\n", perfil->religiao);
    const char *estados_civis[] = {
        "",
        "Solteiro",
        "Namorando",
        "Casado",
        "Divorciado",
        "Separado",
        "Viúvo"
    };
    if (perfil->estado_civil >= 1 && perfil->estado_civil <= 6) {
        printf("Estado civil: %s\n\n", estados_civis[perfil->estado_civil]);
    } else {
        printf("Estado civil: Não informado\n\n");
    }

    // Características Físicas
    printf("--- CARACTERÍSTICAS FÍSICAS ---\n");
    printf("Altura: %d cm\n", dadospessoais->altura[0]);
    printf("Peso: %d kg\n\n", dadospessoais->peso[0]);

    // Escolha sobre Serviço Militar
    printf("--- ESCOLHA ---\n");
    if (dadospessoais->escolha == 1) {
        printf("Deseja prestar o Serviço Militar: SIM\n");
    } else if (dadospessoais->escolha == 0 || dadospessoais->escolha == 2) {
        printf("Deseja prestar o Serviço Militar: NÃO\n");
    } else {
        printf("Deseja prestar o Serviço Militar: Não informado\n");
    }
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

}