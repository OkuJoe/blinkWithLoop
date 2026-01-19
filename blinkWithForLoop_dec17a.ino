// For Loop LED Project
// Yellow blinks 3 times, Red blinks 6 times.

int yellow_led = 8;
int red_led = 9;

int delaytime_yellow = 500;
int delaytime_red = 500;

int yellow_counter = 3; // Target: 3 blinks
int red_counter = 6;    // Target: 6 blinks

void setup() {
  // CONFIGURATION
  // Fix: 'pinMode' must start with a lowercase 'p'
  pinMode(yellow_led, OUTPUT);
  pinMode(red_led, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  
  // --- YELLOW LED LOOP ---
  Serial.println("Starting Yellow Sequence");
  
  // Syntax: for (Start; Condition; Step)
  // We declare 'int j = 1' right here inside the loop.
  // 'j++' is a shortcut for 'j = j + 1'
  for (int j = 1; j <= yellow_counter; j++) {
    
    digitalWrite(yellow_led, HIGH);
    delay(delaytime_yellow);
    digitalWrite(yellow_led, LOW);
    delay(delaytime_yellow);
    
    // Optional: Print current count to monitor
    Serial.print("Yellow Blink: ");
    Serial.println(j);
  } 

  // --- RED LED LOOP ---
  Serial.println("Starting Red Sequence");

  // We can re-use 'j' here because the previous loop is finished
  for (int j = 1; j <= red_counter; j++) {
    
    digitalWrite(red_led, HIGH);
    delay(delaytime_red);
    digitalWrite(red_led, LOW);
    delay(delaytime_red);
    
    Serial.print("Red Blink: ");
    Serial.println(j);
  }

  // Small pause before the whole main loop starts over
  delay(1000); 
}




/*

draft code 
// use of for loops in Arduino
/*
were going to use 2 leds 
yellow and red
the yellow ledwill blink thrice and red led blink 6 times

*/

int yellow_led=8;
int red_led=9;
int delaytime_yellow=500;
int delaytime_red=500;
int j; // it will start our for loop
int yellow_counter=3; // the number of times the led will blink yellow
int red_counter=6;    // the number of times led will blink red




void setup() {
  // put your setup code here, to run once:
PinMode(yellow_led,OUTPUT);
PinMode(red_led,OUTPUT);

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

 for(j=1;j<=yellow_counter;j=j+1){

digitalWrite(yellow_led,HIGH);
delay(delaytime_yellow);
digitalWrite(yellow_led,LOW);
delay(delaytime_yellow);

 } 

for(j=1;j<=red_counter;j=j+1){

digitalWrite(red_led,HIGH);
delay(delaytime_red);
digitalWrite(red_led,LOW);
delay(delaytime_red);

}


/*
looping without for loop

digitalWrite(yellow_led,HIGH);
delay(delaytime_yellow);
digitalWrite(yellow_led,LOW);
delay(delaytime_yellow);


digitalWrite(yellow_led,HIGH);
delay(delaytime_yellow);
digitalWrite(yellow_led,LOW);
delay(delaytime_yellow);


digitalWrite(yellow_led,HIGH);
delay(delaytime_yellow);
digitalWrite(yellow_led,LOW);
delay(delaytime_yellow);




digitalWrite(red_led,HIGH);
delay(delaytime_red);
digitalWrite(red_led,LOW);
delay(delaytime_red);


digitalWrite(red_led,HIGH);
delay(delaytime_red);
digitalWrite(red_led,LOW);
delay(delaytime_red);



digitalWrite(red_led,HIGH);
delay(delaytime_red);
digitalWrite(red_led,LOW);
delay(delaytime_red);



digitalWrite(red_led,HIGH);
delay(delaytime_red);
digitalWrite(red_led,LOW);
delay(delaytime_red);




digitalWrite(red_led,HIGH);
delay(delaytime_red);
digitalWrite(red_led,LOW);
delay(delaytime_red);




digitalWrite(red_led,HIGH);
delay(delaytime_red);
digitalWrite(red_led,LOW);
delay(delaytime_red);
*/


}
*/
