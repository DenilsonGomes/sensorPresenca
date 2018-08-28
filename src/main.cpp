/*
Autor: Denilson Gomes Vaz da Silva
Graduando em Engenharia da Computação - UFC

Código para leitura de presença usando sensor PIR
*/

//--Bibliotecas
#include <Arduino.h>

//--Variaveis e COnstantes
#define pinoPIR 2
#define pinoSaida 13
int valor = 0;

//--Setup
void setup() {
    pinMode(pinoPIR, INPUT);
    pinMode(pinoSaida, OUTPUT);
    Serial.begin(9600);
}

//Loop
void loop() {
    valor = digitalRead(pinoPIR);
    while(valor){
        digitalWrite(pinoSaida, HIGH);
        Serial.println("Presença");
        valor = digitalRead(pinoPIR);
        delay(2000);
    }
    digitalWrite(pinoSaida, LOW);
}