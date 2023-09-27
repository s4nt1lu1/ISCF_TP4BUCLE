void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode (11, INPUT);
}

void loop() {
  if(digitalRead(11==HIGH)){
    digitalWrite(13,HIGH);
  }else{
     //F= (s^(-1)); 16MHZ^(-1)=1/16,000;  El bucle for realiza 3 acciones, la declaracion de i, la comparacion y el incremento en i. Por lo que ocupa 3 acciones -> 16,000/3~=5,333
    for(int i=0;i<5333;i++){
       digitalWrite(13,LOW);}
    for(int i=0;i<5333;i++){
    digitalWrite(13,HIGH);
    }
  }
}