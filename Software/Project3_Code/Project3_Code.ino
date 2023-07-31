int threshold = 20;
void setup()
{
  pinMode(0, OUTPUT); // set all the pins as output
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() 
{  // enter the loop
  int voltage = analogRead(A0);
  if(voltage < threshold) {
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
  }
  else if(voltage > threshold) {
    
    if(voltage <= 464 && voltage > 424) { //Purple
      analogWrite(0, 0);
      analogWrite(1, 128);
      analogWrite(2, 128);
    }
    else if(voltage > 464 && voltage <= 484) { //Cyan
      analogWrite(0, 255);
      digitalWrite(1, LOW);
      analogWrite(2, 255);
    }
    else if(voltage > 484 && voltage <= 504) {  //Green
      digitalWrite(0, HIGH);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
    }
    else if(voltage > 504 && voltage <= 520) { //OFF
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
    }
    else if(voltage > 520 && voltage <= 540) { //Blue
      digitalWrite(0, 0);
      digitalWrite(1, LOW);
      digitalWrite(2, HIGH);
    }
    else if(voltage > 540 && voltage <= 560) { //Orange
      analogWrite(0, 165);
      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
    }
    else { //Red
      digitalWrite(0, LOW);
      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
    }
  }
 delay(40); // wait for 40ms
}
