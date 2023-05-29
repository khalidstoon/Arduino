
#include <IRremote.h>
int RECV_PIN = 11;
int buttonState ;
IRrecv irrecv(RECV_PIN);
decode_results results;
 
void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode( 22, OUTPUT); 
  pinMode( 24, OUTPUT); 
   pinMode( 26, OUTPUT); 
    pinMode( 28, OUTPUT); 
     pinMode( 30, OUTPUT); 
      pinMode( 32, OUTPUT); 
       pinMode( 34, OUTPUT); 
   pinMode( 36, OUTPUT); 
  buttonState = HIGH; 
}
 
void loop() {
  
  buttonState = digitalRead(22);
        
  if (irrecv.decode(&results)) {   
    
    if (results.value == 0xE0E040BF) { 
        digitalWrite(22, LOW);
        }
    if (results.value == 0xE0E020DF) { 
        digitalWrite(22, HIGH); 
        } 
   

   buttonState = digitalRead(24);
        
  if (irrecv.decode(&results)) {   
    
    if (results.value == 0xE0E040BF) { 
        digitalWrite(24, LOW); 
        }
    if (results.value == 0xE0E0A05F) { 
        digitalWrite(24, HIGH); 
        }   
         buttonState = digitalRead(26);
        
  if (irrecv.decode(&results)) {   
    
    if (results.value == 0xE0E040BF) { 
        digitalWrite(26, LOW); 
        }
    if (results.value == 0xE0E0609F) { 
        digitalWrite(26, HIGH); 
        }   
         buttonState = digitalRead(28);
        
  if (irrecv.decode(&results)) {   
    
    if (results.value == 0xE0E040BF) { 
        digitalWrite(28, LOW); 
        }
    if (results.value == 0xE0E010EF) { 
        digitalWrite(28, HIGH); 
        }   
         buttonState = digitalRead(30);
        
  if (irrecv.decode(&results)) {   
    
    if (results.value == 0xE0E040BF) { 
        digitalWrite(30, LOW); 
        }
    if (results.value == 0x807fA857) { 
        digitalWrite(30, HIGH); 
        }   
         buttonState = digitalRead(32);
        
  if (irrecv.decode(&results)) {   
    
    if (results.value == 0xE0E040BF) { 
        digitalWrite(32, LOW); 
        }
    if (results.value == 0x807f6897) { 
        digitalWrite(32, HIGH); 
        }   
         buttonState = digitalRead(34);
        
  if (irrecv.decode(&results)) {   
    
    if (results.value == 0xE0E040BF) { 
        digitalWrite(34, LOW); 
        }
    if (results.value == 0x807fE817) { 
        digitalWrite(34, HIGH); 
        }   
         buttonState = digitalRead(36);
        
  if (irrecv.decode(&results)) {   
    
    if (results.value == 0xE0E040BF) { 
        digitalWrite(36, LOW); 
        }
    if (results.value == 0x807f18E7) { 
        digitalWrite(36, HIGH); 
       
        }
        if (results.value == 0xE0E016E9) { 
        digitalWrite(22, HIGH);
        digitalWrite(24, HIGH);
        digitalWrite(26, HIGH);
        digitalWrite(28, HIGH);
        }   
        
           
  irrecv.resume(); 
  }
  
  Serial.print(" ");
  Serial.println(results.value, HEX);
   
  
  delay(100);
}
}
  }
  }
  }
  }
  }
  }
