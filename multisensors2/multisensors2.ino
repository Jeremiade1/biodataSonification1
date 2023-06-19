int val[2]; // array. 2 sensors totals

void setup() {
  Serial.begin(9600); //Serial communcation set up

}

void loop() {
  //Read analaog inputs one by one and send them to Pure Data
  for(int i = 0; i < 2 ; i++){
    val[i]= analogRead(i);
Serial.print(val[i]); 
Serial.print(" ");
}   
Serial.println();
delay(50); 
}