#include <iostream>
#include <cstdlib>
#include <sstream>
#include <ctime>
#include <cmath>

class Fraction {
  public:
    Fraction(int n, int d) : n(n), d(d) {}
    int n;
    int d;
    Fraction reduce();
    Fraction inverse();
    Fraction operator +(Fraction f) {
      int m = this->LCM(this->d, f.d);
      Fraction out((this->n*m/this->d)+(f.n*m/f.d), m);
      return out.reduce();
    }
    Fraction operator -(Fraction f) {
      int m = this->LCM(this->d, f.d);
      Fraction out((this->n*m/this->d)-(f.n*m/f.d), m);
      return out.reduce();
    }
    Fraction operator *(Fraction f) {
      f.n*=this->n;
      f.d*=this->d;
      return f.reduce();
    }
    Fraction operator /(Fraction f) {
      return (*this*f.inverse()).reduce();
    }
    bool operator ==(Fraction f) {
      return this->reduce().n==f.reduce().n && this->reduce().d==f.reduce().d;
    }
    bool operator >(Fraction f) {
      return this->n/this->d>f.n/f.d;
    }
    bool operator <(Fraction f) {
      return this->n/this->d<f.n/f.d;
    }
    int LCM(int a, int b);
    int GCD(int a, int b);
    std::string print();
};

int Fraction::GCD(int a, int b) {
  while(b) {
    int r = a%b;
    a = b;
    b = r;
  }
  return a;
}

int Fraction::LCM(int a, int b) {
  return a*b/(this->GCD(a, b));
}

Fraction Fraction::reduce() {
  int divider = abs(this->GCD(this->n, this->d));
  this->n/=divider;
  this->d/=divider;
  return *this;
}
Fraction Fraction::inverse() {
  int temp = this->n;
  this->n = this->d;
  this->d = temp;
  return *this;
}

std::string Fraction::print() {
  std::stringstream output;
  if(this->d == 1) {
    output << this->n;
  } else {
    output << this->n << "/" << this->d;
  }
  return output.str();
}

Fraction randomFraction(int a, int b) {
  int n = rand()%(b-a+1)+a;
  int d = rand()%(b-a+1)+a;
  Fraction out(n, d);
  return out.reduce();
}


int main() {
  srand(time(NULL));
  int min = 3,
      max = 100;
  Fraction minFraction = randomFraction(min, max),
           maxFraction = minFraction;
  for(int i=1; i<100; i++) {
    Fraction f = randomFraction(min, max);
    if(maxFraction<f) {
      maxFraction = f;
    }
    if(minFraction>f) {
      minFraction = f;
    }
  }
  std::cout << "min: " << minFraction.print() << "\n"
            << "max: " << maxFraction.print() << "\n"
            << "min + max = " << (minFraction+maxFraction).print() << "\n"
            << "min - max = " << (minFraction-maxFraction).print() << "\n"
            << "min * max = " << (minFraction*maxFraction).print() << "\n"
            << "min / max = " << (minFraction/maxFraction).print() << "\n";
  return 0;
}
