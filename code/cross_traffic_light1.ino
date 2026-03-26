// C++ code
//
// Inisialisasi pin led
const int rledU = 11, yledU = 12, gledU = 13; // Utara
const int rledT = 8, yledT = 9, gledT = 10; // Timur
const int rledS = 5, yledS = 6, gledS = 7; // Selatan
const int rledB = 2, yledB = 3, gledB = 4; // Barat

void setup() 
{
  // Konfigurasi led sebagai output
  int pins[] = {rledU, yledU, gledU, rledT, yledT, gledT, rledS, yledS, gledS, rledB, yledB, gledB};
  
  for (int pin : pins) {
    pinMode(pin, OUTPUT);
  }
  
  // Kondisi default = led merah aktif
  digitalWrite(rledU, HIGH);
  digitalWrite(rledT, HIGH);
  digitalWrite(rledS, HIGH);
  digitalWrite(rledB, HIGH);
}

void loop()
{
  
  playCross(rledU,yledU,gledU); // Aktifkan simpang utara
  playCross(rledT,yledT,gledT); // Aktifkan simpang timur
  playCross(rledS,yledS,gledS); // Aktifkan simpang selatan
  playCross(rledB,yledB,gledB); // Aktifkan simpang barat
}

// Fungsi untuk setiap simpang
void playCross(int rPin, int yPin, int gPin){
  // Matikan led merah
  digitalWrite(rPin, LOW);
  
  // Led hijau nyala 5s
  digitalWrite(gPin, HIGH);
  delay(5000);
  digitalWrite(gPin, LOW);
  
  // Led kuning kedip 3x
  for (int i = 0; i < 3; i++) {
    digitalWrite(yPin, HIGH);
    delay(500);
    digitalWrite(yPin, LOW);
    delay(500);
  }
  
  // Led kuning nyala 2s
  digitalWrite(yPin, HIGH);
  delay(2000);
  digitalWrite(yPin, LOW);
  
  // Nyalakan kembali led merah
  digitalWrite(rPin, HIGH);
}