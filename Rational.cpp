#include "Rational.h"
#include <iostream>
#include <iomanip>

 using namespace std;

 
 
int *
Rational::reducedForm (int numerator, int denominator) 
{
  
 
int a = numerator, b = denominator, c;
  
 
int *solution = new int[2];
  
while (a != 0)
    
{
      
 
c = a;
a = b % a;      
b = c;
    
 
}
  
 
 
solution[0] = numerator / b;	 
  solution[1] = denominator / b;	
  return solution;

 
}


 
Rational::Rational (int anumerator, int adenominator) 
{
  
 
int *
    reduced = reducedForm (anumerator, adenominator);
  
 
numerator = reduced[0];
  
 
denominator = reduced[1];
  
 
delete reduced;

} 
 

Rational Rational::operator +( Rational R ) {
   int num = R.numerator * denominator + R.denominator * numerator;
   int den = R.denominator * denominator;
   int *solution = new int[2];
   solution = reducedForm(num,den);
   Rational newResult(solution[0],solution[1]);
   return newResult;
} 

Rational Rational::operator -( Rational R ) {
    int num = R.numerator * denominator - R.denominator * numerator;
   int den = R.denominator * denominator;
      int *solution = new int[2];

  solution = reducedForm(num,den);
   Rational newResult(solution[0],solution[1]);
   return newResult;
} 
Rational Rational::operator *( Rational R ) {
   int num = R.numerator * numerator;
   int den = R.denominator * denominator;
      int *solution = new int[2];

    solution = reducedForm(num,den);
   Rational newResult(solution[0],solution[1]);
   return newResult;
} 
Rational Rational::operator /( Rational R ) {
   int num = R.denominator * numerator;
   int den = denominator * R.numerator;
      int *solution = new int[2];

   solution = reducedForm(num,den);
   Rational newResult(solution[0],solution[1]);
   return newResult;
} 

 
 
 
void 
Rational::print () 
{
  
 
cout << numerator << "/" << denominator << endl;

 
} 
 
void 


Rational::printFloat () 
{
  
 
double f = (double) numerator / denominator;
  
 
cout << std::fixed << std::setprecision (3) << f << endl;

 
} 
