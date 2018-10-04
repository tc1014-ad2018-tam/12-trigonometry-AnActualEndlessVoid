/*
 * This program was made with the intention of showing the different trigonometric identities for a given angle
 *
 * Mario Emilio Aguilar Chung
 * A01411210@itesm.mx
 * 10/4/2018
 *
*/
#include <stdio.h>
#include <math.h>

//Establezco mis variables para el angulo, y su eventual conversion a radianes
double angulo = 0;
double radian = 0;



//sine
void sine (double angulo){
    double s = 0;
    s = sin(angulo);
    printf ("\n Sine: %lf \n",s);
}

//tangent
void tangent (double angulo) {
    double t = 0;
    t = tan(angulo);
    printf ("\n Tangent: %lf \n", t);
}

//secant
void secant (double angulo) {
    double sc = 0;
    sc = (1/cos(angulo));
    printf ("\n Secant: %lf \n", sc);
}

//cosine
void cosine (double angulo) {
    double c = 0;
    c = (cos(angulo));
    printf ("\n Cosine: %lf \n", c);
}

//cosecant
void cosecant (double angulo) {
    double csc = 0;
    csc = (1/sin(angulo));
    printf ("\n Cosecant: %lf \n", csc);
}

//costangent
void cotangent (double angulo) {
    double cot = 0;
    cot = (1/tan(angulo));
    printf ("\n Cotangent: %lf \n", cot);
}

//La funcion principal
int main() {
    //Se le piden los datos al usuario
    printf("Please input an angle (in degrees):\n");
    scanf ("%lf", &angulo);
    //Se convierten los grados a radianes
    radian = (angulo*0.0174533);

//Se manda a las diferentes funciones
    sine (radian);
    cosine (radian);
    tangent (radian);
    secant (radian);
    cosecant (radian);
    cotangent (radian);


    return 0;
}