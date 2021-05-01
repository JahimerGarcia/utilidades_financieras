#include <stdio.h> 
#include <math.h>
long int cap_inicial, i;
float tasa_efectiva, meses, cap_final;

int main(){
    printf("Programa para encontrar el interes compuesto\n");
    printf("Ingrese capital inicial: ");
    scanf("%d", &cap_inicial);
    printf("ingresa la tasa efectiva sin %%: ");
    scanf("%f", &tasa_efectiva);
    printf("ingrese la periocidad de la tasa 'por ejemplo si es mensual 1': ");
    scanf("%f", &meses);
    if (meses != 3){
        tasa_efectiva = pow((1+tasa_efectiva/100), 12/meses);
        tasa_efectiva = pow(tasa_efectiva, (float)1/4);
        tasa_efectiva = tasa_efectiva - 1.0;
        
    } 
    meses = 0; 
    for (i=1; i<13; i++){
        meses +=3.0;
        cap_final = (1+tasa_efectiva);
        cap_final = pow(cap_final, i);
        cap_final = cap_inicial * cap_final;
        printf("En %d meses vas a obtener %d \n ", (int)meses, (int)cap_final);
    }


    
    return 0;
}
