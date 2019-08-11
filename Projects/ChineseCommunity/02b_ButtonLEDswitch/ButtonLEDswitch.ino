const int buttonPin = 2;
const int ledPin    = 13;

bool lightOn = false;
bool btnDown = false;

void setup() {
    pinMode(buttonPin, INPUT_PULLUP);  // Use pullup for pulling voltage up when no input
    pinMode(ledPin, OUTPUT);
}

void loop() {
    if (digitalRead(buttonPin) == HIGH) {
        if (btnDown) {
            lightOn = !lightOn;
            btnDown = false;
        }
    } else {
        btnDown = true;
    }
    if (lightOn) {
        digitalWrite(ledPin, HIGH);
    } else {
        digitalWrite(ledPin, LOW);
    }
}
