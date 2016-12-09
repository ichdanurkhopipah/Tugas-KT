//include&lt;LiquidCrystal.h&gt;;

int Vin;
float Temperature;
float TF;

//LiquidCrystal.lcd(2, 3, 4, 5, 6, 7);

void setup(){
//lcd.begin(16, 2);
//lcd.print("Temperature:")
}

void loop(){
Vin = analogRead(A0);
Temperature=(500*Vin)/1023;
//lcd.setCursor(0, 1);
//lcd.print(Temperature);
//lcd.print("C");
delay(1000);
}

