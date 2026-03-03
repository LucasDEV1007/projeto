#include <stdio.h>
#include <stdlib.h>
  
int main(){

printf("***SUPERTRUNFO***\n");

    char Carta[6] = "Carta1";
    char Estado[1] = "A";
    char Código[5] = "AM174";
    char Cidade[6] = "Manaus";
    int População = 2063689;
    float Área = 11.401092;
    float PIB = 127.600000000;
    int Turísticos = 50;
// Váriaveis Declaradas
printf("Nome da Carta: %s \n", Carta);
printf("Inicial do Estado: %s \n", Estado);
printf("Código da Carta: %s \n", Código);
printf("Nome da Cidade: %s \n", Cidade);
printf("População é de: %d Milhões \n", População);
printf("Área: %.5f Milhões de km² \n", Área);
printf("PIB é de: %.6f Bilhões \n", PIB);
printf("Pontos Turísticos: %d \n", Turísticos);

    float Densidade = (População / Área);
    float Capita = (PIB / População);

printf("Densidade Populacional: %.2f hab/km² \n", Densidade);
printf("PIB per capita: %.5f reais", Capita);

}
