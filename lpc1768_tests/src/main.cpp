#include "mbed.h"

Serial pc(USBTX, USBRX); // tx, rx

void rxInterrupt(){
  //pc.putc('a');
  char str[6];
  if(pc.readable())  pc.gets(str,5);
  pc.puts(str);
  str[0] = 0;
}

int main()
{
  pc.attach(&rxInterrupt);
  pc.printf("Hello World!\n");
  while (1)
  {
    
  }
}