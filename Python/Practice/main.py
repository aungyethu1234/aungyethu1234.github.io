import pyttsx3 as py
con = True
while con:
    text = input("Enter text to speak: ")
    engine = py.init()
    print("running...\n")
    engine.say(text)
    engine.runAndWait()

exit = input("Are you want to quit press Q: ")
if exit == 'Q' or 'q':
    con = False
else:
    con = True



   