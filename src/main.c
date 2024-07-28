#include <stdio.h>
#include "context.h"
#include "platform.h"

int main(int argc, char** argv) {
    printf("Starting pathtracer...\n");

    Context context = init_context();
    Platform platform = init_platform(&context);

    printf("Done!\n");
    return 0;
}
