const int pinoVermelho = 13;
const int pinoAmarelo = 12;
const int pinoVerde = 8;

void setup() {
  pinMode(pinoVermelho, OUTPUT);
  pinMode(pinoAmarelo, OUTPUT);
  pinMode(pinoVerde, OUTPUT);
}

void loop() {
//sinal verde aberto
  digitalWrite(pinoVerde, HIGH);
  digitalWrite(pinoAmarelo, LOW);
  digitalWrite(pinoVermelho, LOW);
  delay(2000); //2seg de verde
//sinal amarelo
  digitalWrite(pinoVerde, LOW);
  digitalWrite(pinoAmarelo, HIGH);
  digitalWrite(pinoVermelho, LOW);
  delay(1000); //1 seg de amarelo
//sinal vermelho
  digitalWrite(pinoVerde, LOW);
  digitalWrite(pinoAmarelo, LOW);
  digitalWrite(pinoVermelho, HIGH);
  delay(2000); //2 seg de vermelho
}