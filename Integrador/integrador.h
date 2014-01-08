#ifndef INTEGRADOR_H
#define INTEGRADOR_H

#include "polinomios.h"

// Declara um novo tipo, chamado Funcao
// O tipo Funcao é uma função que retorna double e recebe double como parâmetro

typedef double (*Funcao)(double);


// Declara a função integral, que recebe 3 ou 4 parâmetros
// o parâmetro precisao é opcional e possui um valor padrão
// o parâmetro f possui o tipo declarado acima

double integral(Funcao f, double x1, double x2, double precisao = 0.001f);

double integral(Polinomio f, double x1, double x2, double precisao = 0.001f);

#endif // INTEGRADOR_H
