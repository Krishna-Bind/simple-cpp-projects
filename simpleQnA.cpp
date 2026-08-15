
#include <iostream>

int main() {
    std::string questions[] =   {"1. What year was C++ created?: ",
                                "2. Who invented C++?: ",
                                "3. What is the predecessor of C++?: ",
                                "4. Is the earth flat?: "};

    std::string options[][4] =  {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C. John Carter", "D. Unknown"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. yes", "B. no", "C. sometimes", "D. what's Earth?"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << "****************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "****************************\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';

        }
        std::cout << " Submit Your answer here: ";
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "You are CORRECT!\n";
            score++;
        }
        else{
            std::cout << "You're WRONG!\n";
            std::cout << "Correct answer is: " << answerKey[i] << "\n";
        }
    }
    std::cout << "****************************\n";
    std::cout << "********* Results **********\n";
    std::cout << "****************************\n";
    std::cout << "Correct Guesses: " << score << '\n';
    std::cout << "Number of Questions: " << size << '\n';
    std::cout << "Your Score: " << (score/(double)size) * 100 << "%\n";
    return 0;
}