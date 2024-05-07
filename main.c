#include <stdio.h>

// The mysterious apple variable
int main(int argc, char const *argv[], char **envp, char **apple) {
  for (char **s = apple ; *s != 0 ; s++) {
    printf("%s\n", *s);
  }
  return 0;
}

/* Output
executable_path=./main



ptr_munge=
main_stack=
executable_file=0x1a01000004,0x1de4815
dyld_file=0x1a01000004,0xfffffff0009a2fb
th_port=
*/