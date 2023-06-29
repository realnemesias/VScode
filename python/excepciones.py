# -*- coding: utf-8 -*-
"""
Created on Fri Jun 23 23:32:51 2023

@author: realn
"""

num1 = int(input("ingresa un numero"))
num2 = int(input("ingresa otro numero"))

try:
    resultado = num1/num2
    print(resultado)
    
except:
    print("sistem alert")
    
else:
    print("casi")
    
finally:
    print("gracias")