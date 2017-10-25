#include <iostream>
#include <cstdio>
#include <sstream>
#include <cmath>

struct fraction {
  fraction(): error(false) {}
  int n;
  int d;
  bool error;
};


class Fraction {
public:
    int promptInt(std::string name);
    int NWD(int a, int b);
    int NWW(int a, int b);
    std::string i2s(int _);
  public:
    fraction prompt(std::string name);
    std::string print(fraction f);
    fraction shorten(fraction a);
    fraction add(fraction a, fraction b);
    fraction substract(fraction a, fraction b);
    fraction flip(fraction $);
    fraction multiply(fraction a, fraction b);
    fraction divide(fraction a, fraction b);
  };

  int main() {
    Fraction $;
    fraction _ = $.prompt("f1");
    fraction __ = $.prompt("f2");
    std::string config[][4] = { //config printf
      {"shorten(%s)\t -> \t%s\n", $.print(_), $.print($.shorten(_)), ""},
      {"flip(%s)\t -> \t%s\n", $.print(_), $.print($.flip(_)), ""},
      {"substract(%s, %s)\t -> \t%s\n", $.print(_), $.print(__), $.print($.substract(_, __))},
      {"add(%s, %s)\t -> \t%s\n", $.print(_), $.print(__), $.print($.add(_, __))},
      {"multiply(%s, %s)\t -> \t%s\n", $.print(_), $.print(__), $.print($.multiply(_, __))},
      {"divide(%s, %s)\t -> \t%s\n", $.print(_), $.print(__), $.print($.divide(_, __))}
    };
    for(int i=0; i<(sizeof(config)/sizeof(*config)); i++) {
      printf(config[i][0].c_str(), config[i][1].c_str(), config[i][2].c_str(), config[i][3].c_str());
    }
  }

std::string Fraction::i2s(int _) {
  std::stringstream $;
  $ << _;
  return $.str();
}

int Fraction::promptInt(std::string name) {
  int tmp;
  std::cout << name << ">";
  while(!(std::cin >> tmp)) {
    std::cout << name << ">";
    std::cin.clear();
    std::cin.ignore();
  }
  return tmp;
}

fraction Fraction::prompt(std::string name) {
  fraction tmp;
  tmp.n = this->promptInt("n");
  do {
    tmp.d = this->promptInt("d");
  } while(tmp.d==0);
  return tmp;
}

std::string Fraction::print(fraction f) {
  if(f.error) {
    return "none";
  }
  if(f.n>0 && f.d<0) {
    f.n=-f.n;
    f.d=-f.d;
  }
  std::stringstream x;
  bool gotInt = false;
  if(std::abs(f.n)>std::abs(f.d)) {
    x << i2s(f.n/f.d);
    f.n = f.n%f.d;
    gotInt=!gotInt;
  }
  if(f.n!=0) {
    if(gotInt) {
      x << " ";
    }
    x << f.n << "/" << f.d;
  }
  std::string output = x.str();
  return output;
}

int Fraction::NWD(int a, int b) {
  while(b) {
    int temp = b;
    b = a%b;
    a = temp;
  }
  return a;
}

int Fraction::NWW(int a, int b) {
  return (a*b)/this->NWD(a, b);
}

fraction Fraction::shorten(fraction a) {
  if(a.n==0) {
    return a;
  }
  int _ = this->NWD(a.n, a.d);
  a.n/=_;
  a.d/=_;
  return a;
}

fraction Fraction::add(fraction a, fraction b) {
  int $ = this->NWW(a.d, b.d);
  fraction _;
  _.n = a.n*$/a.d+b.n*$/b.d;
  _.d = $;
  return _;
}

fraction Fraction::substract(fraction a, fraction b) {
  int $ = this->NWW(a.d, b.d);
  fraction _;
  _.n = a.n*$/a.d-b.n*$/b.d;
  _.d = $;
  return _;
}

fraction Fraction::flip(fraction $) {
  if($.n==0) {
    $.error=true;
    return $;
  }
  fraction _;
  _.n=$.d;
  _.d=$.n;
  return _;
}

fraction Fraction::multiply(fraction a, fraction b) {
  fraction _;
  _.n = a.n*b.n;
  _.d = a.d*b.d;
  return this->shorten(_);
}

fraction Fraction::divide(fraction a, fraction b) {
  return this->multiply(a, this->flip(b));
}
