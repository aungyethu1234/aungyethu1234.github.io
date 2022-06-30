# 60 => 1 min 3600 s => 1 hour
# 3600 => 1 hr : 0 min : 0 sec
# 3610 => 1 hr: 0 min : 10 sec

seconds = int(input("Enter seconds: "))
hours = seconds // 3600 # hour
seconds %= 3600 # second = second % 3600
minutes = seconds // 60
seconds %= 60
print(hours, 'hr: ', minutes, ' min: ', seconds, ' sec ')
