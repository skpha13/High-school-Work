from tkinter import MOVETO
import pyautogui
from time import sleep
import pyperclip
import keyboard
from array import *

pyautogui.PAUSE = 0.025
sleep(1)

def lettergrab():
    pyautogui.leftClick(x=445,y=113)
    pyautogui.doubleClick(x=445,y=113)
    pyautogui.keyDown('ctrl')
    pyautogui.keyDown('c')
    pyautogui.keyUp('c')
    pyautogui.keyUp('ctrl')

v = [('A','albania','aiud','alpi','abager','afin','antilopa','alin'),
     ('B','belgia','brasov','bucegi','baciu','busuioc','broasca','bogdan'),
     ('C','croatia','calarasi','carpati','ciotina','chimen','cal','cristi'),
     ('D','danemarca','dej','dobrogei','dades','dud','delfin','david'),
     ('E','elvetia','edinburgh','everest','egher','eucalipt','emu','eduard'),
     ('F','franta','fagaras','fagaras','fagu','frasin','foca','fabian'),
     ('G','germania','galati','godeanu','galati','ghimbir','gasca','gabi'),
     ('H','hawaii','hateg','harghita','habic','hamei','hiena','horia'),
     ('I','india','iasi','ineu','iacob','in','iguana','ion'),
     ('J','jamaica','jakarta','jura','jiu','jneapan','jaguar','john'),
     ('K','kuweit','kansas','kilimanjaro','keleti','kiwi','koala','kevin'),
     ('L','luxemburg','luxemburg','lotru','lotru','lavanda','liliac','lavinia'),
     ('M','monaco','monaco','moldoveanu','mures','mac','magar','marius'),
     ('N','nepal','nasaud','nemira','nil','nuc','nevastuica','nae'),
     ('O','olanda','oradea','omu','olt','ovas','orca','ovidiu'),
     ('P','polonia','ploiesti','parang','prut','papadie','peste','pavel'),
     ('Q'),
     ('R','rusia','rotterdam','retezat','racova','rapita','rinocer','raul'),
     ('S','suedia','sighisoara','semenic','siret','salcie','suricata','sorina'),
     ('T','tanzania','titu','tarcau','tampa','tei','taur','tudor'),
     ('U','uganda','urziceni','ural','ulicioara','usturoi','urangutan','ursu'),
     ('V','vatican','vaslui','valcan','vadu','vasc','vaca','vlad'),
     ('W'),
     ('X'),
     ('Y'),
     ('Z','zimbabwe','zalau','zarand','zalau','zmeura','zebra','zaharia')
    ]

while True:
    for j in range(5):
        lettergrab()
        letter=pyperclip.paste()

        ch = ord(letter[0])-ord('A')

        sleep(0.05)
        pyautogui.leftClick(x=1213,y=180)

        i=1;
        while i<=7:
            for x in v[ch][i]:
                pyautogui.press(x)
            pyautogui.press('tab')
            i+=1
        sleep(1)
        pyautogui.leftClick(x=865,y=528)
        sleep(0.25)
    pyautogui.leftClick(x=1305,y=525)
    sleep(0.2)
    pyautogui.leftClick(x=987,y=133)
    sleep(0.2)
    pyautogui.leftClick(x=1140,y=412)