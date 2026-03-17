

#include <stdio.h>
#include "project.h"

int main(void) {
    int cars = getNumTrainCars();
    char dir = getDirection();
    drawTrain(cars, dir);
    return 0;
}
