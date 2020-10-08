"""
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
"""
from math import sqrt

def is_prime(num):
  if num==2 or num==3:return True
  if num==1 or num%2==0 or num%3==0:return False
  
  for i in range(5,int(sqrt(num))+1, 2):
    if num%i==0:return False
  return True
  
def prime_sum():
  sum=5
  for i in range(5, 2_000_000, 2):
    if is_prime(i):
      sum = sum+i
  print(sum)

prime_sum()
