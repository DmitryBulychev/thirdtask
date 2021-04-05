#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 30
int main() {
    double mass[SIZE];
    double sum=0;
    double sh=0;
    double as=0;
    srand (time(NULL)); //инициализация датчика случайных чисел
    for ( int i = 0; i<SIZE;i++){
        mass[i]= rand()%20 - 10;
    }
    printf("Изначальный массив чисел:\n");
    for ( int i = 0; i<SIZE;i++){
        mass[i]= rand()%20 - 10;
    }
    for ( int i = 0; i<SIZE;i++){
        if(i%10==0&&i!=0)printf("\n");
        if(mass[i]>0) {
            sum+=mass[i];
            sh++;
        }
        printf("%3.0lf ", mass[i]);

    }
    printf("\n");
    as = sum/sh;
    printf("Среднее арифм. положительных чисел массива:%3.2lf\n", as);
    printf("Преобразованный массив чисел:\n");

    for ( int i = 0; i<SIZE;i++){
        if(i%10==0&&i!=0) printf("\n");
        if(mass[i]<0) mass[i]=as;
        printf("%3.2lf ", mass[i]);

    }
    return 0;
}
