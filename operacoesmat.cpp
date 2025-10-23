#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int idade;
    double salario, altura;
    char genero;
    string nome;

    idade = 15;
    salario = 10.000;
    altura = 1.55;
    genero = 'F';
    nome = "Vitoria Rafaele";

    cout << fixed << setprecision(5);
    cout << "IDADE: " << idade << endl;
    cout << "SALARIO: " << salario << endl;
    cout << "ALTURA: " << altura << endl;
    cout << "GENERO: " << genero << endl;
    cout << "NOME: " << nome << endl;

    return 0;

}