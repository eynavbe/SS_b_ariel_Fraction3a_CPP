#include <iostream>
#include <cmath>
using namespace std;
#ifndef FRACTION_H
#define FRACTION_H
namespace ariel
{
class Fraction {
private:
	int 	nom;
	int 	den;

public:
	// Fraction that represents a fraction of two integers
	Fraction(int nn, int dn): nom(nn), den(dn) { }
	// Accepts a float number and creates a Fraction that represents a fraction of two integers
	Fraction(float nn): nom(numerator(int(nn*1000),1000)), den(denominator(int(nn*1000),1000)) { }  
	
	int n() const {
		return nom;
	}
	int d() const {
		return den;
	}

	operator string() const {             
		return to_string(nom)+"/"+to_string(den);
	}
	// Returns the numerator of fraction
	int getNumerator();
	// Returns the denominator of fraction
	int getDenominator();  
	//Gets the numerator and denominator of fraction Returns the reduced numerator
	int numerator(int nu, int de) const;
	//Gets the numerator and denominator of fraction Returns the reduced denominator
	int denominator(int nu, int de) const;
	// The greatest common divisor of two numbers 
	int gcd(int n1, int n2) const;  
	// The + operator to add two fractions and return their sum as another fraction in reduced form.
	friend Fraction operator+ (const Fraction& a, const Fraction& other);
	// The - operator to subtract two fractions and return their difference as another fraction in reduced form.
	friend Fraction operator- (const Fraction& a, const Fraction& other);
	// The * operator to multiply two fractions and return their product as another fraction in reduced form.
	friend Fraction operator* (const Fraction& a, const Fraction& other);
	// The / operator to divide two fractions and return their quotient as another fraction in reduced form.
	friend Fraction operator/ (const Fraction& a, const Fraction& other);
	// The == operator to compare two fractions for equality and return true or false.
	friend bool operator== (const Fraction& a, const Fraction& other);
	// The != operator to compare two fractions for unequal and return true or false.
	friend bool operator!= (const Fraction& a, const Fraction& other);
	// The > operator to compare two fractions with the first fraction greater than the second fraction and return true or false.
	friend bool operator> (const Fraction& a, const Fraction& other);
	// The > operator to compare two fractions with the first fraction smaller than the second fraction and return true or false.
	friend bool operator< (const Fraction& a, const Fraction& other);
	// The >= operator to compare two fractions with the first fraction greater or equality than the second fraction and return true or false.
	friend bool operator>=(const Fraction& a, const Fraction& other);
	// The <= operator to compare two fractions with the first fraction smaller or equality than the second fraction and return true or false.
	friend bool operator<=(const Fraction& a, const Fraction& other);
	// The ++ and -- operator that adds 1 to the fraction. implement both pre and post fix.
	// In the case of ++x
	friend Fraction operator++ (const Fraction& a);
	// In the case of x++
	friend Fraction operator++(const Fraction& a, int);
	Fraction& operator++();
	// The ++ and -- operator that substracts 1 to the fraction. implement both pre and post fix.
	// In the case of --x
	friend Fraction operator-- (const Fraction& a);
	// In the case of x--
	friend Fraction operator--(const Fraction& a, int);
	Fraction& operator--();
	// The << operator to print a fraction to an output stream in the format “numerator/denominator”.
	friend ostream& operator<<(ostream& os, const Fraction& frac);
	// The >> operator to read a fraction from an input stream by taking two integers as input.
	friend istream& operator>>(ostream& input, Fraction& frac);
};
#endif

}

