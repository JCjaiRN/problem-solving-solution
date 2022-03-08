#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char ch;
    float f;
    double dd;
    
    scanf("%d %ld %c %f %lf", &a, &b, &ch, &f, &dd);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", a, b, ch, f, dd);
   
    return 0;
}