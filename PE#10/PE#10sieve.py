"""
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
"""

def prime_sum():
  prime = [True]*2_000_000
  for i in range(2, 2_000_000):
    if prime[i]:
      for j in range(i*i, 2_000_000, i):
        prime[j]=False
  sum=0
  for i in range(2, 2_000_000):
    if prime[i]:sum=sum+i
  print(sum)

prime_sum()
