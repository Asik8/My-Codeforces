
import pyautogui
n=int(input())
for i in range(n):
    for j in range(i+1):
        pyautogui.write('*')
    pyautogui.press('enter')