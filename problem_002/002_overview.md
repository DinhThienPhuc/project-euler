# Problem 2. Find the sum of all the even-valued terms in the Fibonacci sequence which do not exceed four million.

A direct translation of the problem statement would be a program like this:
```
limit=4000000
sum=0
a=1
b=1
while b<limit
    if b mod 2=0 then sum=sum+b
        h=a+b
        a=b
        b=h
output sum
```
Now let us see if we can get rid of the testing for even values.

Here is the beginning of the Fibonacci sequence with even numbers in red:
```
1 1 2 3 5 8 13 21 34 55 89 144 ...
a b c a b c  a  b  c  a  b  c
```
It is easy to prove that every third Fibonacci number is even.

It is not so difficult to change the program somewhat so that only every third number is
added:
```
limit=4000000
sum=0
a=1
b=1
c=a+b
while c<limit
    sum=sum+c
    a=b+c
    b=c+a
    c=a+b
output sum
```
There is another beautiful structure hidden beneath this problem:

If we only write the even numbers:
```
2 8 34 144...
```
it seems that they obey the following recursive relation: E(n)=4*E(n-1)+E(n-2).

If we can prove that for the Fibonacci numbers the formula F(n)=4*F(n-3)+F(n-6) holds we
have proven this recursion.

The proof is on the following page. Perhaps you want to try that yourself first.

```
= F(n-2)+F(n-3)+F(n-2)=2 F(n-2) + F(n-3)
= 2(F(n-3)+F(n-4))+F(n-3))=3 F(n-3) + 2 F(n-4)
= 3 F(n-3) + F(n-4) + F(n-5) + F(n-6)
= 4 F(n-3) + F(n-6)
```
In the forum several other schemes can be found to avoid the testing for the Fibonacci
numbers to be even. If you did not find your method in this overview you might have a look
there.