int pino_rec = 5; //pino do gravador
int pino_playe = 7; //pino do reprodutor de voz
void setup() 
{
  pinMode (pino_rec, OUTPUT); 
  pinMode (pino_playe, OUTPUT);
  digitalWrite (pino_rec, LOW);
  digitalWrite (pino_playe, LOW);
  Serial.begin (9600);

    // define os pinos sem alimentação e aguarda o início

}

void loop() 
{

 digitalWrite (pino_rec, HIGH);
  delay (10000);
 digitalWrite (pino_playe, HIGH);
  delay (10000);
 } // permite que o usuário aperte os botões de gravar e tocar por 10s 
}
