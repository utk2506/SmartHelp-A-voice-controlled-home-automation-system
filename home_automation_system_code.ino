const int load1=4; //connect input pin relay1 with arduino pin 4
const int load2=5; //connect input pin relay2 with arduino pin 5
const int load3=6; //connect input pin relay3 with arduino pin 6

const int vcc=8; //connect vcc pin of both relay with arduino pin 8
int s;
void setup() {
  // put your setup code here, to run once:
  pinMode(load1,OUTPUT);
  pinMode(load2,OUTPUT);
  pinMode(load3,OUTPUT);
  pinMode(vcc,OUTPUT);
  digitalWrite(vcc,HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    s=Serial.read();
    Serial.println(s);
     switch(s)
    {
      case '1': Serial.print("Lights On");
              digitalWrite(load1,HIGH); //when voice come "Lights On"then relay1 on
              break;
      case '2': Serial.print("Fan On");
              digitalWrite(load2,HIGH); //when voice come "Fan On"then relay2 on
              break;
      case '3': Serial.print("Ac On");
              digitalWrite(load3,HIGH); //when voice come "Ac On"then relay3 on
              break;
      case '4': Serial.print("Lights Off");
              digitalWrite(load1,LOW);  //when voice come "Lights Off"then relay1 off
              break;
      case '5': Serial.print("Fan Off");
              digitalWrite(load2,LOW); //when voice come "Fan Off"then relay2 off
              break;
      case '6': Serial.print("Ac Off");
              digitalWrite(load3,LOW); //when voice come "Ac Off"then relay3 off
              break;
      default: Serial.print("Default Case Generated"); //when àny other voice receive then "type you want write message"
    }
  }
}
