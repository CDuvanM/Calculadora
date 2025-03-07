#include <stdio.h>
void menu();
int suma(int,int);
int resta(int,int);
int multi(int, int);
float div(int, int);
float modulo(int, int);

int main() {
menu();
return 0;
}

void menu() {
    printf("Escoge la operacion 1=suma, 2=resta, 3=multiplicaion, 4=division, 5=modulo");
    int opcion = 0;
    scanf("%d", &opcion);
    printf("ingresa el primer numero: ");
    int a =0;
    scanf("%d",&a);
    printf("ingresa el segundo numero: ");
    int b =0;
    scanf("%d",&b);
    switch(opcion) {
        case 1:
            suma(a,b);
        break;
        case 2:
            resta(a,b);
        break;
        case 3:
            multi(a,b);
        break;
        case 4:
            div(a,b);
        break;
        case 5:
            modulo(a,b);
        break;
        default:
            printf("opcion invalida");
        break;
    }
    
}

int suma(int a, int b) {
    int resultado = a + b;
    printf("El resultado es %d\n", resultado);
    return 1;
}
