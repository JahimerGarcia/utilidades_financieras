/* Este es el codigo de conversion de tasas de interes me base en este video para crear las formulas https://www.youtube.com/watch?v=klqp9loFNag */
#include <stdio.h>
#include <math.h>

int main(void)
{
    int opcion;
    float v_presente, v_futuro;
    float tasa_nominal, tasa_efectiva, meses, meses1, interes;

    printf("Herramienta de interes de conversion de tasas\nIngresa el numero segun la opcion que quieras usar:\n1. Calcular Tasa de interes\n2. Convertir tasa nominal a efectiva\n3. Convertir tasa   efectiva a nominal\n4. Convertir efectiva a efectiva con diferente periocidad\n5. Convertir nominal a nominal con diferente periocidad\n\n Ingresa el Numero: ");
    scanf("%d", &opcion);
    if (opcion < 1 || opcion > 5){
        printf("\ningresaste una opcion incorrecta\nPor favor es del 1-5");
        return 0;
    }

    if (opcion==1){
        printf("\ningrese el valor inicial: ");
        scanf("%f", &v_presente);
        printf("\ningrese el valor final: ");
        scanf("%f", &v_futuro);
        printf("\nIngrese el numero de meses transcurridos: ");
        scanf("%f", &meses);
        //Formula para encontrar el interes
        meses = meses / 12;
        interes= pow((v_futuro/v_presente), 1/meses) - 1;
        
        printf("\nEl interes Efectivo Anual es: %f%%", interes*100);
        interes = (v_futuro/v_presente-1)* (1/meses);
        printf("\nEl interes Nominal Anual es : %f%%", interes*100);

    }

    if (opcion==2){
        printf("\nIngresa la tasa sin %%: ");
        scanf("%f", &tasa_nominal);
        printf("\nEscribe la equivalencia en meses por ejemplo si es mensual 1 y si es anual 12: ");
        scanf("%f", &meses);
        tasa_efectiva = (tasa_nominal/(12/meses));
        //Formula de conversion nominal a efectiva
        printf("\nLa tasa efectiva es: %f%% en %d mes", tasa_efectiva, (int)meses);
    }

    if (opcion==3){
        printf("\nIngresa la tasa sin %%: ");
        scanf("%f", &tasa_efectiva);
        printf("\nEscribe la equivalencia en meses por ejemplo si es mensual 1 y si es anual 12: ");
        scanf("%f", &meses);
        //Formula de conversion efectiva a nominal
        tasa_nominal = (tasa_efectiva*(12/meses));
        printf("\nLa tasa nominal es: %f%%", tasa_nominal); 
    }
    if (opcion==4){
        printf("\nIngrese la tasa efectiva:");
        scanf("%f", &tasa_efectiva);
        printf("y su equivalencia en meses: ");
        scanf("%f", &meses);

        printf("Equivalencia en meses que quieres hallar");
        scanf("%f", &meses1);
        //Formula conversion de periocidad efectiva
        tasa_efectiva = pow((1+tasa_efectiva/100), 12/meses);
        tasa_efectiva = pow(tasa_efectiva, 1/(12/meses1));
        tasa_efectiva--;
        printf("\n%f%% En %d meses", tasa_efectiva *100, (int)meses1);
        
    }
    if (opcion==5)
    {
        printf("\nIngrese la tasa nominal:");
        scanf("%f", &tasa_nominal);
        printf("y su equivalencia en meses: ");
        scanf("%f", &meses);

        printf("Equivalencia en meses que quieres hallar");
        scanf("%f", &meses1);
        //Formula conversion de periocidad nominal
        tasa_efectiva = (tasa_nominal/(12/meses));
        tasa_efectiva = pow((1+tasa_efectiva/100), 12/meses);
        tasa_efectiva = pow(tasa_efectiva, 1/(12/meses1));
        tasa_efectiva--;
        tasa_efectiva *= 100;
        tasa_nominal = (tasa_efectiva*(12/meses1));
        printf("tasa nominal %f%%", tasa_nominal);
    }
    
    

    return 0;
}