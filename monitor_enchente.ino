
int cm = 0;
#define vermelho 2
#define amarelo 9
#define verde 3
#define buzzer 8
const int seguro = 2;
const int atencao = 50;
const int alerta = 70;
const int critico = 91;
void setup()
{ 
    pinMode(12, OUTPUT); // trigger
    pinMode(10, INPUT); // ECHO
  	pinMode(vermelho, OUTPUT);
  	pinMode(amarelo, OUTPUT);
  	pinMode(verde, OUTPUT);
  	pinMode(buzzer, OUTPUT);
  	Serial.begin(9600);	
}

void loop()
{
    
  digitalWrite(12, LOW);
  delayMicroseconds(2);
  
  digitalWrite(12, HIGH);
  delayMicroseconds(10);
  digitalWrite(12, LOW);
   
  cm = pulseIn(10, HIGH);
  
  cm = cm/58; 
  
  cm = map(cm, 400, 2, 0, 100);
  
  bool estadoSeguro   = (cm >= seguro  && cm < atencao);
  bool estadoAtencao  = (cm >= atencao && cm < alerta);
  bool estadoAlerta   = (cm >= alerta  && cm < critico);
  bool estadoCritico  = (cm >= critico && cm <= 100);
  
  Serial.println(cm);
  
  if(cm >= seguro && cm < atencao){
   digitalWrite(verde, HIGH);
   delay(1000);
   digitalWrite(verde, LOW);
    delay(1000);
   digitalWrite(buzzer, LOW);
     digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, LOW);
  }
  
  if(cm >= atencao && cm < alerta){
    digitalWrite(amarelo, HIGH);
    delay(500);
    digitalWrite(amarelo, LOW);
    delay(500);
    digitalWrite(buzzer, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(vermelho, LOW);
  }
    if(cm >= alerta && cm < critico){
      digitalWrite(vermelho, HIGH);
        delay(200);
        digitalWrite(vermelho, LOW);
        delay(200);
      	digitalWrite(buzzer, HIGH);
         delay(200);
      digitalWrite(buzzer, LOW);
      delay(200);
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, LOW);
    }
      
      if( cm >=critico && cm <= 100){
      digitalWrite(vermelho, HIGH);
        delay(100);
        digitalWrite(vermelho, LOW);
        delay(100);
      	digitalWrite(buzzer, HIGH);
         delay(100);
      digitalWrite(buzzer, LOW);
      delay(100);
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, LOW);
      
      
      
      }
    
  
 
  }
 
