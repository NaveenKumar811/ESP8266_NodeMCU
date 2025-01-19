
// set pin numbers
const int buttonPin = 12;     // the number of the pushbutton pin - D6
const int ledPin =  2;       // the number of the LED pin - D4

// variable for storing the pushbutton status
int buttonState = 0;

void setup() 
{
  // initialize the pushbutton pin as an input
  pinMode(buttonPin, INPUT);                    // pin modes - input/output
  // initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  // read the state of the pushbutton value
  buttonState = digitalRead(buttonPin);         // digital read function - to read digital pins
  Serial.println(buttonState);
  
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH
  if (buttonState == HIGH) 
  {
    // turn LED on
    digitalWrite(ledPin, HIGH);                 // digital write function - to write digital pins
  } 
  else 
  {
    // turn LED off
    digitalWrite(ledPin, LOW);
  }
}
