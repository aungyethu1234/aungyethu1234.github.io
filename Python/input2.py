#eval to execute expression to run time
a = '1+2'
r = eval(a)
print(r)

b ='[1,2,3]+["c","d"]'
s = eval(b)
print(s)

#exec to execute statement at run time r = 1+1
statement ="r = 1+1"
exec(statement) #run time execution
print('result',r)



