#include <stdio.h>
#include <stdlib.h>

typedef unsigned short int_type;

int_type exp0(int_type a, int_type b){
  int_type retval = 1;
  //  if(b < 0){ return 0; }
  while(b > 0){
    retval *= a;
    b -= 1;
  }
  return retval;
}


int_type exp1(int_type a, int_type b){
  int_type retval = 1;
  //  if(b < 0){ return 0; }
  while (b != 0) {
    if ((b & 1) != 0) {
      retval *= a;
    }
    b >>= 1;
    a *= a;
  }
  return retval;
}


int main(int argc, char* argv[]){
  if(argc == 3){
    int_type a = (int_type)atoi(argv[1]);
    int_type b = (int_type)atoi(argv[2]);
    int_type lhs = exp0(a, b);
    int_type rhs = exp1(a, b);
    if(lhs == rhs){
      printf("lhs == rhs: %d\n", lhs);
    } else {
      printf("lhs = %d != rhs = %d\n", lhs, rhs);

    }
  }
  return 0;
}
