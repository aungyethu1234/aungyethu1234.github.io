import pyautogui as py
i = 0
print(py.position())
py.click(700, 64)
while i<20:
    py.typewrite(str(i+1)+'. Sorry!\n')
    i += 1








