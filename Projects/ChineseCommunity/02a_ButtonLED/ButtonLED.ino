

const int buttonPin = 2;
const int ledPin    = 13;

void setup() {
    pinMode(buttonPin, INPUT_PULLUP);  // Use pullup for pulling voltage up when no input
    pinMode(ledPin, OUTPUT);
}

void loop() {
    // if (digitalRead(buttonPin) == HIGH) {
    //     digitalWrite(ledPin, HIGH);
    // } else {
    //     digitalWrite(ledPin, LOW);
    // }

    if (digitalRead(buttonPin) == HIGH) {
        digitalWrite(ledPin, LOW);
    } else {
        digitalWrite(ledPin, HIGH);
    }
}
