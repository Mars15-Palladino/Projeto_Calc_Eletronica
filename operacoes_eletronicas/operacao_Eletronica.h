#ifndef OPERACAO_ELETRONICA_H
#define OPERACAO_ELETRONICA_H


double tensao(double corrente, double resistencia);
double corrente(double tensao, double resistencia);
double resistencia(double tensao, double corrente);

double potencia_tensao_corrente(double tensao, double corrente);
double potencia__tensao_resistencia(double tensao, double resistencia);
double potencia_corrente_resistencia(double corrente, double resistencia); 



#endif // OPERACAO_ELETRONICA_H