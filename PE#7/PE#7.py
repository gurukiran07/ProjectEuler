"""
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
"""
from math import sqrt

def is_prime(num):
  if num==2 or num==3: return True
  
  if num==1 or num%2==0 or num%3==0: return False
  
  for i in range(5, int(sqrt(num))+1, 2):
    if num%i==0: return False
  return True

def prime_10001():
  prime = 3
  count = 2
  i = 5
  while count!=10001:
    if is_prime(i):
      count+=1
      prime = i
    i = i + 2
  return prime
  
print(prime_10001())
