# def yfunc(t):
#     g = 9.81
#     return v0*t - 0.5*g*t**2

# v0 = 1
# t = 0.6
# print(yfunc(t))
t = 10

def zfunc(t):
    g = 9.81
    global v0
    v0 = 5
    print('Local v0', v0)

v0 = 10
print('Global v0', v0)
zfunc(t)
