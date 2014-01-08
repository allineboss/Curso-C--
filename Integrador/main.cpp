#include <iostream> // biblioteca padrão de entrada e saída
#include <cmath>

#include "integrador.h"
#include "polinomios.h"

using namespace std;

int main(int /*argc*/, char** /*argv*/)
{

    // cout é um objeto do namespace std (definido na biblioteca iostream)
    // cout representa a saída padrão (tela do console)

    // o operador << possui semântica de "jogar da direita para a esquerda"
    // concatenando o conteúdo para enviar a tela

    // endl também é definido em iostream como o caractere que representa quebra de linha ('\n')

    cout << "Integral cos() de 0 a 1 = " << integral(cos, 0.0f, 1.0f) << endl;
    cout << "Integral sin() de 0 a 1 = " << integral(sin, 0.0f, 1.0f) << endl;
    cout << "Integral exp() de 1 a 2 = " << integral(exp, 1.0f, 2.0f) << endl;

    // lambda (funções declaradas inline), disponível apenas em C++11
    cout << "Integral usando lambda de 0 a 10 = " << integral([](double x){ return (2.0f*x*x*x) - (5*x*x) -8.0f; }, 0.0f, 10.0f) << endl;

    // Nos dois casos abaixo o valor 0 e 1 é convertido automaticamente para 0.0 e 1.0
    // pelo compilador

    cout << "Integral cos() de 0 a 1 = " << integral(cos, 0, 1, 0.00001f) << endl;
    cout << "Integral sin() de 0 a 1 = " << integral(sin, 0, 1, 0.00001f) << endl;


    // Brincadeira final pra descontrair

    Polinomio parabola(2, 2.0f, -1.0f, 15.0f);

    cout << "Integral parabola() de 0 a 3 = " << integral(parabola, 0, 3, 0.00001f) << endl;
    //cout << "Integral parabola() de 0 a 3 = " << integral(parabola, 0, 3, 1.0f) << endl;

    return 0;
}
