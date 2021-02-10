#define LED 13
#define MIN30 1800000
#define MIN60 3600000
#define MIN90 5400000
#define SECOND 1000
int ledTime = 0;
int stopCircuit = 0;

void setup() {
                                //Settaggio del timer
  ledTime = MIN90;
                                //Settaggio dei pin
  pinMode(LED, OUTPUT);
                                //Luce accesa
  digitalWrite(LED, HIGH);
                                //Timer
  do{

     if(ledTime == 0){          //Se sono finiti i secondi
      digitalWrite(LED, LOW);   //Spegni la luce
      stopCircuit = 1;          //Exit point
    
    } else {                    //Altrimenti togli un secondo dal Timer
      ledTime -= SECOND;
    }
    delay(1000);
    } while (stopCircuit == 0); //Luce spenta

}

void loop() {
 //Null
}
