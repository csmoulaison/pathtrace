#pragma once

#include <stdbool.h>
#include "vectors.h"

struct {
    bool ready_to_end;
    Vec2_I16 canvas_size;
} typedef Context;

Context init_context();
