#include "context.h"

Context init_context() {
    Context context = {};
    
    context.ready_to_end = false;

    return context;
}
