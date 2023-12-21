#define FLASH_GPIO_NUM 4

void setup()
{
  // initialize digital pin ledPin as an output
  pinMode(FLASH_GPIO_NUM, OUTPUT);

  digitalWrite(FLASH_GPIO_NUM, HIGH);
  delay(2000);
  digitalWrite(FLASH_GPIO_NUM, LOW);
  delay(2000);
}

void loop()
{
}