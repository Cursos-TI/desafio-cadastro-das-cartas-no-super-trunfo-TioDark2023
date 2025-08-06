#include <stdio.h>

int main(){

    // Primeira carta 
    int carta=1;
    int Populacao = 7056495;
    int NumeroTuristicos= 86;
    char Estado='G';
    char Codigarta[10]="G01";
    char NomeCidade[20]="Goiais";
    float Areakm= 340.086;
    float Pib= 336.7;
    
      // Segunda carta 
    int carta2=2;
    int Populacao2 = 3.833712;
    int NumeroTuristicos2= 45;
    char Estado2='E';
    char Codigocarta2[10]="E01";
    char NomeCidade2[20]="Espirito Santo";
    float Areakm2= 46.095;
    float Pib2= 51.1; 


// Info da primeira carta. 
   printf("Carta:%d\n",carta); // qual o número da carta 
   printf("Estado:%c\n",Estado); // o nome do estado.  
   printf("Código:%s\n",Codigarta); // código da carta. 
   printf("Nome Da Cidade:%s\n",NomeCidade); // nome da cidade. 
   printf("População:%d\n",Populacao); // quantidade da população.  
   printf("Área:%.3f km2\n",Areakm); // quantidade da área. 
   printf("PIB:%.2f bilhoes de reais\n",Pib); // PIB 
   printf("Numero de Pontos Turísticos:%d\n",NumeroTuristicos); // quantidades de pontos turísticos. 

 
   printf ("\n");

   // Info da segunda carta. 
   printf("Carta:%d\n",carta2); // qual o número da carta. 
   printf("Estado:%c\n",Estado2); // o nome do estado.  
   printf("Código:%s\n",Codigocarta2); // código da carta. 
   printf("Nome Da Cidade:%s\n",NomeCidade2); // nome da cidade.  
   printf("População:%d\n",Populacao2); // quantidade da população.  
   printf("Área:%f km2\n",Areakm2); // quantidade da área.
   printf("PIB:%f bilhoes de reais\n",Pib2); // PIB 
   printf("Numero De Ponts Turísticos:%d\n",NumeroTuristicos2); // quantidades de pontos turísticos.

   printf("\n");


   return 0;
}