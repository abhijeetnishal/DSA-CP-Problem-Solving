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

To find 2^10000 -> we need to run loop 10000 time so time
complexity is O(power) so for n numbers we need TC of O(n*n).
Using binary exp. we can do in logn for 1 number.
*/

/*
Binary exponentiation: TC:O(logn)

(x*y)*z = x*(Y*z)  the property of associativity
The idea of binary exponentiation is, that we split the work using the binary representation of the exponent.
e.g - 3^13=3^1101 (binary rep. of 13 is 1101) =3^8*3^4*3^1

Since the number n has exactly logn+1 digits in base 2,  we only need to perform O(logn) multiplication.
So we only need to know a fast way to compute those. Luckily this is very easy, since an element in the sequence 
is just the square of the previous element.
3^1=3
3^2=(3^1)^2=9
3^4=(3^2)^2=81
So to get the final answer for 3^13, we only need to multiply three of them.

*/

//Recursive approach:
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

//Iterative approach:
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}