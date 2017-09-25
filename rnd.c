#include <stdio.h>
#include <stdlib.h>

int main() {

  int a[10];
  int i;
  srand( time(NULL) );

  printf( "\nThe Original Array\n" ); // OG Array
  
  for ( i = 0; i < 9; i++ ) {
    a[i] = rand();
    printf( "a[%d]: %d\n", i, a[i] );
    // printf( "address is %p\n", &a[i] ); // Diag
  }
  // 10th int = 0
  a[9] = 0;
  printf( "a[9]: %d\n", a[9] );

  
  printf( "\nThe Modified Array\n" ); // Mod Array
  
  int b[10];
  int j;
  int *p;
  for ( j = 0; j < 10; j++ ) {
    p = &a[j];
    // printf( "===========\nThe address of p is: %p\nThe value is: %d\n", p, *p ); // Diag
    b[9 - j] = *p;
    // printf( "b[%d]: %d\n", j, b[j] ); 
  }

  // Printing second array separately, because apparently doing it in the loop as we transfer values doesn't work >:(
  int n;
  for ( n = 0; n < 10; n++ ) {
    printf ( "b[%d]: %d\n", n, b[n] );
  }
}
