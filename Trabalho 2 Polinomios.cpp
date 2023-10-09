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
    
};

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
