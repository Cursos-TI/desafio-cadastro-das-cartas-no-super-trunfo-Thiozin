typedef struct {
    char estado[50];
    char codigoCarta[10];
    char nomeCidade[50];
    int populalacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;


#include<stdio.h>
#include<string.h>

//...(estrutura Carta definida acima)

int main() {
    Carta carta1;
    Carta carta2;
    // Iniciando carta1
    strcpy(carta1.estado,"Maranhã0");
    strcpy(carta1.codigoCarta,"MA1");
    strcpy(carta1.nomeCidade,"São Luis");
    carta1.populacao= 1000000;
    carta1.area= 834.8;
    carta1.pib= 36535226.0;
    carta1.pontosTuristicos=30;
    
    //Iniciando carta2
    strcpy(carta2.estado,"Goiás");
    strcpy(carta2.codigoCarta"GO1");
    strcpy(carta2.nomeCidade,"Vila Boa");
    carta2.populalacao= 2000000;
    carta2.area=945.9;
    carta2.pib=42423112.0;
    carta2.pontosTuristicos= 40;

    //(resto do meu código)

    return 0;
}   




    
    

     
    


    



