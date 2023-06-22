#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

float calculateVolume(struct Box *boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

float calculateSurfaceArea(struct Box *boxPtr) {
    return 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
}

int main() {
    struct Box myBox;
    struct Box *boxPtr = &myBox;

 
    boxPtr->length = 5.0;
    boxPtr->width = 3.0;
    boxPtr->height = 2.0;

    
    float volume = calculateVolume(boxPtr);
    printf("Volume: %.2f\n", volume);

    
    float surfaceArea = calculateSurfaceArea(boxPtr);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
