/**
 * participants.c
 *   A simple C program to print the participants from the class.
 *   Intended as an example of updating code on GitHub.
 */

// +---------+---------------------------------------------------------
// | Headers |
// +---------+

#include <stdio.h>

// +------+------------------------------------------------------------
// | Main |
// +------+

int 
main (int argc, char *argv[])
{
  int i = 0;
  printf ("%02d: Joseph A. Abandoh-Sam\n", ++i);
  printf ("%02d: Dotse Benjamin Kwasi\n", ++i);

<<<<<<< HEAD
=======
  printf ("%02d: Eve Lyons-Berg\n", ++i);
>>>>>>> 68cd325ce50739c605ead5486c1818bb8bb1554d
  printf ("There are %i participants.\n", i);
  return 0;
} // main
