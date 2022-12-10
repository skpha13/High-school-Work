import pyautogui
import keyboard

file1 = open("Text1.txt","rt")
Text1 = file1.read()
file1.close()
file2 = open("Text2.txt","rt")
Text2 = file2.read()
file2.close()
file3 = open("Text3.txt","rt")
Text3 = file3.read()
file3.close()

while True:
    if keyboard.is_pressed('pause'):
        pyautogui.alert("Task finished successfully")
        break
    if keyboard.is_pressed('1'):
        pyautogui.press('backspace')
        pyautogui.typewrite(Text1)
    if keyboard.is_pressed('2'):
        pyautogui.press('backspace')
        pyautogui.typewrite(Text2)
    if keyboard.is_pressed('3'):
        pyautogui.press('backspace')
        pyautogui.typewrite(Text3)