// Letak pin yang terhubung
int waterPin = A5;  // Pin S di pin
int relayPin = 13;  // Pin di rellay

int waterVal = 0;     


void setup() {
  // put your setup code here, to run once:
  pinMode(relayPin, OUTPUT);    // Set pin rellay sebagi output
  // Menjadi output supaya nantinya bisa diset nilainya dengan digitalWrite()

  Serial.begin(9600);           // Mulai terminal agar bisa digunakan
}

void loop() {
  // put your main code here, to run repeatedly:
  waterVal = analogRead(waterPin);          // Baca nilai dari pin

  /*
    Nyalankan relay jika waterVal lebih dari 300 dan
    Padamkan relay jika waterVal kurang dari 300

    ! Disini dibagi menjadi 4 agar pembacaan program bisa lebih dimengerti
    * Hapus code program yang tidak perlu jika diinginkan ✌️
  */
  // Relay dipadamkan
  if(waterVal<=100){
    Serial.println("Water Level: Kosong");
    digitalWrite(relayPin, LOW);
    delay(1000);  
  }
  else if(waterVal>100 && waterVal<=300){
    Serial.println("Water Level: Low");
    digitalWrite(relayPin, LOW);
    delay(1000);
  }

  // Relay dinyalakan
  else if(waterVal>300 && waterVal<=330){
    Serial.println("Water Level: Medium");
    digitalWrite(relayPin, HIGH);
    delay(1000); // ! Nilai delay bisa disesuaikan dengan debit air keluar
  }
  else if(waterVal>330){
    Serial.println("Water Level: High");
    digitalWrite(relayPin, HIGH);
    delay(1000); // ! Nilai delay bisa disesuaikan dengan debit air keluar
  }
  
  delay(10);
  // Print nilai relay di terminal
  Serial.println(waterVal);
  delay(1000);
}
