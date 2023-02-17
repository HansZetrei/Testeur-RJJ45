#include <Arduino.h>
#include "Reseaux.hpp"

//initaialisation de mes différents fils
int orangePin1;
int blancOrangePin1;
int vertPin1 ;
int blancVertPin1 ;
int bleuPin1 ;
int blancBleuPin1 ;
int marronPin1 ;
int blancMarronPin1 ;
int orangePin2 ;
int blancOrangePin2 ;
int vertPin2 ;
int blancVertPin2 ;
int bleuPin2 ;
int blancBleuPin2 ;
int marronPin2 ;
int blancMarronPin2 ;



void setup() {
  Serial.begin(9600);//Affichage sur le moniteur série
 pinMode(orangePin1,INPUT);
  pinMode(blancOrangePin1,INPUT);
  pinMode(bleuPin1,INPUT);
  pinMode(blancBleuPin1,INPUT);
  pinMode(vertPin1,INPUT);
  pinMode(blancVertPin1,INPUT);
  pinMode(marronPin1,INPUT);
  pinMode(blancMarronPin1,INPUT);

  pinMode(orangePin2,OUTPUT);
  pinMode(blancOrangePin2,OUTPUT);
  pinMode(bleuPin2,OUTPUT);
  pinMode(blancBleuPin2,OUTPUT);
  pinMode(vertPin2,OUTPUT);
  pinMode(blancVertPin2,OUTPUT);
  pinMode(marronPin2,OUTPUT);
  pinMode(blancMarronPin2,OUTPUT);

}

void loop() {
   Reseaux r1(20,21,18,19,16,17,14,15,3,2,5,4,7,6,9,8);
  
  r1.entree() ;
  Serial.println("Cable droit");
  
  r1.sortie() ;
  Serial.println("cable croisé");

}