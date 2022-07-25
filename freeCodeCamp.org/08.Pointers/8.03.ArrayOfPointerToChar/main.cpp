#include <iostream>

using namespace std;

int main()
{
    //srand() has to run once per program run
    srand(time(0)); // Seed

    /*
    char prediction0[]{ "a lot of kinds running in the backyard!" };
    char prediction1[]{ "a lot of empty beer bottles on your work table." };
    char prediction2[]{ "you Partying too much with kids wearing weird clothes." };
    char prediction3[]{ "you running away from something really scary" };
    char prediction4[]{ "clouds gathering in the sky and an army standing ready for war" };
    char prediction5[]{ "dogs running around in a deserted empty city" };
    char prediction6[]{ "a lot of cars stuck in a terrible traffic jam" };
    char prediction7[]{ "you sitting in the dark typing lots of lines of code on your dirty computer" };
    char prediction8[]{ "you yelling at your boss. And oh no! You get fired!" };
    char prediction9[]{ "you laughing your lungs out. I've never seen this before." };
    */

   /*
    char predictions [] [90] {
        "a lot of kinds running in the backyard!",
        "a lot of empty beer bottles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before.",
        ", huum, I don't see anything",
        "you drinking wine"
    };
    */

   	// METHOD3.
    const char * predictions []  {
        "a lot of kids running in the backyard!",
        "a lot of empty beer bottles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before." 
    };

    bool end{ false };

    const int  max_length{ 15 };
    char name[max_length]{};

    cout << "What's your name dear :" << endl;

    cin.getline(name, max_length); // Get input with spaces

    while (!end) {
        cout << "Oh dear " << name << ", I see ";

        size_t rand_num = static_cast<size_t>((rand() % size(predictions)));

        cout << predictions[rand_num] << endl;

        cout << "Do you want me to try again ? (Y | N) : ";

        char go_on;
        cin >> go_on;

        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
    }

    cout << "That's all I have for you today dear. Best wishes" << endl;

    return 0;
}