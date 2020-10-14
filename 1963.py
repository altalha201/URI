'''1963	The Motion Picture'''

# -*- coding: utf-8 -*-

a, b = input().split()
p = ((float(b)-float(a))*100.00)/float(a)
p_p = "{:.2f}".format(p)
print(f"{p_p}%")