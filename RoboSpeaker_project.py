import pyttsx3
engine = pyttsx3.init()
name = input("Enter your name: ")
engine.say(f"Hello, {name} and Welcome to RoboSpeaker 3.14")
print("Welcome to RoboSpeaker 3.14 created by Krishna...")
while True: 
    text = input("What do you want me to speak: ")
    if text == "quit":
        engine.say("Well, bye friend!") 
        print("Well, bye friend!")
        engine.runAndWait() 
        break 
    engine.say(text) 
    engine.runAndWait()



#  ~~~~~~~~~~~ error ~~~~~~~~~~
# import os

# if __name__ == '__main__':
#     print("Welcome to RoboSpeaker 3.14 created by Krishna...")
    
#     while True:
#         x = input("What do you want me to speak: ")
#         if x == "quit":
#             os.system("say'Well, bye friend!'")
#             break
#         command = f"say {x}"
#     os.system(command)
