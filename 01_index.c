// Let's know parts of C program.                                   // Documentation

#include <stdio.h>                                                  // Link Section
#include <conio.h>                                                  
# define PI 3.1415                                                  // Definition
# define g 9.8
int w = 143;                                                        // Global Declaration
void func();                                                        
int main(void)                                                      // main() function
{
  printf("Hello World!");
  func();
  return 0;
}

void func()                                                         // Sub program
{
  printf("Sub function");
}