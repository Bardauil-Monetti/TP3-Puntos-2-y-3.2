#include "MOTORESPP_H"
#include <stm32f103xb.h>

void motorespp_init(){

int main(void) {
    GPIOA -> CRL = 0x11111111;
    int pasos; 
    }
    } 
while(1){ 
   void MotorPaP_init(int IN0, int IN1, int IN2, int IN3){ 
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
void MotorPaP_init(int IN0, int IN1, int IN2, int IN3) {
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
void MotorPaP_init(int IN0, int IN1, int IN2, int IN3) {
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
void MotorPaP(int IN0, int IN1, int IN2, int IN3, char tipoPaso, int pasos){
switch (tolower(tipopaso));
{
case:"n"
    int pasoNormal_init(int IN0, int IN1, int IN2, int IN3);
    break;

    case:"m"
 int pasoMedio(int IN0, int IN1, int IN2, int IN3, int pasos);
    break;
    
    case:"c"
   int  pasoCompleto(int IN0, int IN1, int IN2, int IN3, int pasos);

    break;

}
int sec1 [4][4]{
        {1, 1, 0, 0},
        {0, 1, 1, 0},
        {0, 0, 1, 1},
        {1, 0, 0, 1},

    };
int pasoNormal(int IN0, int IN1, int IN2, int IN3){
    
    for(int i=0 ;i < pasos ;i++){//pasos - filas
        for(int j=0, j<4; j++){  //pines de bobinas - columnas
        if(sec1[i%4][i])
        GPIOA -> BSRR|=(1<<pines[1]);
        else GPIOA -> BSRR |= (1<<pines[j]+16);
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
    GPIOA -> CRL = 0x11111111;
    int pasos; 
    }
while(1){ 
    void pasoNormal(int IN0, int IN1, int IN2, int IN3, int pasos){ 
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
void MotorPaP(int IN0, int IN1, int IN2, int IN3, char tipoPaso, int pasos){
switch (tolower(tipopaso));
{
case:"n"
    int pasoNormal_init(int IN0, int IN1, int IN2, int IN3);
    break;

    case:"m"
 int pasoMedio(int IN0, int IN1, int IN2, int IN3, int pasos);
    break;
    
    case:"c"
   int  pasoCompleto(int IN0, int IN1, int IN2, int IN3, int pasos);

    break;

}
int sec1 [4][4]{
        {1, 1, 0, 0},
        {0, 1, 1, 0},
        {0, 0, 1, 1},
        {1, 0, 0, 1},

    };
int pasoNormal(int IN0, int IN1, int IN2, int IN3){
    
    for(int i=0 ;i < pasos ;i++){//pasos - filas
        for(int j=0, j<4; j++){  //pines de bobinas - columnas
        if(sec1[i%4][i])
        GPIOA -> BSRR|=(1<<pines[1]);
        else GPIOA -> BSRR |= (1<<pines[j]+16);
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
