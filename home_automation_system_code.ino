const int load1=4;
const int load2=5;
const int load3=6;
const int vcc=8;
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
              digitalWrite(load1,HIGH);
              break;
      case '2': Serial.print("Fan On");
              digitalWrite(load2,HIGH);
              break;
      case '3': Serial.print("Ac On");
              digitalWrite(load3,HIGH);
              break;
      case '4': Serial.print("Lights Off");
              digitalWrite(load1,LOW);
              break;
      case '5': Serial.print("Fan Off");
              digitalWrite(load2,LOW);
              break;
      case '6': Serial.print("Ac Off");
              digitalWrite(load3,LOW);
              break;
      default: Serial.print("Default Case Generated");
    }
  }
}
