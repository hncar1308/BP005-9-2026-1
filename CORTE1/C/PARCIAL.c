#include <stdio.h>
#include <stdbool.h>

int main() {

    int codigoest;
    int edad;
    char nombre[25], inicial;
    float nota1, nota2, nota3;
    double promedio;
    float valmatricula;
    bool matricula, documento, lab, monitor;
    int variable;

    printf("Bienvenido/a al formulario.\n");

    printf("Ingrese su codigo de estudiante: \n");
    scanf("%d", &codigoest);

    printf("Ingrese su nombre: \n");
    scanf("%s", nombre);

    printf("Ingrese la inicial de su apellido: \n");
    scanf(" %c", &inicial);

    printf("Ingrese su edad: \n");
    scanf("%d", &edad);

    printf("Ingrese la nota 1: \n");
    scanf("%f", &nota1);

    printf("Ingrese la nota 2: \n");
    scanf("%f", &nota2);

    printf("Ingrese la nota 3: \n");
    scanf("%f", &nota3);

    printf("Ingrese el valor de la matrícula: \n");
    scanf("%f", &valmatricula);

    printf("¿Tiene matricula activa? (1 = si, 0 = no)\n");
    scanf(" %d", &variable);
    matricula = (variable == 1);

    printf("¿Presento documento? (1 = si, 0 = no)\n");
    scanf(" %d", &variable);
    documento = (variable == 1);

    printf("¿Aprobo induccion? (1 = si, 0 = no)\n");
    scanf(" %d", &variable);
    lab = (variable == 1);

    printf("¿Es monitor? (1 = si, 0 = no)\n");
    scanf(" %d", &variable);
    monitor = (variable == 1);

    //validacion notas
    if (nota1 < 0 || nota1 > 5 || nota2 < 0 || nota2 > 5 || nota3 < 0 || nota3 > 5) {
        printf("Error: notas invalidas\n");
    } else {

        //promedio
        promedio = (nota1 + nota2 + nota3) / 3;

        //codigo par o impar
        if (codigoest % 2 == 0) {
            printf("El codigo es par\n");
        } else {
            printf("El codigo es impar\n");
        }

        //desempeño
        if (promedio < 3.0) {
            printf("Reprobado\n");
        } else if (promedio < 4.0) {
            printf("Aceptable\n");
        } else if (promedio < 4.5) {
            printf("Sobresaliente\n");
        } else {
            printf("Excelente\n");
        }

        //
        if (matricula && documento && lab) {
            printf("Puede ingresar al laboratorio\n");

            // CONDICIONAL ANIDADO
            if (monitor) {
                printf("Ademas, es monitor del laboratorio\n");
            }

        } else {
            printf("No puede ingresar al laboratorio\n");
        }

        // OPERADOR TERNARIO
        printf("Estado: %s\n", (promedio >= 3.0) ? "Aprobado" : "No aprobado");

        //resumen
        printf("RESUMEN\n");
        printf("Codigo: %d\n", codigoest);
        printf("Nombre: %s %c.\n", nombre, inicial);
        printf("Edad: %d\n", edad);
        printf("Promedio: %.2lf\n", promedio);
        printf("Matricula: %s\n", matricula ? "Activa" : "Inactiva");
    }

    return 0;
}
