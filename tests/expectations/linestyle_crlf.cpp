#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <new>

struct Dummy {
  int32_t x;
  float y;
};

extern "C" {

void root(Dummy d);

} // extern "C"
