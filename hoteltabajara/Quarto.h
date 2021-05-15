#ifndef QUARTO_H_INCLUDED
#define QUARTO_H_INCLUDED

class Quarto {
public:
    Quarto(int numeroAux, bool reservadoAux);
    int getNumero();
    void setNumero(int numeroAux);
    bool getReservado();
    void setResarvado(bool reservado);

private:
    int numero;
    bool reservado;
};

void Quarto::Quarto(int numeroAux, bool reservadoAux) {
    numero = numeroAux;
    reservado = reservadoAux;
}

 int Quarto::getNumero() {
    return numero;
}

void Quarto::setNumero(int numeroAux) {
    numero = numeroAux;
}

bool Quarto::getReservado() {
    return reservado;
}

void Quarto::setResarvado(bool reservadoAux) {
    reservado = reservadoAux;
}

#endif // QUARTO_H_INCLUDED

