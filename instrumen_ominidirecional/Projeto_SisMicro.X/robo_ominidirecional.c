/* 
 * File:   testeDePinagem.c
 * Author: aluno
 *
 * Created on 13 de Novembro de 2019, 22:00
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>

//Pinos para saída PWM
#define PWM_A PB1 //9
#define PWM_B PB2 //10
#define PWM_C PB3 //11
//Pinos para saída do sinal de direção
#define DIR_A PD4 //4
#define DIR_B PD5 //5
#define DIR_C PD6 //6
//Pinos para interrupção pelo sinal do encoder
#define ENC_A PD2 //2
#define ENC_B PD3 //3
/*
 * 
 */
int main(int argc, char** argv) {
    
    //Define como saída 9,10,11
    DDRB = (1 << DDB1) | ((1 << DDB2)) | (1 << DDB3);
    //Define como saída 4,5,6
    DDRD = (1 << DDD4) | ((1 << DDD5)) | (1 << DDD6);
    //Define como entrada para interrupção 2,3
    DDRD = ~(1 << DDD2) & ~(1 << DDD3); 
    //Sinal de saída alto para pinos 9,10,11
    PORTB = (1 << PWM_A) | ((1 << PWM_B)) | (1 << PWM_C); 
    //Sinal de saída alto para pinos 4,5,6
    PORTD = (1 << DIR_A) | ((1 << DIR_B)) | (1 << DIR_C); 
    
    int i; //variável para contador
    //loop principal
    while(1){
        //teste pisca led
        PORTD^=(1<<DIR_A); //inverte estado do pino PB5
        for (i=0; i<=1000; i++){
            printf("Delay");
            //delay
        }
    }

    return 0;
}

