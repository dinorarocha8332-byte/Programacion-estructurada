#include <stdio.h>
#include <stdlib.h>


int main()
{

   char A= 'a';
   signed char B= -10;
   unsigned char C= 200;
   short D= -32000;
   unsigned short E= 65000;
   int F= 4;
   unsigned int G= 100;
   long H=123456;
   unsigned long I= 1234567;
   long long J=123456789;
   unsigned long long K= 1234567890;
   float L= 3.14;
   double M=7.7777;
   long double N= 3.141592653589793L;


   printf("\nLa direccion del char es:%d", &A);
   printf("\nEl valor del char es:%c", A);
   printf("\n");

   printf("\nLa direccion del signed char es:%d", &B);
   printf("\nEl valor del signed char es:%d",B);
   printf("\n");

   printf("\nLa direccion del unsigned char es:%d", &C);
   printf("\nEl valor del unsigned char es:%d", C);
   printf("\n");

   printf("\nLa direccion del short es:%d", &D);
   printf("\nEl valor del short es:%d", D);
   printf("\n");

   printf("\nLa direccion del unsigned short es:%d", &E);
   printf("\nEl valor del unsigned short es:%d", E);
   printf("\n");

   printf("\nLa direccion del int es:%d", &F);
   printf("\nEl valor del int es:%d", F);
   printf("\n");

   printf("\nLa direccion del unsigned int es:%d", &G);
   printf("\nEl valor del unsigned int es:%d", G);
   printf("\n");

   printf("\nLa direccion del long es:%d", &H);
   printf("\nEl valor del long es:%d", H);
   printf("\n");

   printf("\nLa direccion del unsigned long es:%d", &I);
   printf("\nEl valor del unsigned long es:%d", I);
   printf("\n");

   printf("\nLa direccion del long long es:%d", &J);
   printf("\nEl valor del long long es:%d", J);
   printf("\n");

   printf("\nLa direccion del unsigned long long es:%d", &K);
   printf("\nEl valor del unsigned long long es:%d", K);
   printf("\n");

   printf("\nLa direccion del float es:%d", &L);
   printf("\nEl valor del float es:%f", L);
   printf("\n");

   printf("\nLa direccion del double es:%d", &M);
   printf("\nEl valor del double es:%lf", M);
   printf("\n");

   printf("\nLa direccion del long double es:%d", &N);
   printf("\nEl valor del long double es:%Lf", N);
   printf("\n");

   return 0;
}
