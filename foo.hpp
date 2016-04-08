
#include <systemc.h>

typedef sc_dt::sc_uint<4> Pixel;

template <int BlockSize>
class RefPix
{
public:
  Pixel top[BlockSize];
  Pixel left[BlockSize];
};

  
void foo(RefPix<4> ref_in, RefPix<4> ref_out[4]);
