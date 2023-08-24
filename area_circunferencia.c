#include <stdio.h>
#define PI 3.14
float calcula_area_circunferencia (float raio){
    float area=0;
    area = PI * raio * raio;
     
     return area;

}

int main (int argc, char **argv){
    float area =0;
    float raio = 0;

    raio=3;

    area = calcula_area_circunferencia(raio);
    printf ("A area da circunferencia: %.2f", area);

    return 0;
}