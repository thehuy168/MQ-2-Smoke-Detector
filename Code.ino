int val = 0 ; 
int ledPin = 5; //D1 pin
 void setup()  
 {  
   Serial.begin(9600); // sensor buart rate  
    // LedPin Connected To D1 pin    
   pinMode(ledPin,OUTPUT);
   digitalWrite(ledPin,LOW);

 }  
 void loop()   
 {  
  val = digitalRead(12); // Sensor Digital output  connected to D6 pin
  Serial.println(val);  // see the value in serial m0nitor in Arduino IDE  

  delay(100);      // for timer  
  if(val == 0 )  
  {  
   digitalWrite(ledPin,HIGH); // LED ON  
  }  
  else  
  {  
   digitalWrite(ledPin,LOW); // LED OFF  
  }  
  }  
