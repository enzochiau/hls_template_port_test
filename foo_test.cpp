
#include "foo.hpp"

int sc_main(int argc, char* argv[]) {return 0;};

int main()
{
  RefPix<4> ref_in;
  RefPix<4> ref_out[4];
  RefPix<4> exp_ref_out[4];

  for (int i = 0; i < 4; ++i) {
    ref_in.top[i] = rand();
    ref_in.left[i] = rand();
  }

  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      exp_ref_out[i].top[j] = ref_in.top[j] + i + j;
      exp_ref_out[i].left[j] = ref_in.left[j] + i + 2*j;
    }
  }
  
  foo(ref_in, ref_out);

  int result = 0;
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      if (exp_ref_out[i].top[j] != ref_out[i].top[j]) {
	result++;
      }
      if (exp_ref_out[i].left[j] != ref_out[i].left[j]) {
	result++;
      }
    }
  }

  return result;
  
}
