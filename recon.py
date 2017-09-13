from __future__ import print_function
from pwn import *
import pprint 

pp = pprint.PrettyPrinter(indent = 4)
vuln = ELF('./a.out') 

print("\n---------------------------------------------Functions:\n")
pp.pprint(vuln.functions)

print ("\n---------------------------------------------Data:\n")

data = vuln.read(vuln.symbols['data_start'],(vuln.symbols['_edata']-vuln.symbols['data_start']))
not_null=False
for c in data:
    if not c == chr(0):
        not_null=True
        print(c,end='')
    elif not_null:
        print('')
        not_null=False

print ("\n----------------------------------------------All:\n")
pp.pprint(vuln.symbols)
