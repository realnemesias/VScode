# -*- coding: utf-8 -*-
"""
Created on Fri Jun 23 23:23:15 2023

@author: realn
"""

with open("archivo.txt", 'w') as file:
    for nombre, nota in notas.item():
        file.write(nombre + "-" + str(nota) + "\n")