#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    unordered_map<string, string> memory;
    string user_input;

    // turning user input into lowercase
    transform(user_input.begin(), user_input.end(), user_input.begin(), ::tolower);
    cout << "Welcome user, I am a chatbot" << endl;
    
    // our chat functionality
    while(true){
        // getting user input
        getline(cin, user_input);

        // turning user input into lowercase
        transform(user_input.begin(), user_input.end(), user_input.begin(), ::tolower);

        if(user_input == "hi" || user_input == "hello" || user_input == "hey"){
            cout << "Hello user, how can I help you?" << endl;
        }
        else if(user_input == "how are you" || user_input == "are you ok"){
            cout << "As a chatbot I have no emotionl states" << endl;
        }
        else if(user_input == "what's my name"){
            if(memory.find("name") != memory.end()){
                cout << "Your name is " << memory["name"] << endl;
            }
            else{
                cout << "Sorry you didn't told me your name yet. Tell me your name" << endl;
            }
        }
        else if(user_input.find("my name is") != string::npos){
            size_t pos = user_input.find("my name is");
            string name = user_input.substr(pos + 11);
            memory["name"] = name;
            cout << "Nice to meet you " << name << endl;
        }
        else if(user_input == "bye" || user_input == "see you later" || user_input == "later"){
            cout << "Bye";
            break;
        }
        else{
            // default message
            cout << "I didn't get that, sorry" << endl;
        }
    }
    return 0;
}