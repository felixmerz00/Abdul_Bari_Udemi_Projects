#include <stdio.h>
#include <stdlib.h>

int add(int n);
int factorial(int n);
int power(int n, int m);
int power_fast(int n, int m);
double taylor(int x, int terms);
int fib(int n);

int main()
{
    printf("%d\n", add(9));
    printf("%d\n", factorial(1));
    printf("%d\n", power(2, 8));
    printf("%d\n", power_fast(2,2));
    printf("%f\n", taylor(2, 11));
    printf("%d\n", fib(9));
    return 0;
}

/*This function returns the sum of all natural numbers up to n.*/
int add(int n)
{
    int sum = 0;
    if(n>0){
        sum = add(n-1) + n;
        return sum;
    }
    return 0;
}

/*This function returns the factorial of a natural number n.*/
int factorial(int n)
{
    int f;
    if(n > 0){
        f = factorial(n-1) * n;
        return f;
    }
    return 1;
}

/*This function returns the power of n to m.*/
int power(int n, int m)
{
    if(m > 0){
        return power(n, m-1) * n;
    }
    return 1;
}

/*This function uses a faster algorithm to return the power of n to m.*/
int power_fast(int n, int m)
{
    if(m == 0){
        return 1;
    }
    else if(m%2 == 1){
        return power_fast(n*n, (m-1)/2) * n;
    }
    else if(m%2 == 0){
        return power_fast(n*n, m/2);
    }
}

/*Diese Funktion rechnet die Zahl e hoch mit Exponent x. Das Resultat wird mittels Taylorpolynom ausgerechnet.
Der int "terms" gibt den Grad des Taylorpolynoms (die Genauigkeit des Resultats) an.*/
double taylor(int x, int terms)
{
    double sum = 0.0;
    if(terms>0){
        sum = taylor(x, terms-1) + (power_fast(x, terms)/(1.0*factorial(terms)));
        return sum;
    }
    return 1.0;
}

/*fib() returns the value of the element n of the Fibonacci sequence for n < 10.
fib() is a recursive function using memoization.*/
int fib(int n)
{
    static int F[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    if(n<=1){   /*fib(1)=1, fib(0)=0*/
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2] == -1){
            F[n-2] = fib(n-2);
        }
        if(F[n-1] == -1){
            F[n-1] = fib(n-1);
        }
        F[n] = F[n-2] + F[n-1];
        return F[n];
    }
}
