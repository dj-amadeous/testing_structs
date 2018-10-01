#include <stdio.h>
#include <stdlib.h>

#include "test.h"

int main(int argc, char** args){
  //NODE test = (NODE)malloc(sizeof(struct node_str));

  NODE test = test_node();
  free(test);
  return 0;
}
