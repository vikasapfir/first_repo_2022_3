#include <stdio.h>
#include <math.h>

void main(){
    double x, y, z, res;
    x=1.839;
    y=3.821;
    z=0.349;

    res=pow(x, y+2)+sqrt(x+pow(z, y))-161*tan(x*z);
    printf("%f", res);
}