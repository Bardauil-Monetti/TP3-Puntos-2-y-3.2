#ifndef MOTORESPP_H
#define MOTORESPP_H
#include <stm32f103xb.h>
void motorespp_init(); 
int pasoNormal_init(int IN0, int IN1, int IN2, int IN3);
int pasoNormal(int IN0, int IN1, int IN2, int IN3, int pasos);
int pasoCompleto_init(int IN0, int IN1, int IN2, int IN3);
int pasoCompleto(int IN0, int IN1, int IN2, int IN3, int pasos);
int pasoMedio_init(int IN0, int IN1, int IN2, int IN3);
int pasoMedio(int IN0, int IN1, int IN2, int IN3, int pasos);
#endif