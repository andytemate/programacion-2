#include <stdio.h>
int main ()
{

int arreglo[] = {2,4,6,8,10};
int *ptr;
ptr = &arreglo[0];
printf("%p",ptr);

for (int i= 0 ; i < 5 ; i++ ){

    printf(" %d",arreglo[i]);
}

}
