"""
Created on Fri Jun 23 23:00:42 2023

@author: realn
"""

def fibonacci(n):
    if n == 0 or n == 1:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)

fibonacci(4)


# def factorial(n):
#    if n == 0 or n == 1:
#        return n
#    else:
#       return n*factorial(n-1)
    

#factorial(5)
