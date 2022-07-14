import pyttsx3
import datetime
import speech_recognition as sr
import wikipedia
import webbrowser
import os
import random

engine=pyttsx3.init('sapi5')
voices=engine.getProperty('voices')

engine.setProperty('voice',voices[0].id)

def speak(audio):
    engine.say(audio)
    engine.runAndWait()

def wishme():
    hour=int(datetime.datetime.now().hour)
    if(hour>=0 and hour<12):
        speak("Good Morning!")
    elif(hour>=12 and hour<18):
        speak("Good Afternoon!")
    else:
        speak("Good Evening!")
    speak("I am Jarvis and how can i help you")

def takecommand():

    r=sr.Recognizer()
        # with sr.Microphone() as source:
        #     print("Listening...")
        #     r.pause_threshold=1
        #     audio=r.listen(source)
        
    try:
            with sr.Microphone() as source:
                print("Listening...")
                r.pause_threshold=1
                audio=r.listen(source)
                # print("Recognizing...")
                query=r.recognize_google(audio)
                print("User said:",query)

    except Exception as e:
            pass

    return query
        

if __name__=="__main__":
    wishme()
    query=takecommand().lower()
    if 'wikipedia' in query:
        speak("searching wikipedia...")
        query=query.replace("wikipedia","")
        results=wikipedia.summary(query,sentences=2)
        speak("According to wikipedia")
        print(results)
        speak(results)
    elif 'open youtube' in query:
        webbrowser.open("youtube.com")

    elif 'open google' in query:
        webbrowser.open("google.com")

    elif 'open codeforces' in query:
        webbrowser.open("codeforces.com")
    
    elif 'play music' in query:
        music_dir = 'C:\\New Songs'
        songs=os.listdir(music_dir)
        os.startfile(os.path.join(music_dir,random.choice(songs)))

    elif 'time' in query:
        strtime=datetime.datetime.now().strftime("%H:%M:%S")
        speak(f"Sir the time is {strtime}") 

    elif 'open code' in query:
        codepath="C:\\Users\\91951\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Visual Studio Code\\Visual Studio Code.lnk"
        os.startfile(codepath)
        
    elif 'quit' in query:
        os._exit(0)

