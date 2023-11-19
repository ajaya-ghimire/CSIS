#ifndef _RATIONAL_H_
#define _RATIONAL_H_

#include<iostream>
#include<string>

using namespace std;

 class Rational 
{ 
private:
int numerator; 
int denominator;
 
public:
int *reducedForm (int numerator, int denominator);
   
Rational (int = 0, int = 1);
   

Rational operator +( Rational rightRational );
Rational operator -( Rational rightRational );
Rational operator *( Rational rightRational );
Rational operator /( Rational rightRational );
void printRational(); 

 void print();
 
void printFloat ();

 
 
};
 
 
#endif	
