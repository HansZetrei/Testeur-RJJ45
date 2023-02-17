class Reseaux{

    //Attribution des diferentes broches digitale a chacun de mes fils
    public:
    int orangePin1 = 20;
    int blancOrangePin1 = 21;
    int vertPin1 = 18;
    int blancVertPin1 = 19;
    int bleuPin1 = 16;
    int blancBleuPin1 = 17;
    int marronPin1 = 14;
    int blancMarronPin1 = 15;
    int orangePin2 = 3;
    int blancOrangePin2 = 2;
    int vertPin2 = 5;
    int blancVertPin2 = 4;
    int bleuPin2 = 7;
    int blancBleuPin2 = 6;
    int marronPin2 = 9;
    int blancMarronPin2 = 8;
    



    Reseaux(int op1, int bop1, int vp1, int bvp1, int bp1, int bbp1, int mp1, int bmp1,int op2, int bop2, int vp2, int bvp2, int bp2, int bbp2, int mp2, int bmp2 ){
    orangePin1 = op1;
    blancOrangePin1 = bop1;
    vertPin1 = vp1;
    blancVertPin1 = bvp1;
    bleuPin1 = bp1;
    blancBleuPin1 = bbp1;
    marronPin1 = mp1;
    blancMarronPin1 = bmp1;
    orangePin2 = op2;
    blancOrangePin2 = bop2;
    vertPin2 = vp2;
    blancVertPin2 = bvp2;
    bleuPin2 = bp2;
    blancBleuPin2 = bbp2;
    marronPin2 = mp2;
    blancMarronPin2 = bmp2;

    }

    void initialisation(){

        //initialisation de mes broches qui recevront le signal
        pinMode(orangePin1,INPUT);
        pinMode(blancOrangePin1,INPUT);
        pinMode(bleuPin1,INPUT);
        pinMode(blancBleuPin1,INPUT);
        pinMode(vertPin1,INPUT);
        pinMode(blancVertPin1,INPUT);
        pinMode(marronPin1,INPUT);
        pinMode(blancMarronPin1,INPUT);

        //initialisation de mes broches qui sortiront le signal
        pinMode(orangePin2,OUTPUT);
        pinMode(blancOrangePin2,OUTPUT);
        pinMode(bleuPin2,OUTPUT);
        pinMode(blancBleuPin2,OUTPUT);
        pinMode(vertPin2,OUTPUT);
        pinMode(blancVertPin2,OUTPUT);
        pinMode(marronPin2,OUTPUT);
        pinMode(blancMarronPin2,OUTPUT);
    }

    //methode permettant de verifier si le cable estgit droit
    bool entree(){
    int val = 0; // variable qui permettra de vérifier le nombre de broche a vérifer leurs états
    digitalWrite(blancOrangePin1, HIGH); //allumer la broche avec le fil blancOrange
    if(digitalRead(blancOrangePin2) == HIGH){ //verifier si le fil blancOrange de l'autre extrémité est aussi allumé
        val += 1;
    }
    digitalWrite(orangePin1, HIGH);
    if (digitalRead(orangePin2) == HIGH){
        val += 1;
    }
   digitalWrite(blancVertPin1, HIGH);
    if(digitalRead(blancVertPin2) == HIGH){
        val += 1;
    }
   digitalWrite(bleuPin1, HIGH);
    if(digitalRead(bleuPin2) == HIGH){
        val += 1;
    }
   digitalWrite(blancBleuPin1, HIGH);
    if(digitalRead(blancBleuPin2) == HIGH){
        val += 1;
    }
   digitalWrite(blancMarronPin1, HIGH);
    if(digitalRead(blancMarronPin2) == HIGH){
        val += 1;
    }
   digitalWrite(marronPin1, HIGH);
    if(digitalRead(marronPin2) == HIGH){
        val += 1;
    }

    return true;

   }

    //methode permettant de verifier si le cable est croisé
   bool sortie(){
    int comp = 0;
    digitalWrite(blancOrangePin1, HIGH);
    if(digitalRead(blancVertPin2) == HIGH){
        comp += 1;
    }
    digitalWrite(orangePin1, HIGH);
    if(digitalRead(vertPin2) == HIGH){
        comp += 1;
    }
    digitalWrite(blancVertPin1, HIGH);
    if (digitalRead(blancOrangePin2) == HIGH){
        comp += 1;
    }
    digitalWrite(bleuPin1, HIGH);
    if(digitalRead(bleuPin2) == HIGH){
        comp += 1;
    }
    digitalWrite(blancBleuPin1, HIGH);
    if(digitalRead(blancBleuPin1) == HIGH){
        comp += 1;
    }
    digitalWrite(vertPin1, HIGH);
    if(digitalRead(orangePin2) == HIGH){
        comp += 1;
    }
    digitalWrite(blancMarronPin1, HIGH);
    if (digitalRead(blancMarronPin2) == HIGH){
        comp += 1;
    }
    digitalWrite(marronPin1, HIGH);
    if(digitalRead(marronPin2) == HIGH){
        comp += 1;
    }

    return true;
   }



};