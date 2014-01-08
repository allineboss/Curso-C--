#include <polinomios.h>
#include <cmath>
#include <stdio.h>

Polinomio::Polinomio(int g, ...) :
    grau(g){
    va_list coefs;

    va_start(coefs, g);
    int i = 0;

    while (i <= grau)
        coeficientes[i++] = va_arg(coefs, double);

    va_end(coefs);
}

double Polinomio::operator ()(double x) const{

    double res = coeficientes[grau];
    for(int p = grau - 1; p >=0; p--){
        res += coeficientes[p] * x;
        x *= x;

    }
    return res;
}
