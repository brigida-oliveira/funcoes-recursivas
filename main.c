#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if (n == 0)
        return 1; // Caso base
    else
        return n * fatorial(n - 1); // Passo recursivo
}

int soma(int n){
    if(n == 1)
        return 1;
    else
        return n + soma(n-1);
}

int main(){
    int numero, resultado;
    printf("Digite um numero o somatorio dos numeros dq 1 ate esse numero: ");
    scanf("%d", &numero);

    resultado = soma(numero);

    printf("Somatorio de 1 a %d = %d", numero, resultado);
    return 0;
}


/*int main()
{
    int numero, resultado;
    printf("Digite um numero para descobrir o seu fatorial: ");
    scanf("%d", &numero);

    resultado = fatorial(numero);

    printf("Fatorial %d = %d", numero, resultado);

    return 0;
}*/
