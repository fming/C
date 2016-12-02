#include <csubdecl.h>

/* core function */
void My_func_1_core(double *ret){
  *ret = 3.14;
}

/* CSUB function */
#ifdef __cplusplus
extern "C" {
#endif

  void My_func_1(breal_parm ret);

#ifdef __cplusplus
}
#endif

void My_func_1(breal_parm ret){
  double _ret;

  My_func_1_core(&_ret);

  *ret = _ret;
}
