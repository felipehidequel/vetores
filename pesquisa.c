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
    
    inicializa_vetor_char(sexo);
    inicializa_vetor_char(opiniao);

    for(int pessoa = 0; pessoa < num_entrevistados; pessoa++){
        printf("Informe o seu sexo (F/M): ");
        scanf("%c", &sexo[pessoa]);

        printf("Você gostou do produto? (S/N)");
        scanf("%c", &opiniao[pessoa]);

        if sexo[pessoa] == 'F'{
            
        }
    }    

}

void inicializa_vetor_char(char * vetor, int tamanho){
    vetor = (char *) malloc (tamanho * sizeof(char *));
    if vetor == Null{
        print("memory allocation error!")
        return 1;
    }
}
