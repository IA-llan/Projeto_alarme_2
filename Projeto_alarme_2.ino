void setup()
{
  Serial.begin(9600); //Inicia comunicacao com o monitor serial.
  pinMode(3, OUTPUT); //A porta digital 6 ira enviar sinais.
  pinMode(5, INPUT); //A porta 5 ira receber sinais.
  pinMode(4, OUTPUT); //A porta 4 enviara sinais.
  pinMode(A0, INPUT); //A porta A0 ira receber sinais.
}

void loop() //Estrutura de repeticao.
{
  digitalWrite(4, HIGH); //Liga a porta 4
  int LDR = analogRead(A0); //A variável LDR recebe o valor da porta analogica A0
  int PIR = digitalRead(5); //A variável PIR recebe o valor da por digital 5
  
  
   if(LDR <= 960 || PIR == 1) //É colocada uma condicao para as variaveis PIR e LDR.
    {
     digitalWrite(3, HIGH); //A porta 6 é ligada
      delay(400); // Espera por 400 milisegundos
     digitalWrite(3, LOW); //A porta 6 é desligada
      delay(400); // Espera por 400 milisegundos
    
    
    
  }
}
