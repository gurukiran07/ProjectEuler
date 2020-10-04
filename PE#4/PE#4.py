"""
A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
"""
 
# Reference : https://adamdrake.com/an-unreasonably-deep-dive-into-project-euler-problem-4.html

def is_palindrome(number):
  return str(number) == str(number)[::-1] # This is not the most efficient way, refer cpp file for much better way.
  
def largest_3_palindrome():
 res = 0
 for i in range(990, 100, -11):
   for j in range(999, 100, -1):
     prod = i*j
     if res<prod and is_palindrome(prod):
       res = prod
       break
     elif res>prod:
       break
 return res
