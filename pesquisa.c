/*
Questão 1) Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou não de um
novo produto. Um número N de pessoas de ambos os sexos foi entrevistado, e o questionário
consistia em apenas duas perguntas: (i) o sexo do entrevistado (M/F) e (ii) sua opinião sobre o
produto (gostou/não gostou). Escreva um programa em C que:
a) leia as respostas contidas no questionário e armazene-as em dois arrays vinculados,
um deles contendo a resposta para a primeira pergunta e o outro contendo a resposta
para a segunda pergunta.
b) determine a porcentagem de pessoas do sexo feminino que responderam que
gostaram do produto.
c) determine a porcentagem de pessoas do sexo masculino que responderam que não
gostaram do produto.
*/

#include <stdio.h>
#include <stdlib.h>

void inicializa_vetor_char(char * vetor, int tamanho);

int main(void){
    char * sexo;
    char * opiniao;
    int num_entrevistados;
    int qtd_mulheres = 0, qtd_homens = 0;
    int mulheres_gostaram = 0, homens_nao_gostaram = 0;  

    printf("Informe o número de pessoas entrevistadas: ");
    scanf("%d", &num_entrevistados);
    
    inicializa_vetor_char(sexo, num_entrevistados);
    inicializa_vetor_char(opiniao, num_entrevistados);

    for(int pessoa = 0; pessoa < num_entrevistados; pessoa++){
        printf("Informe o seu sexo (F/M): ");
        scanf("%c", &sexo[pessoa]);

        printf("Você gostou do produto? (S/N)");
        scanf("%c", &opiniao[pessoa]);

        if(sexo[pessoa] == 'F'){
            qtd_mulheres++;
            if (opiniao[pessoa] == 'S'){
                mulheres_gostaram++;
            }
        }
    }    
    
    return 0;
}

void inicializa_vetor_char(char * vetor, int tamanho){
    vetor = (char *) malloc (tamanho * sizeof(char *));
    if( vetor == NULL){
        printf("memory allocation error!");
        exit(1);
    }
}

// void contador_mulheres(char * sexo, char * opiniao, int * qtd_mulheres, int * mulheres_gostaram){
//     if sexo == 'F'{
//             qtd_mulheres++;
//             if opiniao == 'S'{
//                 mulheres_gostaram++;
//             }
//         }
// }