#include "Fraction.hpp"
#include <cmath>
using namespace std;
namespace ariel {

Fraction reducedFraction(const Fraction& a){
	return Fraction(a.n(), a.d());
}

// https://www.programiz.com/cpp-programming/examples/hcf-gcd
int Fraction:: gcd(int n1, int n2) const{
	if(n1 == 0){
		return n2;
	}else{
		return n1;
	}
	while(n1 != n2) {
    if(n1 > n2)
      n1 -= n2;
    else
      n2 -= n1;
	}
	return n1;
}

int Fraction::numerator(int nu, int de) const {
	int amountTimes = int(nu / de);
	int rest = int(nu - (amountTimes*de));
	return ((rest/gcd(rest,1000)) + (denominator(nu,de)*amountTimes));
}
int Fraction::denominator(int nu, int de) const {
	int amountTimes = int(nu / de);
	int rest = int(nu - (amountTimes*de));
	return int(de/gcd(rest,de));
}

int Fraction::getNumerator(){
	return this->nom;
}
int Fraction::getDenominator(){
	return this->den;
}


Fraction operator+ (const Fraction& a, const Fraction& other) {
	cout << a << endl;
	// int nn = a.n() * other.d() +
	// 	a.d() * other.n();
	// int dd = a.d() * other.d();
	// return reducedFraction(Fraction(nn, dd));
	return a;
}

Fraction operator- (const Fraction& a, const Fraction& other) {
	// int nn = a.n() * other.d() -
	// 	a.d() * other.n();
	// int dd = a.d() * other.d();
	// return reducedFraction(Fraction(nn, dd));
		return a;

}

Fraction operator* (const Fraction& a, const Fraction& other) {
	// int nn = a.n() * other.d() *
	// 	a.d() * other.n();
	// int dd = a.d() * other.d();
	// return reducedFraction(Fraction(nn, dd));
		return a;

}


Fraction operator/ (const Fraction& a, const Fraction& other) {
	// int nn = a.n() * other.d() /
	// 	a.d() * other.n();
	// int dd = a.d() * other.d();
	// return reducedFraction(Fraction(nn, dd));
		return a;

}

// const float TOLERANCE = 0.001;


// bool operator== (const Fraction& other)  {
//     return (this->nom == other.nom) && (this->den == other.den);
// }

bool operator== (const Fraction& a, const Fraction& other) {
// 	Fraction a2 = reducedFraction(a);
// 	Fraction other2 = reducedFraction(other);
// 	return ( abs(a2.n()-other2.n())<=TOLERANCE && abs(other2.d()-other2.d())<=TOLERANCE );
return true;

}
bool operator!= (const Fraction& a, const Fraction& other) {
//     return !(a == other);
return true;

}
bool operator> (const Fraction& a, const Fraction& other) {
return true;

}
bool operator< (const Fraction& a, const Fraction& other) {
return true;

}
bool operator>= (const Fraction& a, const Fraction& other) {
// 	return ((a==other) || (a>other));
return true;

}
bool operator<= (const Fraction& a, const Fraction& other) {
// 	return ((a==other) || (a<other));
return true;

}

Fraction operator++ (const Fraction& a) {
// 	int nn = a.n() + a.d();
// 	return reducedFraction(Fraction(nn, a.d()));
return a;

}
Fraction operator++(const Fraction& a, int) {
    // Fraction old(a);
    return ++a;
}

Fraction& Fraction::operator++() {
    return *this;
}

Fraction operator-- (const Fraction& a) {
// 	int nn = a.n() - a.d();
// 	return reducedFraction(Fraction(nn, a.d()));
return a;

}
Fraction operator--(const Fraction& a, int) {
    // Fraction old(a);s
    return --a;
}

Fraction& Fraction::operator--() {
    return *this;
}

istream& operator>>(istream& input, Fraction& frac) {
	// return os << frac.n() << '/' << frac.d();
	return input;
}

ostream& operator<<(ostream& os, const Fraction& frac) {
		return os << frac.n() << '/' << frac.d();
}
}

