#!/bin/bash
define sq(a,b,c){scale=6;da=-b/(2*a); db=c/a;d=sqrt(da^2-db);xj=da+d;xd=da-d;print xj; print " "; print xd; print "\n"};sq(1,2,-3)
