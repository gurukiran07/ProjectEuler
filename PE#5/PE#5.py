from math import gcd

"""
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
"""

lcm = lambda a,b: a*b/gcd(int(a),int(b))

def smallest_multiple(n):
  val = 2
  for i in range(3,n+1):
    val = lcm(val, i)
  return val # return type is float, as gcd return a float. To get int use `return int(val)`
  
smallest_multiple(20)  
