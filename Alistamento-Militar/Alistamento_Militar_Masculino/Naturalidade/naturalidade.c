#include <stdio.h>
#include "naturalidade.h" // Importa a fução criada; "o contrato".
                         // Usa-se aspas "" em vez de <> para indicar ao compilador que este arquivo está na sua pasta, e não nas pastas do sistema.


// A função é aberta (com o nome definido no arquivo "header") e tudo que ficar dentro das chaves é o que seŕ imporatado para o código principal.

// Como não há início de função (int main(){}) a função criada fica no "void", no "vazio".
void coletar_naturalidade(Endereco *endereco){

    
    printf("\n======================\n");
    printf(" --- Naturalidade --- \n");
    printf("======================\n");

    printf("Estado onde reside: ");
    scanf(" %s", endereco->estado_residencia);

    printf("CEP (Apenas números): ");
    scanf(" %9s", endereco->cep);

    printf( "Cidade: ");
    scanf(" %s", endereco->cidade_reside);

    printf("Bairro: ");
    scanf(" %s", endereco->bairro_reside);

    printf("Rua: ");
    scanf(" %s", endereco->rua_reside);

    printf("\nNúmero da casa:\nA casa possui número ? [S/N]: ");
    scanf(" %c", &endereco->casa_numero);
    
    if (endereco->casa_numero == 'S' || endereco->casa_numero == 's'){
        printf("Digite o número da casa: "); 
        scanf("%s", endereco->numero_casa);
    }
    else if (endereco->casa_numero == 'N' || endereco->casa_numero == 'n'){
        printf("Casa sem número. (Pressione a tecla [Enter])");
    }

} //Fim da função.