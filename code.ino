void setup()
{
  pinMode(13, OUTPUT); // Configura o pino 13 como saída para controlar o LED verde
  pinMode(12, OUTPUT); // Configura o pino 12 como saída para controlar o LED amarelo
  pinMode(11, OUTPUT); // Configura o pino 11 como saída para controlar o LED vermelho
  pinMode(8, OUTPUT);  // Configura o pino 8 como saída para controlar o buzzer
}

void loop()
{
  // Controle do LED verde 
  digitalWrite(13, HIGH); // Acende o LED verde
  delay(2000);            // Mantém o LED verde aceso por 2 segundos
  digitalWrite(13, LOW);  // Apaga o LED verde após 2 segundos

  // Sequência de controle do LED amarelo
  digitalWrite(12, HIGH); // Acende o LED amarelo
  delay(2000);            // Mantém o LED amarelo aceso por 2 segundos
  digitalWrite(12, LOW);  // Apaga o LED amarelo após 2 segundos

  // Piscar o LED vermelho e acionar o buzzer
  // Realiza uma sequência de 4 piscadas rápidas do LED vermelho, com o buzzer emitindo som simultaneamente
  for (int i = 0; i < 4; i++) { // Repete o bloco abaixo 4 vezes
    digitalWrite(11, HIGH); // Acende o LED vermelho
    digitalWrite(8, HIGH);  // Liga o buzzer
    delay(250);             // Mantém o LED e o buzzer ligados por 250 ms

    digitalWrite(11, LOW);  // Apaga o LED vermelho
    digitalWrite(8, LOW);   // Desliga o buzzer
    delay(250);             // Mantém o LED apagado e o buzzer desligado por 250 ms
  }

  // Acender o LED vermelho por um período contínuo
  digitalWrite(11, HIGH); // Acende o LED vermelho
  delay(4000);            // Mantém o LED vermelho aceso por 4 segundos contínuos
  digitalWrite(11, LOW);  // Apaga o LED vermelho após o período de 4 segundos
}
