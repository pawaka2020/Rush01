#include <unistd.h>

int main(int args, char *argv[]) {
  // argv[1] = 1;
  // argv[2] = 2;
  // argv[3] = 3;
  // ...
  // argv[16] = 4;
  int error = ft_errorcatch(*argv[]);
  char *solution;
  if (error = 0)
  {
    solution = ft_solve(*argv[]);
  }
  ////....//
  ft_printoutput(solution);
  // write(1, solution[0], 1);
  // write(1, solution[1], 1);
  // write(1,  solution[2], 1);
  //...
  // write(1, "solution[15]", 1);



    
}