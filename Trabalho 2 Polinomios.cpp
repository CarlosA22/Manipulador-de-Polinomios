#include <iostream>
#include <vector> // Use vector instead of fixed-size arrays

using namespace std;

struct Monomio
{
    float coeficiente;
    int expoente;
    char incognita;
};

struct Polinomio
{
    vector<Monomio> lista; // Use a vector to store monomios
};

// Function to add two polynomials
/*Polinomio somaPolinomios(const Polinomio& p1, const Polinomio& p2)
{
    Polinomio resultado;
    int i = 0, j = 0;

    while (i < p1.lista.size() && j < p2.lista.size())
    {
        if (p1.lista[i].expoente == p2.lista[j].expoente && p1.lista[i].incognita == p2.lista[j].incognita)
        {
            // Monomials have the same exponent and incognita, so add their coefficients
            Monomio monomio;
            monomio.coeficiente = p1.lista[i].coeficiente + p2.lista[j].coeficiente;
            monomio.expoente = p1.lista[i].expoente;
            monomio.incognita = p1.lista[i].incognita;
            resultado.lista.push_back(monomio);
            i++;
            j++;
        }
        else if (p1.lista[i].expoente > p2.lista[j].expoente || (p1.lista[i].expoente == p2.lista[j].expoente && p1.lista[i].incognita > p2.lista[j].incognita))
        {
            // Add the monomial from p1 to the result
            resultado.lista.push_back(p1.lista[i]);
            i++;
        }
        else
        {
            // Add the monomial from p2 to the result
            resultado.lista.push_back(p2.lista[j]);
            j++;
        }
    }

    // If there are remaining monomials in p1 or p2, add them to the result
    while (i < p1.lista.size())
    {
        resultado.lista.push_back(p1.lista[i]);
        i++;
    }

    while (j < p2.lista.size())
    {
        resultado.lista.push_back(p2.lista[j]);
        j++;
    }

    return resultado;
}
*/

Polinomio somaPolinomios(const Polinomio& p1, const Polinomio& p2)
{
    Polinomio resultado;
    int i = 0, j = 0;

    while (i < p1.lista.size() && j < p2.lista.size())
    {
        if (p1.lista[i].expoente == p2.lista[j].expoente && p1.lista[i].incognita == p2.lista[j].incognita)
        {
            // Monomials have the same exponent and incognita, so add their coefficients
            Monomio monomio;
            monomio.coeficiente = p1.lista[i].coeficiente + p2.lista[j].coeficiente;
            monomio.expoente = p1.lista[i].expoente;
            monomio.incognita = p1.lista[i].incognita;
            resultado.lista.push_back(monomio);
            i++;
            j++;
        }
        else if (p1.lista[i].expoente > p2.lista[j].expoente || (p1.lista[i].expoente == p2.lista[j].expoente && p1.lista[i].incognita > p2.lista[j].incognita))
        {
            // Add the monomial from p1 to the result
            resultado.lista.push_back(p1.lista[i]);
            i++;
        }
        else
        {
            // Add the monomial from p2 to the result
            resultado.lista.push_back(p2.lista[j]);
            j++;
        }
    }

    // If there are remaining monomials in p1 or p2, add them to the result
    while (i < p1.lista.size())
    {
        resultado.lista.push_back(p1.lista[i]);
        i++;
    }

    while (j < p2.lista.size())
    {
        resultado.lista.push_back(p2.lista[j]);
        j++;
    }

    return resultado;
}


void imprimir(const Polinomio& p)
{
    for (const Monomio& monomio : p.lista)
    {
        cout << monomio.coeficiente << monomio.incognita << "^" << monomio.expoente << " ";
    }
    cout << endl;
}

int main()
{
    int opcao = 0;

    do
    {
        cout << "MANIPULADOR DE POLINOMIOS" << endl;
        cout << "1. Somar dois polinomios" << endl;
        cout << "2. Subtrair dois polinomios" << endl;
        cout << "3. Multiplicar um polinomio por um valor constante" << endl;
        cout << "4. Multiplicar um polinomio por um monomio" << endl;
        cout << "5. Multiplicar dois polinomios" << endl;
        cout << "6. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        // Process the user's choice
        switch (opcao)
        {
        case 1:
        {
            system("cls");

            Polinomio p1, p2;
            cout << "Digite o primeiro polinomio (coeficiente incognita^expoente, digite 0 para terminar):\n";
            while (true)
            {
                Monomio monomio;
                cin >> monomio.coeficiente;
                if (monomio.coeficiente == 0)
                    break;
                cin >> monomio.incognita;
                cin >> monomio.expoente;
                p1.lista.push_back(monomio);
            }

            cout << "Digite o segundo polinomio (coeficiente incognita^expoente, digite 0 para terminar):\n";
            while (true)
            {
                Monomio monomio;
                cin >> monomio.coeficiente;
                if (monomio.coeficiente == 0)
                    break;
                cin >> monomio.incognita;
                cin >> monomio.expoente;
                p2.lista.push_back(monomio);
            }

            Polinomio resultado = somaPolinomios(p1, p2);

            cout << "Resultado: ";
            imprimir(resultado);
            break;
        }
        case 2:
            system("cls");
            // Implement subtraction here
            break;
        case 3:
            system("cls");
            // Implement multiplication by a constant here
            break;
        case 4:
            system("cls");
            // Implement multiplication by a monomial here
            break;
        case 5:
            system("cls");
            // Implement multiplication of two polynomials here
            break;
        case 6:
            system("cls");
            cout << "Ate mais!" << endl;
            break;
        default:
            system("cls");
            cout << "Opcao invalida. Tente novamente." << endl;
            break;
        }
    } while (opcao != 6);

    return 0;
}
