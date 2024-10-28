#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
      int pontoTuristico;
      float populacao, pib, area;
      char codigoCidade, opcao;
      char nomeCidade[20], nomeEstado[20], nomePais[20], numCarta [20], brasil [20], saopaulo [20] ="São Paulo", acre [20] = "Acre", matogrosso [20] = "Mato Grosso", ceara [20] = "Ceará";
      char riobranco [20]= "Rio Branco",  xapuri [20]= "Xapuri", senamadureira [20]= "Sena Madureira",cruzeirodosul [20]= "Cruzeiro do Sul",
           saopaulo[20]= "São Paulo", campinas [20]= "Campinas",  santos [20]= "Santos",guarulhos [20] = "Guarulhos",
             fortaleza [20]= "Fortaleza",caucaia [20]="Caucaia", sobral [20]="Sobral", crato[20]="Crato",
              cuiaba[20]="Cuiabá", tangara[20]= "Tangará da Serra", sinop[20]="Sinop", sorriso[20]="Sorriso";
     // Sugestão: Defina variáveis separadas para cada atributo da cidade.
     // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf ("Seja Bem Vindo ao Super Trunfo: Paises! - Aperte a Tecla Enter para criarmos sua carta. \n");
    scanf ("%c", &opcao);
    

    printf ("No momento temos apenas o Brasil disponivel!! \n");
    printf("Escolha um dos estados abaixo\n ");
    printf("São Paulo - Acre - Mato Grosso - Ceará\n", saopaulo, acre, matogrosso, ceara);
    scanf("%s", &saopaulo, &acre, &matogrosso, &ceara);
    printf(" Parabéns sua cidade é : %s", saopaulo, acre, matogrosso, ceara);
    printf(" Agora escolha a cidade de sua Preferência: %s", riobranco, xapuri, cruzeirodosul, senamadureira, saopaulo, campinas, santos, guarulhos, fortaleza, caucaia, sobral, crato, cuiaba, tangara, sinop, sorriso );


    printf("Agora digite um código para que sua carta fique registrada ex de código: A01, A02.. ");
    scanf("%s", &numCarta);

    printf("Agora digite a quantidade de População Habitacional desta cidade: \n");
    scanf("%f", &populacao);

    printf(" digite a Área em km² da cidade: \n");
    scanf("%f", &area);

    printf("Agora digite o PIB desta Cidade: \n");
    scanf("%f", &pib);

    printf("Parabéns, sua carta foi criada com sucesso!!\n");
    printf("Carta: %s\n ", numCarta);
    printf("País: %s\n ", nomePais);
    printf("Estado: %s\n ", nomeEstado);
    printf("Cidade: %s\n\0 ", nomeCidade);
    printf("População: %f\n", populacao);
    printf("Área em km²: %f\n", area);
    printf("PIB: %f\n ", pib);


     // Cadastro das Cartas:
     // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
     // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
     // Exibição dos Dados das Cartas:
     // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
     // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
