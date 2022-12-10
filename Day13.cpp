/*
Medium Level Starts...


Number Theory:

Modulus:
1. (a+b)%m = (a%m + b%m)%m
2. (a-b)%m = (a%m - b%m)%m
3. (a*b)%m = (a%m * b%m)%m
4. (a^x)%m = (a%m)^x
5. (a/b)%m = (a*b^-1)%m = (a%m*(b^-1)%m)%m
	inverse -> b*x%m==1, x is inverse of b.
	not possibe for b<m.
	To find inverse (b,m) is coprime ->gcd=1.

nCr Concept:

ncr = n! / ((n-r)!*r!)
factorial(n)=(n*(factorial(n-1)%m))%m (dp)
for large numbers modulo gives 0.

Binary Exponential:


*/