#include "integrador.h"


 double integral(Funcao f, double x1, double x2, double precisao){
    double resultado = 0.0f;

    for(; x1 < x2; x1+= precisao){
        double b = f(x1);
        double B = f((x1 + precisao));

        resultado += ((b + B) / 2) * precisao;
    }
    return resultado;
 }

 double integral(Polinomio f, double x1, double x2, double precisao){
    double resultado = 0.0f;

    for(; x1 < x2; x1+= precisao){
        double b = f(x1);
        double B = f((x1 + precisao));

        resultado += ((b + B) / 2) * precisao;
    }
    return resultado;
 }
