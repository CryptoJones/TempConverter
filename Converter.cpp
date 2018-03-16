#include "Converter.h"

double ctof(double c){
    return (c * 1.8) + 32;
}

double ftoc(double f) {    
    return (f - 32)  * .5556;
}