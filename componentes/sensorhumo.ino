//Grupo 3: Alan Sued, Juan Salinas, Valentín Alfuzzi

#define POTENCIOMETRO 34

int valorGas;

void setup() {
  Serial.begin(115200);
}

void loop() {

  valorGas = analogRead(POTENCIOMETRO);

  Serial.print("Nivel de gas: ");
  Serial.println(valorGas);

  if (valorGas < 1000) {
    Serial.println("Estado: SEGURO");
  }
  else if (valorGas < 2500) {
    Serial.println("Estado: PRECAUCION");
  }
  else {
    Serial.println("GAS DETECTADO");
  }

  Serial.println("-----------------------");

  delay(500);
}
