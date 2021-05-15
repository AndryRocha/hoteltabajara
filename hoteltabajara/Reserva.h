#ifndef RESERVA_H_INCLUDED
#define RESERVA_H_INCLUDED

#include <Funcionario.h>
#include <Quarto.h>
#include <Cliente.h>

class Reserva {
public:
    Reserva(Funcionario *funcionarioReservaAux,
            Quarto *quartoReservaAux,
            std:string periodoAux,
            Cliente *clienteReservaAux);
    void setFuncionarioReserva(Funcionario *funcionarioReservaAux);
    Funcionario getFuncionarioReserva();
    void setQuarto(Quarto *quartoReservaAux);
    Quarto getQuarto();
    std:string getPeriodo();
    void setPeriodo(std:string periodoAux);
    void setCliente(Cliente *clienteReservaAux);
    Cliente getCliente();
    void reservar();

private:
    Funcionario *funcionarioReserva;
    Quarto *quartoReserva;
    Cliente *clienteReserva;
    std:string periodo;
};

void Reserva::Reserva(Funcionario *funcionarioReservaAux,
                      Quarto *quartoReservaAux,
                      std:string periodoAux,
                      Cliente *clienteReservaAux) {
    funcionarioReserva = funcionarioReservaAux;
    quartoReserva = quartoReservaAux;
    periodo = periodoAux;
    clienteReservaAux = clienteReservaAux;
    reservar();
}

void Reserva::reservar() {
    quartoReserva->reservado = true;
}

void Reserva::setPeriodo(std:string periodoAux) {
    periodo = periodoAux;
}

Cliente Reserva::getCliente() {
    return clienteReserva;;
}

void Reserva::setCliente(Cliente *clienteReservaAux) {
    clienteReserva = clienteReservaAux;
}

std:string Reserva::getPeriodo() {
    return periodo;
}

Funcionario Reserva::getFuncionarioReserva() {
    return funcionarioReserva;
}

void Reserva::setFuncionarioReserva(Funcionario *funcionarioReservaAux) {
    funcionarioReserva = funcionarioReservaAux;
}

Quarto Reserva::getQuarto() {
    return quartoReserva;
}

void Reserva::setQuarto(Quarto *quartoReservaAux) {
    quartoReserva = quartoReservaAux;
}

#endif // RESERVA_H_INCLUDED

