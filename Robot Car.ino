int motorA1 = 5; 
int motorA2 = 6; 
int motorB1 = 9; 
int motorB2 = 10; 
int msg= 'g';
void setup() { 
Serial.begin(9600);
pinMode(motorB1, OUTPUT);
pinMode(motorB2, OUTPUT);
pinMode(motorA1, OUTPUT);
pinMode(motorA2, OUTPUT);
} 

void loop() { 

if(Serial.available()>0){
msg = Serial.read();
}
if(msg=='a'){ // Forward
analogWrite(motorB2, 0); 
analogWrite(motorA2, 0); 
analogWrite(motorB1, 1); 
analogWrite(motorA1, 1); 
}
if(msg=='d'){ // right
analogWrite(motorB2, 1); 
analogWrite(motorA2, 0); 
analogWrite(motorB1, 0); 
analogWrite(motorA1, 1); 
}
if(msg=='c'){ // Stop
analogWrite(motorB2, 0); 
analogWrite(motorA2, 0); 
analogWrite(motorB1, 0); 
analogWrite(motorA1, 0); 
}
if(msg=='b'){ // left
analogWrite(motorB2, 0); 
analogWrite(motorA2, 1);
analogWrite(motorA1, 0);
analogWrite(motorB1, 1); 
} 

if(msg=='e'){ // Reverse
analogWrite(motorB1, 0); 
analogWrite(motorA1, 0);
analogWrite(motorB2, 1); 
analogWrite(motorA2, 1); 
}
}
