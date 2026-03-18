#include <stdlib.h>
#include <stdio.h>

/**
 * @brief recursively calculates the factorial of an integer n.
 * 
 * @param n number to find factorial of.
 * @return int n factorial.
 */
int factorial(int n) {
  // the base case - this determines when the recursion should stop
  if (n == 0) {
    return 1;
  }

  return n * factorial(n - 1);
}

int combination(int n, int r)
{
  return (factorial(n) / (factorial(r)*(factorial(n-r))));
}

int permutation(int n, int r)
{
  return (factorial(n) / (factorial(n-r)));
}


int main(int argc, char **argv) 
{

  int *n = argv[0];
  char *calculation = argv[1];
  int *r = argv[2];

  if (argv[2] <= argv[0])
  {
    if (argv[1] == 'C')
    {
      printf("%d\n", combination(n, r));
    }
    else if (argv[1] == 'P')
    {
      printf("%d\n", permutation(n, r));
    }
  }
  else
  {
    printf("Usage: ./combinatorials n C r    or    ./combinatorials n P r");
    return 0;
  }

  /*
  The program should accept a command line argument as follows:
  ./combinatorials n C r
  ./combinatorials n P r

  where n and r are both positive integers, and r is always less than or equal to n.

  for example:
  ./combinatorials 7 C 2

  Your program should then calculate and print out the correct result

  nCr should return the total combinations of r items out of n.
  This is calculated by: n! / (r! (n - r)!)

  nPr should return the total permutations of r items out of n.
  This is calculated by: n! / (n-r)!

  Add appropriate validation to your program to make your code robust.

  You should try and use functions to write your program.

  */
}