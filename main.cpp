#include <iostream>
using namespace std;
int main(){
int a;
//Напишите функции min, max, avg, med, процедуру swap принимающие в себя три вещественных аргумента и программу с примером из использования
//min
int mi;
mi=2147483647;
for ( int i=1; i<4; i++){
 cin >>a;
 if (a<mi)
    {mi=a;}
}
cout <<mi;
//max
int ma;
ma=-2147483647;
for ( int i=1; i<4; i++){
 cin >>a;
 if (a>ma)
    {ma=a;}
}
cout <<ma;
//avg
int av=0,s=0;
for ( int i=1; i<4; i++){
 cin >>a;
 s=s+a;
}
av=s/3;
cout <<av;
int a1,b,c;
 cin >>a;
 b=a;
 cin >>a;
 c=a;
 cin >>a;
 a1=a;
cout <<a1<<c<<b;
}
