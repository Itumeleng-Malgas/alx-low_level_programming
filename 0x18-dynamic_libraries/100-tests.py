#!/usr/bin/python3
import random
import ctypes

# Load the shared library
cops = ctypes.CDLL('./100-operations.so')

# Generate random integers
a = random.randint(-111, 111)
b = random.randint(-111, 111)

# Perform arithmetic operations using the C functions
add_result = cops.add(a, b)
sub_result = cops.sub(a, b)
mul_result = cops.mul(a, b)
div_result = cops.div(a, b)
mod_result = cops.mod(a, b)

# Print the results
print("{} + {} = {}".format(a, b, add_result))
print("{} - {} = {}".format(a, b, sub_result))
print("{} x {} = {}".format(a, b, mul_result))
print("{} / {} = {}".format(a, b, div_result))
print("{} % {} = {}".format(a, b, mod_result))

