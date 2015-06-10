/*
  desi ayu tugas,blink program of arduino 
 author : desi
 dibuat pada tanggal : 08 juni 2015
 mapel : komputer terapan
  */
 
int desi =10, ayu=11, lestari=12;


void setup() {                
  // inisial fungsi pin sebagai output
  pinMode(desi,OUTPUT);
  pinMode(ayu,OUTPUT);
  pinMode(lestari,OUTPUT);  

}

void loop() {
  digitalWrite(desi, HIGH);   
  digitalWrite(ayu,LOW);  
  digitalWrite(lestari, LOW);
  delay(700);             
  
  digitalWrite(desi, LOW);   
  digitalWrite(ayu,HIGH);  
  digitalWrite(lestari, LOW);
  delay(700);             
  
  digitalWrite(desi, LOW);   
  digitalWrite(ayu,LOW);  
  digitalWrite(lestari, HIGH);
  delay(700);             
  
}
