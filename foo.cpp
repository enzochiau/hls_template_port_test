
#include "foo.hpp"

void foo(RefPix<4> ref_in, RefPix<4> ref_out[4])
{
  RefPix<4> ref_tmp = ref_in;

  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      ref_out[i].top[j] = ref_tmp.top[j] + i + j;
      ref_out[i].left[j] = ref_tmp.left[j] + i + 2*j;
    }
  }
}
