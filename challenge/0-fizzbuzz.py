#!/usr/bin/python3
""" FizzBuzz
"""
import sys


def fizzbuzz(n):
    """
    FizzBuzz function prints numbers from 1 to n separated by a space.

    - For multiples of three print "Fizz" inste    ./0-fizzbuzz.py 89    chmod +x ./0-fizzbuzz.pyd of the number and for
      multiples of five print "Buzz".
    - For numbers which are multiples of both three and five print "FizzBuzz".
    """
import sys

def fizzbuzz(n):
    for i in range(1, n + 1):
        if i % 15 == 0:  # divisible par 3 et 5
            print("FizzBuzz", end=" ")
        elif i % 3 == 0:
            print("Fizz", end=" ")
        elif i % 5 == 0:
            print("Buzz", end=" ")
        else:
            print(i, end=" ")

# Vérification de l'entrée depuis la ligne de commande
if __name__ == "__main__":
    if len(sys.argv) > 1:
        try:
            n = int(sys.argv[1])  # Utiliser le premier argument de la ligne de commande comme valeur pour n
            fizzbuzz(n)
        except ValueError:
            print("Veuillez fournir un nombre entier valide.")
    else:
        print("Usage: ./0-fizzbuzz.py <nombre>")

