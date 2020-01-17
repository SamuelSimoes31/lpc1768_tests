#include <mbed.h>

int main()
{

  DigitalOut led(LED1);

  while (1)
  {
    // put your main code here, to run repeatedly:
    led = 1;
    wait(1);
    led = 0;
    wait(1);
  }
}