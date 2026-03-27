#include <stdio.h>
#include <stdbool.h>

int main() {

        int codigoest;
        char nombre[100];
        char inicial;
        int edad;
        float nota1, nota2, nota3;
        double valormatricula;
        int matriculaactiva;
        int documento;
        int induccion;
        int monitor;
        bool lab;
        bool notas_validas = true;


        printf("Bienvenido/a al formulario.\n");

        //Toma de datos
        printf("Ingrese su codigo de estudiante: \n");
        scanf(" %d", &codigoest);

        printf("Ingrese el nombre del estudiante: \n");
        scanf(" %s", &nombre);

        printf("Ingrese la inicial del apellido: \n");
        scanf(" %c", &inicial);

        printf("Ingrese la edad: \n");
        scanf(" %d", &edad);

        printf("Ingrese la nota 1 (0.0 - 5.0): \n");
        scanf(" %f", &nota1);
        printf("Ingrese la nota 2 (0.0 - 5.0): \n");
        scanf(" %f", &nota2);
        printf("Ingrese la nota 3 (0.0 - 5.0): \n");
        scanf(" %f", &nota3);

        printf("Ingrese el valor de la matricula academica: \n");
        scanf(" %lf", &valormatricula);

        printf("Tiene matricula activa? (1=Si / 0=No): \n");
        scanf(" %d", &matriculaactiva);
        printf("Presento documento o carne? (1=Si / 0=No): \n");
        scanf(" %d", &documento);
        printf("Aprobo la induccion de laboratorio? (1=Si / 0=No): \n");
        scanf(" %d", &induccion);
        printf("Es monitor del laboratorio? (1=Si / 0=No): \n");
        scanf(" %d", &monitor);

        //validacion notas
        if (nota1 <0.0 || nota1 > 5.0 || nota2 < 0.0 || nota2 > 5.0 || nota3 < 0.0 || nota3 > 5.0) {
                notas_validas = false;
                printf("Una o mas notas están fuera del rango.\n");
        }

        //promedio
        float promedio = (nota1 + nota2 + nota3) / 3.0;

        printf("\n");

        //clasificacion desempeño
        bool codigo_par = (codigoest % 2 == 0);
        if (promedio < 3.0) {
                printf("Estado: Reprobado\n");
        } else if (promedio < 4.0) {
                printf("Estado: Aprobado-Aceptable\n");
        } else if (promedio < 4.5) {
                printf("Estado: Aprobado-Buen desempeño\n");
        } else {
                printf("Estado: Aprobado-Excelente desempeño\n");
        }

        //acceso laboratorio
        lab = (matriculaactiva == 1) && (documento == 1) && (induccion == 1 || monitor == 1);

        if (lab) {
                if (monitor == 1) {
                        printf("ACCESO AUTORIZADO como monitor del laboratorio.\n");
                } else {
                        printf("ACCESO AUTORIZADO.\n");
                }
        } else {
                printf("ACCESO DENEGADO al laboratorio.\n");
        }


        //operador ternario
        printf("Las notas ingresadas son: %s\n",
                notas_validas ? "validas" : "invalidas (fuera del rango)");

        //resumen
        printf("\n");
        printf("RESUMEN FINAL\n");
        printf("Estudiante: %s %c\n", nombre, inicial);
        printf("Codigo: %d (%s)\n", codigoest, codigo_par ? "PAR" : "IMPAR");
        printf("Edad: %d\n", edad);
        printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
        printf("Promedio: %.2f\n", promedio);
        printf("Valor matricula: %.2f\n", valormatricula);
        printf("Matricula activa: %s\n", matriculaactiva == 1 ? "SI" : "NO");
        printf("Documento presentado: %s\n", documento == 1 ? "SI" : "NO");
        printf("Es monitor: %s\n", monitor == 1 ? "SI" : "NO");
        printf("Acceso al laboratorio: %s\n", lab ? "AUTORIZADO" : "DENEGADO");

return 0;
}
