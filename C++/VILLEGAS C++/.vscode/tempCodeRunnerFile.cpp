#include<iostream>
#include<cmath>
using namespace std ;
int main (){
    double A,B,C;
    cout<<"Digite el primer cateto: ";cin>>A;
    cout<<"Digite el segundo cateto: ";cin>>B;
    C=sqrt(pow(A,2)+pow(B,2));
    cout<<"\nLA HIPOTENUSA DEL TRIANGULO ES: "<<C<< endl;
    
    return 0;
}