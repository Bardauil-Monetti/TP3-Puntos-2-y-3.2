#include "motorespp.h"
void motorespp_init(){
    GPIOA -> CRL = 0x11111111;
    int pasos; 
while(1){ 
    int pasoNormal_init(int IN0, int IN1, int IN2, int IN3) {
    int pines[4] = {IN0, IN1, IN2, IN3};    
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;
    for (int i = 0; i < 3; i++) {
        if (pines[i] < 8) {
            GPIOA->CRL &= ~ (1 << pines[i] * 4) 
                          &~  (1 << (pines[i] * 4 + 1)) 
                          &~  (1 << (pines[i] * 4 + 2)) 
                          &~  (1 << (pines[i] * 4 + 3)) ;
            GPIOA->CRL |= (1 << (pines[i] * 4));
        } else {
            GPIOA->CRH &= ~(1 << ((pines[i] % 8) * 4)) 
                         &~  (1 << ((pines[i] % 8) * 4 + 1)) 
                         &~(1 << ((pines[i] % 8) * 4 + 2)) 
                         &~ (1 << ((pines[i] % 8) * 4 + 3)) ;
            GPIOA->CRH |= (1 << ((pines[i] % 8) * 4));
        }
    }
}
void pasoCompleto_init(int IN0, int IN1, int IN2, int IN3) {
    int pines[4] = {IN0, IN1, IN2, IN3};    
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;
    for (int i = 0; i < 3; i++) {
        if (pines[i] < 8) {
            GPIOA->CRL &= ~ (1 << pines[i] * 4) 
                          &~  (1 << (pines[i] * 4 + 1)) 
                          &~  (1 << (pines[i] * 4 + 2)) 
                          &~  (1 << (pines[i] * 4 + 3)) ;
            GPIOA->CRL |= (1 << (pines[i] * 4));
        } else {
            GPIOA->CRH &= ~(1 << ((pines[i] % 8) * 4)) 
                         &~  (1 << ((pines[i] % 8) * 4 + 1)) 
                         &~(1 << ((pines[i] % 8) * 4 + 2)) 
                         &~ (1 << ((pines[i] % 8) * 4 + 3)) ;
            GPIOA->CRH |= (1 << ((pines[i] % 8) * 4));
        }
    }
}
void pasoMedio_init(int IN0, int IN1, int IN2, int IN3) {
    int pines[4] = {IN0, IN1, IN2, IN3};    
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;
    for (int i = 0; i < 4; i++) {
        if (pines[i] < 8) {
            GPIOA->CRL &= ~ (1 << pines[i] * 4) 
                          &~  (1 << (pines[i] * 4 + 1)) 
                          &~  (1 << (pines[i] * 4 + 2)) 
                          &~  (1 << (pines[i] * 4 + 3)) ;
            GPIOA->CRL |= (1 << (pines[i] * 4));
        } else {
            GPIOA->CRH &= ~(1 << ((pines[i] % 8) * 4)) 
                         &~  (1 << ((pines[i] % 8) * 4 + 1)) 
                         &~(1 << ((pines[i] % 8) * 4 + 2)) 
                         &~ (1 << ((pines[i] % 8) * 4 + 3)) ;
            GPIOA->CRH |= (1 << ((pines[i] % 8) * 4));
        }
    }
}
int sec1 [4][4]{
        {1, 1, 0, 0},
        {0, 1, 1, 0},
        {0, 0, 1, 1},
        {1, 0, 0, 1},

    };
int pasoNormal(int IN0, int IN1, int IN2, int IN3, int pasos);{
    
    for(int i=0 ;i < pasos ;i++){//pasos - filas
        for(int j=0, j < 4; j++){  //pines de bobinas - columnas
        if(sec1[i%4][i])//error de definicion de sec1 pero esta definida arriba
        GPIOA -> BSRR|=(1<<pines[j]);//error de definicion de pines pero esta definida arriba
        else GPIOA -> BSRR |= (1<<pines[j]+16);//error de definicion de pines pero esta definida arriba
        }
    }
}

int sec2 [4][4]{
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {0, 1, 0, 0},
        {0, 1, 1, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 1},
        {0, 0, 0, 1},
        {1, 0, 0, 1},

    };
int pasoMedio(int IN0, int IN1, int IN2, int IN3, int pasos){
    for(int i=0 ;i < pasos ;i++){//pasos - filas
        for(int j=0, j<8; j++){  //pines de bobinas - columnas
        if(sec1[i%8][i])
        GPIOA -> BSRR|=(1<<pines[1]);
        else GPIOA -> BSRR |= (1<<pines[j]+16);
        }
    };
}
    int sec3 [4][4]{
        {0, 0, 0, 1},
        {0, 0, 1, 0},
        {0, 1, 0, 0},
        {1, 0, 0, 1},

    };
int pasoCompleto(int IN0, int IN1, int IN2, int IN3, int pasos){
    for(int i=0 ;i < pasos ;i++){//pasos - filas
        for(int j=0, j<4; j++){  //pines de bobinas - columnas
        if(sec1[i%4][i])
        GPIOA -> BSRR|=(1<<pines[1]);
        else GPIOA -> BSRR |= (1<<pines[j]+16);
        }
    }
}
}
return 0;
}