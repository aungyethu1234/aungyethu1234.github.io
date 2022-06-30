import os
import time
choice = input("Shutdown your computer? ( y or n ): ")

if choice == 'y' or 'Y':
    print("computer will shutdown in 4 second...")
    os.system('shutdown /s /t 4')
else:
    print("Exiting program")
