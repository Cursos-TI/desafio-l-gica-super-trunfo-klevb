#include <stdio.h>

int main() {
    
    // aqui estão inceridos todos os valores que serão utilizados.
    
    char pais1[100], pais2[100];
    int populacao1, area1, PIB1, numerodepontosturisticos1;
    int populacao2, area2, PIB2, numerodepontosturisticos2;

    // são as informações que apareceram ao jogador para criar as cartas.
    // entradas de dados do pais 1.

    //entrada para nome do pais.
    printf("Qual o nome do pais?: ");
    scanf("%s", pais1);
    
    //entrada para pupulação.
    printf("Qual a população do pais 1?: ");
    scanf("%d", &populacao1);
    
    //entrada paraarea territorial.
    printf("Qual a área territorial do pais 1?: ");
    scanf("%d", &area1);

     //entrada para PIB do pais.
    printf("Qual o PIB do pais 1?: ");
    scanf("%d", &PIB1);

    //entrada pera pontos turisticos.
    printf("Quantos pontos turísticos o pais 1 tem?: ");
    scanf("%d", &numerodepontosturisticos1);

    //entrada de dados para a pais 2.
    printf("\nQual o nome do pais 2?: ");
    scanf("%s", pais2);
     
     //entrada para pupulação.
    printf("Qual a população do pais 2?: ");
    scanf("%d", &populacao2);
  
    //entrada para o território
    printf("Qual a área territorial do pais?: ");
    scanf("%d", &area2);
    
    //entrada para o PIB
    printf("Qual o PIB do pais?: ");
    scanf("%d", &PIB2);
    
    // entrada para pontos turisticos.
    printf("Quantos pontos turísticos o pais 2 tem?: ");
    scanf("%d", &numerodepontosturisticos2);

    // aqui é feita a comparação dos dados.
    //a linha 47 48  apresenta a resposta para verdadeiro.
    //as linhas 49/50 e 52 para raspostas diferentes como falsa ou iguais.
    
    //  comparação de população
    if (populacao1 > populacao2) {
        printf("\n%s venceu na categoria população!\n", pais1);
    } else if (populacao2 > populacao1) {
        printf("\n%s venceu na categoria população!\n", pais2);
    } else {
        printf("\nAs duas cidades têm populações iguais!\n");
    }
      //comparação de area
    if (area1 > area2) {
        printf("%s venceu na categoria área territorial!\n", pais1);
    } else if (area2 > area1) {
        printf("%s venceu na categoria área territorial!\n", pais2);
    } else {
        printf("As duas cidades têm áreas territoriais iguais!\n");
    }
        //comparação de PIB
    if (PIB1 > PIB2) {
        printf("%s venceu na categoria PIB!\n", pais1);
    } else if (PIB2 > PIB1) {
        printf("%s venceu na categoria PIB!\n", pais2);
    } else {
        printf("As duas cidades têm PIBs iguais!\n");
    }
          // comparação de pontos turisticos
    if (numerodepontosturisticos1 > numerodepontosturisticos2) {
        printf("%s venceu na categoria pontos turísticos!\n", pais1);
    } else if (numerodepontosturisticos2 > numerodepontosturisticos1) {
        printf("%s venceu na categoria pontos turísticos!\n", pais2);
    } else {
        printf("As duas cidades têm a mesma quantidade de pontos turísticos!\n");
    }

    return 0;
}