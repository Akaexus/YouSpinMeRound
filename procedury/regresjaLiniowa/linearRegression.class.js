//NodeJS v6.9.1
class linearRegression {
  constructor(x, y) {
    this.x = x;
    this.y = y;
  }

  avg(tab) {
    var s = 0;
    for(var i=0; i<tab.length; i++) {
      s+=tab[i];
    }
    return s/tab.length;
  }

  calc() {
    var x = this.x,
        y = this.y;
    if(x.length===y.length) {
      var a,
          b,
          aU = 0,
          aD = 0,
          Xa = this.avg(x),
          Ya = this.avg(y);
      for(var i=0; i<x.length; i++) {
        aU+=(x[i]-Xa)*(y[i]-Ya);
        aD+=Math.pow((x[i]-Xa), 2);
      }
      a = aU/aD;
      b = Ya-a*Xa;
      return {a: a, b: b};
    }
    return false;
  }
}

module.exports = linearRegression;
