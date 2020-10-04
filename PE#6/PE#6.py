"""
The sum of the squares of the first ten natural numbers is (1^2 + 2^2 + 3^2 + ... + 10^2) = 385
The square of the sum of the first ten natural numbers is (1 + 2 + 3 + ... + 10) = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
"""

def square_of_sum_of_n(n):
  val = n*(n+1)//2
  return val**2
  
def sum_of_squares_of_n(n):
  return n*(n+1)*(2*n + 1)//6

square_of_sum_of_n(100) - sum_of_squares_of_n(100)
