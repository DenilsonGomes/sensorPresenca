#include <Arduino.h>

#define pinoPIR 2
#define pinoSaida 13
int valor = 0;

void setup() {
    pinMode(pinoPIR, INPUT);
    pinMode(pinoSaida, OUTPUT);
    Serial.begin(9600);
}

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