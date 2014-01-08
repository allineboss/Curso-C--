#ifndef POLINOMIOS_H
#define POLINOMIOS_H

#include <stdarg.h>

#define MAX_POLI 10

struct Polinomio {
    int grau;
    double coeficientes[MAX_POLI];
    Polinomio(int g, ...);
    double operator()(double x) const;
};

#endif // POLINOMIOS_H
