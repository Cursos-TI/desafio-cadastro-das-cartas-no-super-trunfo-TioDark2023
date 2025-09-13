#include <stdio.h>

int main(){

    // Primeira carta 
    int carta=1;
    int Populacao=7.330483 ;
    int NumeroTuristicos=86;
    char Estado='G';
    char Codigarta[10]="G01";
    char NomeCidade[20]="Goiais";
    float Areakm=340.086;
    float Pib=336.7;
    float pibper=Pib / Populacao;
    float Denspo=Populacao / Areakm;
    float pop=7.3;                       // popuulacao 
    float notu=86;                      // numeros turisticos 
    float akm=340;                     // area km2 
    float pib=336;                    // pib 
    float pibperc= pib/pop;          //pib perc
    float den= pop/akm;             // dencidade 
    float poder;
    poder=pop+notu+akm+pib+(den/1)+pibperc;  // Soma total dos float 
    // Fim do primeiro cod

    // Segunda carta 
    int carta2=2;
    int Populacao2= 3.833712;
    int NumeroTuristicos2= 45;
    char Estado2='E';
    char Codigocarta2[10]="E01";
    char NomeCidade2[20]="Espirito Santo";
    float Areakm2= 46.095;
    float Pib2= 51.1;
    float pibper2= Pib2 / Populacao2;
    float Denspo2= Populacao2 / Areakm2;
    float pop2=3.8;                            // popuulacao 
    float notu2=45;                           // numeros turisticos 
    float akm2=46;                           // area km2 
    float pib2=51.1;                        // pib 
    float pibperc2= pib2/pop2;             //pib perc
    float den2= pop2/akm2;                // dencidade 
    float poder2;
   poder2=pop2+notu2+akm2+pib2+(den2/1)+pibperc2;  // Soma total dos float 
   // Fim do segundo cod 
   
   

   printf("\n");
// Info da primeira carta. 
   printf("Carta:%d\n",carta);                                   // qual o número da carta 
   printf("Estado:%c\n",Estado);                                // o nome do estado.  
   printf("Código:%s\n",Codigarta);                            // código da carta. 
   printf("Nome Da Cidade:%s\n",NomeCidade);                  // nome da cidade. 
   printf("População:%d\n",Populacao);                       // quantidade da população.  
   printf("Área:%.3f km2\n",Areakm);                        // quantidade da área. 
   printf("PIB:%.2f bilhoes de reais\n",Pib);              // PIB 
   printf("Numero de Pontos Turísticos:%d\n",NumeroTuristicos); // quantidades de pontos turísticos. 
   printf("Densidade Populacional:%.2f hab/km2\n", Denspo);    // densidade populacional
   printf("PIB per Capita:%.2f reais\n", pibper);             // pib percapta 
   printf("Poder:%.2f\n",poder);                             // Total De Poder da carta 
   // Fim do primeiro cod 
   printf("\n");
   // Info da segunda carta. 
   printf("Carta:%d\n",carta2);                             // qual o número da carta. 
   printf("Estado:%c\n",Estado2);                          // o nome do estado.  
   printf("Código:%s\n",Codigocarta2);                    // código da carta. 
   printf("Nome Da Cidade:%s\n",NomeCidade2);            // nome da cidade.  
   printf("População:%d\n",Populacao2);                 // quantidade da população.  
   printf("Área:%.2f km2\n",Areakm2);                  // quantidade da área.
   printf("PIB:%.2f bilhoes de reais\n",Pib2);        // PIB 
   printf("Numero De Ponts Turísticos:%d\n",NumeroTuristicos2);  // quantidades de pontos turísticos.
   printf("Densidade Populacional:%.2f hab/km2\n", Denspo2);    // densidade populacional
   printf("PIB per Capita:%.2f reais\n", pibper2);             // pib percapta 
   printf("Poder:%.2f\n",poder2);                             // Total De Poder da carta 
   printf("\n");
   //fim do segundo cod 

    printf("Comparacao das cartas\n");

    printf("\n");
   if (Populacao > Populacao2){
      printf("A População Da carta 1 ganhou\n");
   }else{
      printf("A População Da carta 2 ganhou\n");   
   }

if (Areakm > Areakm2){
      printf("A Area Em Km Da carta 1 ganhou\n");
   }else{
      printf("A Area Em Km Da carta 2 ganhou\n");
   }

   if (pib>pib2){
      printf("O Pib Da carta 1 ganhou\n");
   }else{
      printf("O Pib Da carta 2 ganhou\n");
   }
   
   if (NumeroTuristicos>NumeroTuristicos2){
      printf("Os Pontos turisticos Da carta 1 ganhou\n");
   }else{
      printf("Os Pontos turisticos Da carta 2 ganhou\n");
   }

   if (Denspo>Denspo2){
      printf("A Densidade populacional Da carta 1 ganhou\n");
   }else{
      printf("A Densidade populacional Da carta 2 ganhou\n");
   }

   if (Denspo>Denspo2){
      printf("A Densidade populacional Da carta 1 ganhou\n");
   }else{
      printf("A Densidade populacional Da carta 2 ganhou\n");
   }
   
   if (pibperc>pibperc2){
      printf("O Pib Percapita Da carta 1 ganhou\n");
   }else{
      printf("O Pib Percapita Da carta 2 ganhou\n");
   }
   if (poder>poder2){
      printf("O Poder Da carta 1 ganhou\n");
   }else{
      printf("O Poder Da carta 2 ganhou\n");
   }





  
   return 0;
}
