#include <stdio.h>
//funcion por valor
int sumar_v (int n1, int n2){
     return n1 + n2;

}
//funcion por referencia
void sumar_r(int n1, int n2, int *suma){
   *suma= n1+n2;
}

//funcion sumar y restar por referencia

void sumar_restar_ref(int n1, int n2, int *s, int *r){
  *s = n1 + n2;
  *r = n1 - n2;


}

int main() {

    printf("version: POR valor\n");

    int n1, n2;
    int suma;

    n1= 5;
    n2= 7;
    sumar_r(n1,n2, &suma);
    printf("Suma: %d\n", suma);

    n1= 5;
    n2= 7;
    suma= sumar_v(n1,n2);
    printf("Suma: %d\n", suma);


} 

{ int n1, n2;
    int s;
    int r;
    sumar_restar_ref(n1,n2,&s, &r);
    printf("suma : %d\n", s);
    printf("resta : %d\n", r);

}