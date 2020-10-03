"""
Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
find the sum of the even-valued terms.
"""

# Reference : https://medium.com/@TheZaki/project-euler-2-even-fibonacci-numbers-2219e9438970

def EvenFib(threshold):
  start,sec = 2,8
  t_sum = 10
  while True:
    n = start + 4*sec
    if n>=threshold: return t_sum
    t_sum+=n
    start,sec = sec,n
    
