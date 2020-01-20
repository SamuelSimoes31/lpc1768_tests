#include "mbed.h"

Serial pc(USBTX, USBRX); // tx, rx

void rxInterrupt(){
  pc.putc('a');
  if(pc.readable())  pc.putc(pc.getc());
}

int main()
{
  pc.attach(&rxInterrupt);
  pc.printf("Hello World!\n");
  while (1)
  {
    
  }
}