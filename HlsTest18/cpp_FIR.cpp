#include "cpp_FIR.h"

// Top-level function with class instantiated
acc_t cpp_FIR(data_t x,data_t y)
  {
    static CFir<coef_t, data_t, acc_t> fir1;

    return fir1(x,y);
  }

