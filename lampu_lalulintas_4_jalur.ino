int merah1=A0;
int kuning1=A1;
int hijau1=A2;

int merah2=A3;
int kuning2=A4;
int hijau2=A5;

int merah3=8;
int kuning3=9;
int hijau3=10;

int merah4=11;	
int kuning4=12;
int hijau4=13;

void setup(){
  pinMode(merah1,OUTPUT);
  pinMode(kuning1,OUTPUT);
  pinMode(hijau1,OUTPUT);
  
  pinMode(merah2,OUTPUT);
  pinMode(kuning2,OUTPUT);
  pinMode(hijau2,OUTPUT);
  
  pinMode(merah3,OUTPUT);
  pinMode(kuning3,OUTPUT);
  pinMode(hijau3,OUTPUT);
  
  pinMode(merah4,OUTPUT);
  pinMode(kuning4,OUTPUT);
  pinMode(hijau4,OUTPUT);
    
}

void jalur1(){
  //1
  digitalWrite(merah1,1);
  delay(2000); //Jeda lampu merah ke lampu kuning
  digitalWrite(merah1,0);
  digitalWrite(kuning1,1);
  delay(1000); //Jeda lampu kuning ke lampu hijau
  digitalWrite(kuning1,0);
  digitalWrite(merah1,0);
  digitalWrite(hijau1,1);
  digitalWrite(merah2,1);
  digitalWrite(merah3,1);
  digitalWrite(merah4,1);
  delay(5000); //Durasi lampu hijau
  digitalWrite(hijau1,0);
  digitalWrite(merah1,1);
}

void jalur2(){
  //2
  digitalWrite(merah2,1);
  delay(2000); //Jeda lampu merah ke lampu kuning
  digitalWrite(merah2,0);
  digitalWrite(kuning2,1);
  delay(1000); //Jeda lampu kuning ke lampu hijau
  digitalWrite(kuning2,0);
  digitalWrite(merah2,0);
  digitalWrite(hijau2,1);
  digitalWrite(merah1,1);
  digitalWrite(merah3,1);
  digitalWrite(merah4,1);
  delay(5000); //Durasi lampu hijau
  digitalWrite(hijau2,0);
  digitalWrite(merah2,1);
}

void jalur3(){
  //3
  digitalWrite(merah3,1);
  delay(2000); //Jeda lampu merah ke lampu kuning
  digitalWrite(merah3,0);
  digitalWrite(kuning3,1);
  delay(1000); //Jeda lampu kuning ke lampu hijau
  digitalWrite(kuning3,0);
  digitalWrite(merah3,0);
  digitalWrite(hijau3,1);
  digitalWrite(merah1,1);
  digitalWrite(merah2,1);
  digitalWrite(merah4,1);
  delay(5000); //Durasi lampu hijau
  digitalWrite(hijau3,0);
  digitalWrite(merah3,1);
}

void jalur4(){
  //4
  digitalWrite(merah4,1);
  delay(2000); //Jeda lampu merah ke lampu kuning
  digitalWrite(merah4,0);
  digitalWrite(kuning4,1);
  delay(1000); //Jeda lampu kuning ke lampu hijau
  digitalWrite(kuning4,0);
  digitalWrite(merah4,0);
  digitalWrite(hijau4,1);
  digitalWrite(merah1,1);
  digitalWrite(merah2,1);
  digitalWrite(merah3,1);
  delay(5000); //Durasi lampu hijau
  digitalWrite(hijau4,0);
  digitalWrite(merah4,1);
}

void loop(){
  //Awal hidup, semua jalur lampu merah.
  digitalWrite(merah1,1);
  digitalWrite(merah2,1);
  digitalWrite(merah3,1);
  digitalWrite(merah4,1);
  
  //Lampu lalin berjalan.
  jalur1();
  jalur2();
  jalur3();
  jalur4();
  
}