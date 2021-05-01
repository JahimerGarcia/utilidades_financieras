#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char frases [][100] = {{"educate"},
                    {"Revisa tu credito con regularidad"},
                    {"Haz un presupuesto"},
                    {"Automotiza tus finanzas"},
                    {"Paga deudas"},
                    {"Construye tu propio colchón"},
                    {"Conoce tu valor neto"},
                    {"No te olvides del futuro"},
                    {"Educa a tus hijos"},
                    {"Al comprar no pienses solo en el precio"},
                    {"Ahorra para tu jubilación"},
                    {"Invierte en ti"},
                    {"Utiliza tecnologia financiera"},
                    {"Invierte fuera de tu negocio"}};

int main()
{
    srand(time(NULL));
    int r = rand() % 15;
    printf("%s",frases[r]);
    return 0;

}