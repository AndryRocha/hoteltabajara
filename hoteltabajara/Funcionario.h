#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED

class Funcionario {
public:
    Funcionario(std:string nomeAux, std:string cpfAux);
    std:string getNome();
    void setNome(std:string nomeAux);
    std:stirng getCpf();
    void setCpf(std:string cpfAux);

private:
    std:string nome;
    std:string cpf;
};

void Funcionario::Funcionario(std:string nomeAux,
                              std:string cpfAux) {
    nome = nomeAux;
    cpf = cpfAux;
}

std:string Funcionario::getNome() {
    return nome;
}

void Funcionario::setNome(std:string nomeAux) {
    nome = nomeAux;
}

std:string Funcionario::getCpf() {
    return cpf;
}

void Funcionario::setCpf(std:string cpfAux) {
    cpf = cpfAux;
}

#endif // FUNCIONARIO_H_INCLUDED

