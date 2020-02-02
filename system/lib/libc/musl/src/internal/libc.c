#include "libc.h"

struct __libc __libc;

size_t __hwcap;
size_t __sysinfo;
char *__progname=0, *__progname_full=0;

weak_alias(__progname, program_invocation_short_name);
weak_alias(__progname_full, program_invocation_name);

#ifdef __EMSCRIPTEN_PTHREADS__
#include <emscripten/emscripten.h>
struct __libc* EMSCRIPTEN_KEEPALIVE emscripten_get_global_libc() {
    return &libc;
}
#endif
