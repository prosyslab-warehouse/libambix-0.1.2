#include "common.h"

int main(int argc, char**argv) {
  return pass_if(1, __LINE__, "should %s pass", "indeed");
}
