#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

class Cliente {
public:
    Cliente(std:string nomeAux, std:string cpfAux);
    void setNome(std:string nomeAux);
    std:string getNome;
    void setCpf(std:string cpfAux);
    std:string getCpf;

private:
    std:string nome;
    std:string cpf;
};

void Cliente::Cliente(std:string nomeAux, std:string cpfAux) {
    nome = nomeAux;
    cpf = cpfAux;
}

std:string Cliente::getNome() {
    return nome;
}

void Cliente::setNome(std:string nomeAux) {
    nome = nomeAux;
}

std:string Cliente::getCpf() {
    return cpf;
}

void Cliente::setCpf(std:string cpfAux) {
    cpf = cpfAux;
}

#endif // CLIENTE_H_INCLUDED
