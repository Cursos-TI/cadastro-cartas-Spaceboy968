#include <stdio.h>
#include <locale.h>

int main() {

char estado;
char cidade;
char CC;
float area, PIB;
int popu, NPT;

printf("Bem vindo ao jogo Super Trunfo!\n Insira os dados da sua primeira carta:\n");

printf("\nCódigo da Carta:");
scanf("%s", &CC);
printf("\nEstado:");
scanf("%s", &estado);
printf("\nCidade:");
scanf("%s", &cidade);
printf("\nÁrea:");
scanf("%f", &area);
printf("\nPIB:");
scanf("%f", &PIB);
printf("\nPopulação:");
scanf("%d", &popu);
printf("\nNúmero de Pontos Turísticos:");
scanf("%d", &NPT);

printf("Os Dados da sua primeira carta são:\n");
printf("Código da carta: %s", CC);
printf("Estado: %s", estado);
printf("Cidade: %s", cidade);
printf("Área: %f", area);
printf("PIB: %f", PIB);
printf("População: %d", popu);
printf("Número de Pontos Turísticos: %d", NPT);

return 0;
}
