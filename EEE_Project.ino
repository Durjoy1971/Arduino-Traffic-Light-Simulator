int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int green_Port = 12;
int yellow_Port = 11;
int red_Port = 13;

int again_green_port = 0;
int again_yellow_port = 1;
int again_red_port = 9;

int button_state_green=0;
int button_state_yellow=0;
int button_state_red=0;

int total_time_green = 5000;
int total_time_yellow = 2000;
int total_time_red = 4000;

void setup()
{
    pinMode(a, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT);
    pinMode(e, OUTPUT);
    pinMode(f, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(green_Port, OUTPUT);
    pinMode(yellow_Port, OUTPUT);
    pinMode(red_Port, OUTPUT);
    pinMode(again_green_port, OUTPUT);
    pinMode(again_red_port, OUTPUT);
    pinMode(again_yellow_port, OUTPUT);
}

void loop()
{
    turn_on_red();
    six_to_zero();

    button_state_red = LOW;
    recurse_red();
    
    turn_on_yellow();
    four_to_zero();

    button_state_yellow = LOW;
  
    recurse_yellow();
    
    turn_on_green();
    eight_to_zero();

    button_state_green = LOW;

    recurse_green();
    
    
}

void recurse_red()
{
    
    turn_of_red();
    ask_for_red();
    delay(500);
    ask_for_red();
    turn_on_red();
    ask_for_red();
    delay(500);
    ask_for_red();
    turn_of_red();
    ask_for_red();
    delay(500);
    ask_for_red();
    turn_on_red();
    ask_for_red();
    delay(500);
    ask_for_red();
    turn_of_red();
    ask_for_red();
    delay(500);
    ask_for_red();
    turn_on_red();
    ask_for_red();
    delay(500);
}

void recurse_yellow()
{
    
    turn_of_yellow();
    ask_for_yellow();
    delay(500);
    ask_for_yellow();
    turn_on_yellow();
    ask_for_yellow();
    delay(500);
    ask_for_yellow();
    turn_of_yellow();
    ask_for_yellow();
    delay(500);
    ask_for_yellow();
    turn_on_yellow();
    ask_for_yellow();
    delay(500);
    ask_for_yellow();
    turn_of_yellow();
    ask_for_yellow();
    delay(500);
    ask_for_yellow();
    turn_on_yellow();
    ask_for_yellow();
    delay(500);
}



void ask_for_yellow()
{
    button_state_yellow = digitalRead(again_yellow_port);
    if(button_state_yellow == HIGH)
    {
      turn_on_yellow();
      four_to_zero();
      button_state_yellow = LOW;
      recurse_yellow();
    }
}


void ask_for_red()
{
    button_state_red = digitalRead(again_red_port);
    if(button_state_red == HIGH)
    {
      turn_on_red();
      six_to_zero();
      button_state_red = LOW;
      recurse_red();
    }
}



void recurse_green()
{
    turn_of_green();
    ask_for_green();
    delay(500);
    ask_for_green();
    turn_on_green();
    ask_for_green();
    delay(500);
    ask_for_green();
    turn_of_green();
    ask_for_green();
    delay(500);
    ask_for_green();
    turn_on_green();
    ask_for_green();
    delay(500);
    ask_for_green();
    turn_of_green();
    ask_for_green();
    delay(500);
    ask_for_green();
    turn_on_green();
    ask_for_green();
    delay(500);
}

void ask_for_green()
{
    button_state_green = digitalRead(again_green_port);
    if(button_state_green == HIGH)
    {
      turn_on_green();
      eight_to_zero();
      button_state_green = LOW;
      recurse_green();
    }
}



void turn_on_green()
{
    digitalWrite(green_Port, HIGH);
    digitalWrite(red_Port, LOW);
    digitalWrite(yellow_Port, LOW);
}

void turn_of_green()
{
    digitalWrite(green_Port, LOW);
    digitalWrite(red_Port, LOW);
    digitalWrite(yellow_Port, LOW);
}
void turn_of_red()
{
    digitalWrite(green_Port, LOW);
    digitalWrite(red_Port, LOW);
    digitalWrite(yellow_Port, LOW);
}
void turn_of_yellow()
{
    digitalWrite(green_Port, LOW);
    digitalWrite(red_Port, LOW);
    digitalWrite(yellow_Port, LOW);
}

void turn_on_red()
{
    digitalWrite(green_Port, LOW);
    digitalWrite(red_Port, HIGH);
    digitalWrite(yellow_Port, LOW);
}

void turn_on_yellow()
{
    digitalWrite(green_Port, LOW);
    digitalWrite(red_Port, LOW);
    digitalWrite(yellow_Port, HIGH);
}

void present_zero()
{
    digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 0);
    delay(500);
}

void present_one()
{
    digitalWrite(a, 0);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    
    delay(500);
}

void present_two()
{
    digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 0);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 0);
    digitalWrite(g, 1);
    delay(500);
}

void present_three()
{
    digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 1);
    delay(500);
}

void present_four()
{
    digitalWrite(a, 0);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    delay(500);
}

void present_five()
{
    digitalWrite(a, 1);
    digitalWrite(b, 0);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 0);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    delay(500);
}

void present_six()
{
    digitalWrite(a, 1);
    digitalWrite(b, 0);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    delay(500);
}

void present_seven()
{
    digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    delay(500);
}

void present_eight()
{
    digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    delay(500);
}

void present_nine()
{
    digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 0);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    delay(500);
}


void eight_to_zero()
{
    present_eight();
    present_seven();
    present_six();
    present_five();
    present_four();
    present_three();
    present_two();
    present_one();
    present_zero();
}

void four_to_zero()
{
    present_four();
    present_three();
    present_two();
    present_one();
    present_zero();
}

void six_to_zero()
{
    present_six();
    present_five();
    present_four();
    present_three();
    present_two();
    present_one();
    present_zero();
}
