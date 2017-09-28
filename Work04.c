#include <stdio.h>
#include <string.h>

int main()
{
  char s0[] = "bluh";
  char s1[] = "bluh";
  char s2[] = "bluhyo";
  char s3[] = "prqiouctrpumowu";
  char s4[] = "yo";

  // Test strcmp
  printf("The value of strcmp(s0, s1) is: %d ...should be 0\n", strcmp(s0, s1));
  printf("The value of strcmp(s2, s3) is: %d ...should be a negative int\n", strcmp(s2, s3));
  printf("The value of strcmp(s3, s2) is: %d ...should be a positive int\n", strcmp(s3, s2));

  // Test strncmp
  printf("The value of strncmp(s1, s2, 4) is: %d ...should be 0\n", strncmp(s1, s2, 4));
}
