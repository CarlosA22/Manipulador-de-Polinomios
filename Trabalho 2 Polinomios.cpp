#include <iostream>

using namespace std;

struct Monomio
{
	float coeficiente = 0;
	int expoente = 0;
	char incognita = 'x';
	//incognita e expoente formam a parte literal.
};

struct Polinomio
{
	Monomio monomios;
	Monomio listaMonomios[50];
};

Monomio lerMonomio()
{
	Monomio monomio;
	cin.ignore(); //limpa o buffer do teclado.
	cout << "Digite o coeficiente: ";
	cin >> monomio.coeficiente;
	cout << "Incognita ja esta definida como 'x'." << endl;
	cout << "Digite o expoente: ";
	cin >> monomio.expoente;

	return monomio;
}

Polinomio lerPolinomio()
{
	Polinomio polinomio;

	cout << "Digite o número de monômios no polinômio: ";
	int numMonomios;
	cin >> numMonomios;

	for (int i = 0; i < numMonomios; i++)
	{
		cout << "\nMonômio " << i + 1 << ": ";
		Monomio monomio = lerMonomio();

		// Adicione o monômio à lista de monômios do polinômio
		polinomio.listaMonomios[i] = monomio;
	}

	return polinomio;
}

/*Polinomio somaPolinomios(Polinomio p1, Polinomio p2)
{
	Polinomio resultado;
	Monomio novoMonomio;

	resultado.monomios.coeficiente = p1.monomios.coeficiente + p2.monomios.coeficiente;
	resultado.monomios.expoente = p1.monomios.expoente;

	novoMonomio.coeficiente = p2.monomios.coeficiente;
	novoMonomio.expoente = p2.monomios.expoente;

	//adicionando termos de p2 ao polinomio soma.
	for (int i = 0; i < resultado.monomios.expoente - novoMonomio.expoente; i++)
	{
		resultado.monomios.coeficiente = 0;
		resultado.monomios.expoente--;
	}

	resultado.monomios.coeficiente += novoMonomio.coeficiente;

	return resultado;
}
*/

void imprimirMonomio(Monomio monomio)
{
	cout << monomio.coeficiente << monomio.incognita << "^" << monomio.expoente << endl;
}

void imprimirPolinomio()
{
	Polinomio polinomio;
	for (int i = 0; i < polinomio.monomios.expoente; i++)
	{
		imprimirMonomio(polinomio.listaMonomios[i]);
	}
}

int main()
{
	int opcao = 0;
	int tam = 0;
	Monomio* v = new Monomio[tam];


	do
	{
		cout << "MANIPULADOR DE POLINOMIOS" << endl;
		cout << "1. Inserir numero x de monomios" << endl;
		cout << "2. Inserir polinomios" << endl;
		cout << "3. Somar dois polinomios" << endl;
		cout << "4. Subtrair dois polinomios" << endl;
		cout << "5. Multiplicar um polinomio por um valor constante" << endl;
		cout << "6. Multiplicar um polinomio por um monomio" << endl;
		cout << "7. Multiplicar dois polinomios" << endl;
		cout << "8. Sair" << endl;
		cout << "Escolha uma opcao: ";
		cin >> opcao;

		switch (opcao)
		{
		case 1:
		{
			system("cls");

			cout << "Digite o quantos monomios que você quer adicionar: ";
			cin >> tam;

			for (int i = 0; i < tam; i++)
			{
				cout << "\nMonomio " << i + 1 << ": ";
				v[i] = lerMonomio();
				cout << endl;
			}

			for (int i = 0; i < tam; i++)
			{
				imprimirMonomio(v[i]);
			}

			/*for (int i = 0; i < TAM; i++)
			{
				cout << endl;
				monomios[i] = lerMonomio();
			}
			break;
			*/
			//Polinomio resultado = somaPolinomios(p1, p2);
			//imprimirResultado(resultado);

			break;
		}
		case 2:
			system("cls");

			break;
		case 3:
			system("cls");
			break;
		case 4:
			system("cls");
			break;
		case 5:
			system("cls");
			break;
		case 6:
			system("cls");
			break;
		case 7:
			system("cls");
			break;
		case 8:
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
