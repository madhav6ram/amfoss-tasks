// pins
const int trig = 7;
const int echo = 8;

// variables, units measured in SI
double time_micro, time_oneway_sec, distance;
const double speed_of_sound = 343.0;
bool state1changed = true; // car parked
bool state2changed = true; // no car parked

void setup(){
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop(){
  // reset
  digitalWrite(trig, LOW);
  delayMicroseconds(1);
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(1);
  digitalWrite(trig, LOW);
  
  time_micro = pulseIn(echo, HIGH);
  
  // conversion of microseconds to seconds
  // & divide by 2 to get one-way travel time
  time_oneway_sec = (time_micro / 1000000.0) / 2.0;
  
  // distance = speed * time
  distance = speed_of_sound * time_oneway_sec;

  if(distance <= 3.0 && state1changed){
    Serial.println("Car is Parked.");
    state1changed = false;
    state2changed = true;
  }else if(distance > 3.1 && state2changed){
    Serial.println("No car, it's empty.");
    state2changed = false;
    state1changed = true;
  }
}