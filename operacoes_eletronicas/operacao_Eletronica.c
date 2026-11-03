#include "operacao_Eletronica.h"


double tensao(double corrente, double resistencia) {
    return corrente * resistencia;
}

double corrente(double tensao, double resistencia) {
    return tensao / resistencia;
}

double resistencia(double tensao, double corrente) {
    return tensao / corrente;
}

double potencia_tensao_corrente(double tensao, double corrente) {
    return tensao * corrente;
}
double potencia__tensao_resistencia(double tensao, double resistencia) {
    return (tensao * tensao) / resistencia;
}
double potencia_corrente_resistencia(double corrente, double resistencia) {
    return (corrente * corrente) * resistencia;
}