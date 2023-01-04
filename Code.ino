int val = 0 ; 
int ledPin = 5; //D1
 void setup()  
 {  
   Serial.begin(9600); // sensor buart rate  
    // Led Pin Connected To D1 Pin    
   pinMode(ledPin,OUTPUT);
   digitalWrite(ledPin,LOW);

 }  
 void loop()   
 {  
  val = digitalRead(12); // Sensor Digital output pin connected to D6  
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