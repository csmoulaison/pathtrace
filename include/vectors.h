#pragma once

// Data structures representing vectors of varying underlying primitive types
// Floating point based structures have no prefix to specifically identify them

#include <stdint.h>

struct {
    float x;
    float y;
} typedef Vec2;

struct {
    float x;
    float y;
    float z;
} typedef Vec3;

struct {
    uint16_t x;
    uint16_t y;
    uint16_t z;
} typedef Vec2_I16;
