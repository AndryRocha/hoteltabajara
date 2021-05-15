#include <iostream>
#include <locale.h>
#include <Funcionario.h>
#include <Quarto.h>
#include <Reserva.h>
#include <Cliente.h>

using namespace std;

int main() {
    setlocale(LC_ALL,"Portuguese");

    int op = 0;
    int quartosQuant = 0;
    int clientesQuant = 0;
    int reservasQuant = 0;

    Funcionario *funcionario;
    Reserva *reservas[50];

    Quarto *quartos[50];
    Cliente *clientes[100];

    std:string nomeFuncionario;
    std:string cpfFuncionario;

    cout << "Funcionário que ira usar o sistema: " << endl;
    cout << "Nome funcionário: ";
    cin >> nomeFuncionario;
    cout << endl;
    cout << "CPF funcionário: ";
    cin >> cpfFuncionario;
    cout << endl;
    funcionario = new Funcionario(nomeFuncionario, cpfFuncionario);

    while(op != 99)  {
        system("cls");
        cout << "-----------HOTEL TABAJARA-----------" << endl;
        cout << "1 - Cadastrar quarto" << endl;
        cout << "2 - Cadastrar cliente" << endl;
        cout << "3 - Reservar quarto" << endl;
        cout << "4 - Verificar quarto ocupado" << endl;
        cout << "5 - Lista de quartos reservados" << endl;
        cout << "99 - Sair" << endl;
        switch(op) {
            case 1:
                system("cls");
                Quarto *quarto;
                int numeroQuarto;

                cout << "Número do quarto: ";
                cin >> numeroQuarto;
                cout << endl;

                quarto = new Quarto(numeroQuarto, false);

                if (quartosQuant < 50) {
                    quartos[quartosQuant] = quarto;
                    quartosQuant = quartosQuant + 1;
                } else {
                    cout << "Limite de 50 quartos atingido.";
                }
                break;

            case 2:
                system("cls");
                Cliente *cliente;
                std:string nomeCliente;
                std:string cpfCliente;

                cout << "Nome: ";
                cin >> nomeCliente;
                cout << endl;

                cout << "CPF: ";
                cin >> cpfCliente;
                cout << endl;

                cliente = new Cliente(nomeCliente, cpfCliente);

                clientes[clientesQuant] = cliente;
                clientesQuant = clientesQuant + 1;
                break;

            case 3:
                system("cls");
                Reserva *reserva;
                Quarto *quartoReservar;
                Cliente *clienteReserva;


                std:string cpfReserva;
                std:string numeroReserva;
                std:string periodoReserva;

                cout << "CPF :";
                cin >> cpfReserva;
                cout << endl;

                cout << "Número do quarto:  :";
                cin >> numeroReserva;
                cout << endl;

                cout << "Periodo (DD/MM/AAAA a DD/MM/AAAA):  :";
                cin >> periodoReserva;
                cout << endl;

                for(int i = 0; i <= quartosQuant; i++) {
                    if (quartos[i]->getNumero() == numeroReserva) {
                        quartoReservar = quartos[i];
                    }
                }

                for(int i = 0; i <= clientesQuant; i++) {
                    if (clientes[i]->getCpf() == cpfReserva) {
                        clienteReserva = clientes[i];
                    }
                }

                reserva = new Reserva(funcionario, quartoReservar, periodoReserva, clienteReserva);

                reservas[reservasQuant] = reserva;
                reservasQuant = reservasQuant + 1;
                break;
            case 4:
                system("cls");
                int numeroQuartoOcupado;
                bool quartoOcupado = false;

                cout << "Número do quarto: ";
                cin >> numeroQuartoOcupado;
                cout >> endl;

                for(int i = 0; i <= reservasQuant; i++) {
                    if (reservas[i]->getQuarto()->getNumero == numeroQuartoOcupado) {
                        cout << "Quarto ocupado" << endl;
                        quartoOcupado = true;
                    }
                }

                if (quartoOcupado == false) {
                    for(int i = 0; i <= quartosQuant; i++) {
                      if (quartos[i]->getNumero == numeroQuartoOcupado) {
                        cout << "Quarto não ocupado" << endl;
                        quartoOcupado = false;
                        }
                    }
                }
                break;
            case 5:
                system("cls");
                for(int i = 0; i <= reservasQuant; i++) {
                    cout << "Quarto: " << reservas[i]->getQuarto()->getNumero << endl;
                    cout << "Cliente: " << reservas[i]->getCliente()->getNome << endl;
                    coout << "Periodo: " << reservas[i]->getPeriodo() << endl;
                }
                break;
        }
    }



    return 0;
}
