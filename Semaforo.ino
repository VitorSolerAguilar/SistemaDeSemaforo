int ledVermelhoPedestre = 3;
int ledVerderPedestre = 2;

int ledVermelhoSemaf = 6;
int ledAmareloSemaf = 5;
int ledVerdeSemaf = 4;

int buzzer = 13;

void setup()
{
  pinMode(ledVermelhoPedestre, OUTPUT);
  pinMode(ledVerderPedestre, OUTPUT);
  
  pinMode(ledVermelhoSemaf, OUTPUT);
  pinMode(ledAmareloSemaf, OUTPUT);
  pinMode(ledVerdeSemaf, OUTPUT);
}

void loop()
{ 
  digitalWrite(ledVerdeSemaf, 1);
  digitalWrite(ledVermelhoPedestre, 1);
  delay(3000);
  
  digitalWrite(ledVerdeSemaf, 0);
  digitalWrite(ledAmareloSemaf, 1);
  delay(3000);
  
  digitalWrite(ledAmareloSemaf, 0);
  digitalWrite(ledVermelhoSemaf, 1);
  delay(3000);
  
  digitalWrite(ledVermelhoPedestre, 0);
    tone(buzzer, 523);
  delay(1000);
  noTone(buzzer);
  digitalWrite(ledVerderPedestre, 1);
  delay(3000);
  
  digitalWrite(ledVerderPedestre, 0);
  digitalWrite(ledVermelhoSemaf, 0);
}
