void setup()
{
  pinMode(13, OUTPUT);
}

int morseCodeLetterS(){
  // S  
  digitalWrite(13, HIGH);   
  
  delay(500);              
  
  digitalWrite(13, LOW);    
  
  delay(100);              

  digitalWrite(13, HIGH);   
 
  delay(500);              
  
  digitalWrite(13, LOW);    
  
  delay(100);              

  digitalWrite(13, HIGH);   
  
  delay(500);              
  
  digitalWrite(13, LOW);    
  
  delay(100);
}

int morseCodeLetterO(){
  // O
  
  digitalWrite(13, HIGH);   

  delay(1500);              

  digitalWrite(13, LOW);    

  delay(100);              

  digitalWrite(13, HIGH);   

  delay(1500);              

  digitalWrite(13, LOW);    

  delay(100);              

  digitalWrite(13, HIGH);   

  delay(1500);              

  digitalWrite(13, LOW);    

  delay(100); 
}

void loop() {
  morseCodeLetterS();
  morseCodeLetterO();
  morseCodeLetterS();
  delay(1000);                 
}

