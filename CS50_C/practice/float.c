#include <cs50.h>
#include <stdio.h>

int main(void)
{
  float price = get_float("What's the price?\n");
  printf("Your total price is %.2f dollar.\n", price * 1.0625);
}