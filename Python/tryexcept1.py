from ast import Index
import sys
try:
    C = float(sys.argv[1])
except IndexError:
    print('Your failed to provide C value! ')
    sys.exit(1)
except ValueError:
    print('Your C value  is invalid!')
F = 9.0*C/5 +32
print(C,' C=',F,' F')
