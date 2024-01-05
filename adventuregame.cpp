#include<iostream>
#include<string>


using namespace std;


//for lowercase
string tolowercase(const string& str)
{
    string result;
    for (char c : str)
    {
        result += tolower(c);
    }
    return result;
} //for lower case
//.................................





class player               // class of player where all the data is store,
{
public: string name;
public: int coins = 0;
public: int health = 10;
public: int damage = 1;
public: int armorvalue = 0;
public: int potion = 5;
public: int weaponvalue = 1;


};
player cp;  //current player   of class player
class shop           //class
{

public: void loadshop(player p)          //
{


    runshop(p);

}

public: void runshop(player p)
{
    int potionp;
    int armorp;
    int weaponp;

    string input;



    while (true)
    {
        potionp = (20 + 10 * cp.potion);
        armorp = 100 * (cp.armorvalue + 1);
        weaponp = 100 * cp.weaponvalue;



        system("clear");
        cout << "          shop         " << endl;
        cout << "=======================" << endl;
        cout << "| (W)eapon:    $" << weaponp << "      |" << endl;
        cout << "| (A)rmor:     $" << armorp << "      |" << endl;
        cout << "| (p)otion:    $" << potionp << "     |" << endl;
        cout << "=======================" << endl;
        cout << "| (E)xit               |" << endl;
        cout << endl;


        cout << "   " << cp.name << "'s Stats     " << endl;
        cout << "========================" << endl;
        cout << " Current Health:  " << cp.health << endl;
        cout << " Coins:           " << cp.coins << endl;
        cout << " Weapon Strength: " << cp.weaponvalue << endl;
        cout << " Armor toughness: " << cp.armorvalue << endl;
        cout << " Potions:         " << cp.potion << endl;
        cout << "========================" << endl;
        // wait for input

        getline(cin, input);


        if (tolowercase(input) == "p" || tolowercase(input) == "potion")
        {
            trybuy("potion", potionp);

        }
        else if (tolowercase(input) == "w" || tolowercase(input) == "weapon")
        {
            trybuy("weapon", weaponp);

        }
        else if (tolowercase(input) == "a" || tolowercase(input) == "armor")
        {
            trybuy("armor", armorp);

        }
        else if (tolowercase(input) == "e" || tolowercase(input) == "exit")
        {
            break;

        }



    }


}
      void trybuy(string item, int cost)
      {
          if (cp.coins >= cost)
          {
              if (item == "potion")
                  cp.potion++;

              else if (item == "weapon")
                  cp.weaponvalue++;

              else if (item == "armor")
                  cp.armorvalue++;


              cp.coins -= cost;
          }


          else
          {
              cout << "Ya dont have enough gold coin pal!!! " << endl;
              cin.ignore();
          }

      }


};
shop myshop;

int getcoins() // to get coins
{
    int upper = (100);
    int lower = (10);
    srand(time(0));
    int c = (rand() % upper + lower);
    cp.coins += c;
    return c;
}
char qui;
void quit()
{
    string quit;
    do {
        cout << "Are you sure you want to quit the game?" << endl;
        cout << "Y for Yes and N for No ";
        cin >> quit;
        if (tolowercase(quit) == "y")
        {
            cout << "Thanks For Playing!!!" << endl;
            exit(0);
        }
        if (tolowercase(quit) == "n")
        {
            break;

        }
    } while (tolowercase(quit) != "y" || tolowercase(quit) != "n");
}
void box();
void menu();
void firststory();
void riddle();
void FirstSideQuest();
void sidequest2();
void puzzle();
void gotoshop();
void beforefight1();
void afterfight1();
void combat(string name, int power, int health);
void afterfight2();













int main()
{


    box();
    menu();

    firststory();

    FirstSideQuest();
    riddle();



    sidequest2();
    puzzle();
    gotoshop();
    beforefight1();

    combat("Vortexus", 4, 10);       //power then health
    afterfight1();
    combat("Darkonos", 8, 20);              //enemy name and power then health
    afterfight2();







}








/*-----------------------------------------------------------------------*/
void box()
{
    do
    {
    cout << "Enter your character name: ";
    getline(cin, cp.name);
    if(cp.name == "")
    cout << "Player name cannot be empty, please enter a name" << endl;

    }while(cp.name == "");
    system("clear");
    cout << "=====================================================" << endl;
    cout << "||                                                 || " << endl;
    cout << "                  ABYSSAL ODYSSEY                              " << endl;
    cout << "||                                                 || " << endl;
    cout << "=====================================================" << endl;
}

/*-----------------------------------------------------------------------*/
void menu()
{
    string option;

    cout << "welcome " << cp.name << "!" << endl;
    do
    {


        cout << endl;
        cout << "                       MENU                   " << endl;
        cout << "                      (S)tart                 " << endl;
        cout << "                      (Q)uit                  " << endl;
        cout << "enter your option: ";
        cin >> option;


        if ((tolowercase(option)) == "s")
        {
            system("clear");
            cout << "Starting..........." << endl << endl;
            cout << "Press Enter to continue......" << endl;
            break;
        }

        else if ((tolowercase(option)) == "q")
        {

            exit(0);
        }

        else
        {
            system("clear");
            cout << "                  wrong input!!!   " << endl;
            cin.ignore(); cin.ignore();

            system("clear");
            cout << "            Please Select The correct option   " << endl;

        }
    } while (tolowercase(option) != "s" || tolowercase(option) != "q");
}

/*-----------------------------------------------------------------------*/
void firststory()
{
    cin.ignore();                          //remove if shows blank screen on your compiler
    system("clear");
    cout << "On a chilly night, a village was cloaked in snow when ominous beasts attacked." << endl;
    cout << "Among them, a demonic boss sensed power emanating from Jake’s herd," << endl;
    cout << "where two siblings, a boy and a girl, resided. Tragedy struck as the boy valiantly intervened," << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();

    cout << endl;

    cout << "sacrificing himself to save his sister from the malevolent goblin boss." << endl;
    cout << "When there older brother " << cp.name << " returned home he find about " << endl;
    cout << "what happened in the village by the villagers" << endl;
    cout << "Driven by grief, " << cp.name << " sets out to rescue his kidnapped sister and avenge " << endl;
    cout << "his fallen sibling. Along the journey, " << cp.name << " encounters allies, faces challenges, and" << endl;
    cout << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();

    cout << "confronts the demon in an epic showdown with multiple endings." << endl;
    cout << "Seeking the demon, " << cp.name << " consults villagers who point him to a wise granny." << endl;
    cout << "She shares insights on the demon and gifts him a special watch to guide his way." << endl;
    cout << endl;

    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();

    cout << "At last after the long adventure, crossing the rocky mountains " << cp.name << " reached" << endl;
    cout << " a huge mysterious forest, the watch indicating him the egg," << endl;
    cout << cp.name << " followed the path the watch showed him and reached a castle where the demon lived." << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();
    system("clear");
}





/*-----------------------------------------------------------------------*/
void riddle()
{
    int wrongAnswer = 0;
    string ans;  // Declare ans outside the do-while loop
    cout << endl;

    cout << cp.name << " continued walking inside the gate towards the main castle.";
    cout << cp.name << " entered the castle and he spotted a scary looking demon." << endl;
    cout << " it was as if the demon knew that " << cp.name << " would come to see him in" << endl;
    cout << "his castle. The demon was a master at riddles," << endl;
    cout << " he offered " << cp.name << " some riddles to solve and if " << cp.name << " managed to solve them,";
    cout << "the demon would accept  defeat and let " << cp.name << " go forward on his journey." << endl;
    cout << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();

    system("clear");



    cout << cp.name << endl;

    cout << "          Where's my sister, demon?" << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();
    cout << "Demon: " << endl;

    cout << "         Impatient, mortal. Before you claim your kin, prove your mettle in a battle of wits. Within these walls," << endl;
    cout << "         riddles guard the path. Answer correctly, and you may proceed. Fail, and your journey ends." << endl;

    cout << "          The demon's eyes gleam as an ethereal mist swirls around." << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();

    cout << cp.name << endl;

    cout << "         I will do whatever I need to to save my sister!" << endl;
    cout << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();

    cout << "Demon: " << endl;

    cout << "        Very well. Here's your first challenge:" << endl;
    cout << " (You Need to answer atleast 3 riddles correctly to procced)" << endl;


    cout << "Press Enter to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    system("clear");

    do
    {
        cout << "The more you take, the more you leave behind. What am I?" << endl;

        cout << "Options: " << endl;
        cout << "        a) Footsteps" << endl;
        cout << "        b) A Rolling Stone" << endl;
        cout << "        c) A Flying Bird" << endl;
        cout << "        d) A Flowing River" << endl;
        cout << "Your Option: ";
        cin >> ans;

        if (tolowercase(ans) == "a")
        {
            cout << "Nice" << endl;
            cout << "You found  " << getcoins() << " coins!!!" << endl << endl;


            cout << endl;
            cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
            cin.get(qui);
            if (tolower(qui) == 'q')
            {
                quit();
            }
            cin.ignore();
        }
        else
        {
            cout << "wrong" << endl;
            cout << "Press Enter to continue...... or Press Q to  quit......" << endl;
            cin.get(qui);
            if (tolower(qui) == 'q')
            {
                quit();
            }
            wrongAnswer++;
        }
    } while (ans != "a" && ans != "b" && ans != "c" && ans != "d");

    cout << endl;
    system("clear");

    do
    {
        cout << "I'm tall when I'm young, and short when I'm old. What am I?" << endl; // SECOND RIDDLE

        cout << "Options: " << endl;
        cout << "        a) A Tree" << endl;
        cout << "        b) A Mountain" << endl;
        cout << "        c) A Candle" << endl;
        cout << "        d) A Building" << endl;
        cout << "Your Option: ";
        cin >> ans;
        if (tolowercase(ans) == "c")
        {
            cout << "Amazing" << endl;
            cout << "You found  " << getcoins() << " coins!!!" << endl;
            cout << endl;
            cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
            cin.get(qui);
            if (tolower(qui) == 'q')
            {
                quit();
            }
            cin.ignore();
        }
        else
        {
            cout << "wrong" << endl;
            cout << endl;
            cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
            cin.get(qui);
            if (tolower(qui) == 'q')
            {
                quit();
            }
            cin.ignore();
            wrongAnswer++;

        }
    } while (ans != "a" && ans != "b" && ans != "c" && ans != "d");

    system("clear");

    do
    {
        cout << "I'm not alive, but I can grow; I don't have lungs, but I need air; I don't have a mouth, " << endl; // THIRD RIDDLE
        cout << "but water kills me. What am I?" << endl;
        cout << endl;

        cout << "Options: " << endl;
        cout << "        a) A flower" << endl;
        cout << "        b) A Flame" << endl;
        cout << "        c) Fire" << endl;
        cout << "        d) Ice" << endl;
        cout << "Your Option: ";
        cin >> ans;
        if (tolowercase(ans) == "c")  // Fixed: Changed '=' to '=='
        {
            cout << "Ace" << endl;
            cout << "You found  " << getcoins() << " coins!!!" << endl << endl;
            cout << endl;
            cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
            cin.get(qui);
            if (tolower(qui) == 'q')
            {
                quit();
            }
            cin.ignore();
        }
        else
        {
            cout << "wrong" << endl;
            cout << "Press Enter to continue......" << endl;
            cin.ignore();
            wrongAnswer++;
        }

    } while (ans != "a" && ans != "b" && ans != "c" && ans != "d");

    system("clear");

    do
    {
        cout << "I am a double-edged sword, for when I cut, I also heal. What am I?" << endl;

        cout << "Options: " << endl;
        cout << "        a) Knowledge" << endl;
        cout << "        b) Love" << endl;
        cout << "        c) Paint" << endl;
        cout << "        d) Time" << endl;
        cout << "Your Option: ";
        cin >> ans;
        if (tolowercase(ans) == "d")
        {
            cout << "Extraordinary" << endl;
            cout << "You found  " << getcoins() << " coins!!!" << endl;
            cout << endl;
            cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
            cin.get(qui);
            if (tolower(qui) == 'q')
            {
                quit();
            }
            cin.ignore();
        }
        else
        {
            cout << "wrong" << endl;
            cout << endl;
            cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
            cin.get(qui);
            if (tolower(qui) == 'q')
            {
                quit();
            }
            cin.ignore();
            wrongAnswer++;
        }
    } while (ans != "a" && ans != "b" && ans != "c" && ans != "d");

    system("clear");

    do
    {
        cout << "                                     =============================" << endl;
        cout << "                                     |                           |" << endl;
        cout << "                                     |       Final Riddle        |" << endl;
        cout << "                                     |                           |" << endl;
        cout << "                                     =============================  " << endl;
        cout << endl;
        cout << endl;

        cout << "I fly without wings, I cry without eyes. Wherever I go, darkness follows me. What am I?" << endl;

        cout << "Options: " << endl;
        cout << "        a) Wind" << endl;
        cout << "        b) Cloud" << endl;
        cout << "        c) Night" << endl;
        cout << "        d) Storm" << endl;
        cout << "Your Option: ";
        cin >> ans;
        cout << " " << endl;
        if (tolowercase(ans) == "b")
        {
            cout << "You are the winner of **THE RIDDLE FIGHT** " << endl;
            cout << "You found  " << getcoins() << " coins!!!" << endl << endl;
            cout << endl;
            cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
            cin.get(qui);
            if (tolower(qui) == 'q')
            {
                quit();
            }
            cin.ignore();
            system("clear");
        }
        else
            wrongAnswer++;

    } while (ans != "a" && ans != "b" && ans != "c" && ans != "d");

    if (wrongAnswer >= 3)
    {
        cout << "You cant even answer simple riddles? you low iq noob!!!" << endl;
        cout << "Press Enter to continue......" << endl;
        cin.ignore();
        exit(0);
    }

    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();

    system("clear");
}

/*-----------------------------------------------------------------------*/



void FirstSideQuest()      // it comes before the above function

{
    string opt;






    cout << "When " << cp.name << " was entering the dark mysterious castle." << endl;
    cout << "" << cp.name << " walked towards the castle but he realised" << endl;
    cout << "he couldn't enter without solving a riddle" << endl;
    cout << "  that was displayed on the gate." << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();




    do
    {
        cout << "It said: " << endl;
        cout << "            When a door is not shut tight," << endl;
        cout << "            It's a state that feels just right." << endl;
        cout << "            What is it?" << endl;
        cout << "Options: " << endl;
        cout << "            A) Closed" << endl;
        cout << "            B) Hinged" << endl;
        cout << "            C) Open  " << endl;
        cout << "            D) Knocked " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << "Your option: ";
        cin >> opt;




        if ((tolowercase(opt)) == "c")
        {

            cout << endl;

            cout << "You found  " << getcoins() << " coins!!!" << endl << endl;


            cout << "\"The door opens with a creaking sound\"" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
            cin.get(qui);
            if (tolower(qui) == 'q')
            {
                quit();
            }
            cin.ignore();

            break;
        }



        else
        {
            cout << "Try Again..." << endl;
            /////////////////////////////////

            cin.ignore(); cin.ignore();
            system("clear");

        }
    } while (tolowercase(opt) != "c");

    system("clear");
}

void sidequest2()
{
    string answer;



    cout << "As " << cp.name << " reaches the river, his watch beeps, indicating the presence of the third" << endl;
    cout << "demon residing on an island. A bascule bridge stands before " << cp.name << ", its pathway divided." << endl;
    cout << "To cross, Jake must solve a puzzle  that controls the \nbridge mechanism." << endl;
    cout << " With determination, " << cp.name << " approaches the puzzle," << endl;
    cout << "ready to unravel its mystery and continue his journey." << endl;
    cout << "Press Enter to continue...... or Press Q to  quit......" << endl << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();

    system("clear");
    cout << "As " << cp.name << " reached the foot of the bridge, " << cp.name << " eyes fall on the word puzzle that" << endl;
    cout << "he needs to solve to get the bascule bridge to close." << endl;
    cout << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();

    do
    {
        cout << "It read 'Q..E..S..T..U.. ' \nArrange the letters in a way that it forms a word!" << endl;


        cin >> answer;

        if (tolowercase(answer) == "quest")
        {

            cout << "correct" << endl;
            cout << "You found  " << getcoins() << " coins!!!" << endl << endl;
            cout << "Press Enter to continue...... or Press Q to  quit......" << endl;
            cin.get(qui);
            if (tolower(qui) == 'q')
            {
                quit();
            }
            system("clear");

        }
        else
        {
            cout << "wrong!!" << endl;
            cout << "Press Enter to continue......" << endl;
            cin.ignore(); cin.ignore();
            system("clear");
        }


    } while (answer != "quest" && answer != "QUEST");


    cout << "The moment " << cp.name << " utters the correct word,\na subtle hum emanates from the bridge's mechanism.";
    cout << "The segmented pathway seamlessly joins,\nforming a stable walkway across the river.";
    cout << "The distant sound of water splashing against the rocks \naccompanies " << cp.name << " as he confidently strides forward.";
    cout << "" << cp.name << ": Another puzzle, another triumph. Onward to the \nisland where the second demon resides!";
    cout << "With the puzzle conquered, the bridge solidifies,\n allowing " << cp.name << " to continue his quest. ";


    cout << cp.name << " moves forward through the bridge, \nreaching the island where he spots where he spots the second demon," << endl;
    cout << "a figure shrouded in darkness and adorned with ethereal wisps." << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();

}


/*-----------------------------------------------------------------------*/
void puzzle()
{

    system("clear");

    cout << cp.name << " moves forward through the bridge, reaching the mysterious island where shadows seem to dance with an eerie rhythm." << endl;
    cout << endl << "Press Enter to continue ...." << endl;
    cin.ignore();

    cout << "As he steps onto the island, he spots the second demon, a figure shrouded in darkness." << endl;


    cout << cp.name << ": \"So, you're the one guarding this island. Where's my sister?\"" << endl;
    cout << endl << "Press Enter to continue ...." << endl;
    cin.ignore();

    cout << "Demon: \"Ah, " << cp.name << ", seeker of kin. Your sister is safe for now. But to proceed, you must prove your intellect." << endl;
    cout << "I am the master of word puzzles, and only through wit can you advance.\"" << endl;
    cout << endl << "Press Enter to continue ...." << endl;
    cin.ignore();

    cout << cp.name << ":\"Enough talk. Give me your best shot, demon.\"" << endl;
    cout << endl;
    cout << "Press Enter to continue......" << endl;
    cin.ignore(); cin.ignore();



    system("clear");

    cout << "[Puzzle Fight Starts]\n" << endl;
    cout << "(You Must Enter Correct Option! No Second Chances!!!)" << endl;



    string words[] = { "EVADENTUR", "LACMPEX", "TPRI", "VEIL", "OICNS", "TOPS" };
    string solutions[] = { "ADVENTURE", "EXAMPLE", "TRIP", "LIVE", "COINS", "STOP" };

    int correctGuesses = 0, wrongGuesses = 0;



    for (int i = 0; i <= 5; ++i)
    {
        cout << words[i] << endl;
        string userGuess;
        cout << "Your guess: ";
        cin >> userGuess;


        string lowercaseUserGuess = tolowercase(userGuess);
        string lowercaseSolution = tolowercase(solutions[i]);

        if (lowercaseUserGuess == lowercaseSolution)
        {
            cout << "Correct! Well done.\n" << endl;
            cout << "You found  " << getcoins() << " coins!!!" << endl << endl;
            correctGuesses++;
        }
        else if (lowercaseUserGuess != lowercaseSolution)
        {
            cout << "Wrong guess. Try again.\n" << endl;
            wrongGuesses++;

        }

        if (wrongGuesses >= 3)
        {
            cout << "You noob cant even spell the word right!!!, better luck next time!";
            cin.ignore();
            exit(0);
        }


    }
    cout << "[2nd PUZZLE FIGHT END]\n" << endl;


    cout << "Demon: \"You may proceed. Your sister awaits, and the challenges will only intensify." << endl;
    cout << "You deserve this egg, take it!\"" << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();

    cout << "With a nod, the demon dissipates into shadows, allowing " << cp.name << " to continue his journey," << endl;
    cout << "each step taking him closer to the ultimate confrontation with the forces that guard his sister." << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();// story before the shop

}

/*-----------------------------------------------------------------------*/
void gotoshop()
{
    system("clear");
    cout << "As " << cp.name << " journeys through the ever-changing landscapes, " << endl;
    cout << cp.name << " finds a moment of respite, sitting by the edge of a massive, ancient tree." << endl;
    cout << "The air is filled with a mystical aura when the mysterious figure enters," << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();
    cout << "silently appearing amidst the dappled sunlight." << endl;
    cout << "Mysterious Figure:" << cp.name << ", seeker of kin, your quest leads you through realms untold." << endl;
    cout << "Trials await, but fear not, for within you lies the strength to unravel these mysteries. " << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();
    cout << cp.name << ": Tell me, what must I face?" << endl;
    cout << "Mysterious Figure, Beyond the horizon, illusions and truths entwine. " << endl;
    cout << "Embrace the challenges; they are stepping stones toward the reunion you seek." << endl;

    cout << "With a gesture, the mysterious figure conjures a radiant apple and offers it to " << cp.name << "." << endl;
    cout << "Press Enter to continue...... or Press Q to  quit......" << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();
    system("clear");
    cout << "Mysterious Figure: Take this. Nourishment for your journey." << endl;
    cout << " Let the strength of the fruit mirror the resilience within your spirit." << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();
    cout << "With the gift of the mystical apple, " << cp.name << " feels a surge of energy and determination." << endl;
    cout << "The mysterious figure fades into the shadows, leaving " << cp.name << " fortified and ready to" << endl;
    cout << "face the trials that lie ahead." << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();
    cout << "As " << cp.name << " rests beneath the shade of an ancient tree, a mysterious figure emerges," << endl;
    cout << "carrying a satchel of mystical potions. The stranger notices " << cp.name << " and," << endl;
    cout << "sensing the purpose in his eyes, decides to share the secrets of his elixirs." << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();
    cout << "Mysterious Figure:               Greetings, adventurer. I sense a great journey ahead for you. In my possession," << endl;
    cout << "                                 I have potions that can aid you on your quest. Potions to boost your experience, strength, and speed." << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();

    cout << cp.name << ":              How do you know what I need?" << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();

    cout << "Mysterious Figure:         The shadows whisper tales, and your determination echoes through the realms." << endl;
    cout << "                           If you're prepared to invest some coins, these potions can be yours." << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();
    cout << cp.name << ":               What do you have?" << endl;
    cin.ignore();

    cout << "Mysterious Figure:         Here's what I offer: Potion of Wisdom " << endl;
    cin.ignore();
    system("clear");
    // text before entering the shop
    myshop.loadshop(cp);
}
/****************************************************************************************************8*/
void beforefight1() //after shop code
{
    cout << "     After visiting the shop, " << cp.name << " proceeds to move forward on his journey. " << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();
    cout << "" << cp.name << " moves ahead towards the town of darkness. full of thorns and dead trees. " << endl;
    cout << "It was as if this town was cursed by the demons. Suddenly he hears a growl from behind the huts " << endl;
    cout << cp.name << " moves forward, from where he hears the sound. Suddenly a demon appears in front of " << cp.name << ". " << endl;
    cout << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();





}  //before first fight code


/****************************************************************************************************8*/
void combat(string name, int power, int health)
{
    string input;
    string n = "";
    int p = 0;
    int h = 0;

    n = name;
    p = power;
    h = health;



    while (health > 0)
    {
        system("clear");
        cout << name << endl;
        cout << "Power: " << power << " / " << "Health: " << health << endl;
        cout << "=======================" << endl;
        cout << "| (A)ttack  (D)efend  |" << endl;
        cout << "| (R)un     (H)eal    |" << endl;
        cout << "=======================" << endl;
        cout << " Potions: " << cp.potion << "  Health: " << cp.health << endl;
        getline(cin, input);
        if (tolowercase(input) == "a" || tolowercase(input) == "attack")
        {
            //attack
            int damage = power - cp.armorvalue;

            if (damage < 0)
                damage = 0;

            srand(time(0));
            int attack = (1 + rand() % cp.weaponvalue) + (1 + rand() % 4);

            cout << "With haste " << cp.name << " surge forth, " << cp.name << " sword flying in his hands! As " << cp.name << " pass, the " << n << endl;
            cout << "strikes " << cp.name << " as he pass " << endl;
            cout << "" << cp.name << " lose " << damage << " health and deal " << attack << " damage " << endl;
            cp.health -= damage;

            health -= attack;


        }
        else if (tolowercase(input) == "d" || tolowercase(input) == "defend")
        {
            //defend
            int damage = (power / 4) - cp.armorvalue;

            if (damage < 0)
                damage = 0;

            srand(time(0));
            int attack = (1 + rand() % cp.weaponvalue) / 2;

            cout << "As the " << n << " prepares to strike, " << cp.name << " ready his sword in a defensive stance";
            cout << "strikes " << cp.name << " as " << cp.name << " passes " << endl;
            cout << cp.name << " lose " << damage << " health and deal " << attack << " damage " << endl;
            cp.health -= damage;
            health -= attack;
        }
        else if (tolowercase(input) == "r" || tolowercase(input) == "run")
        {
            //run
            srand(time(0));
            if ((rand() % 2) == 0)
            {
                cout << "As " << cp.name << " sprint away from the " << n << ",it strikes catches " << cp.name << " from the back,  " << endl;
                cout << "sending " << cp.name << " sprawling onto the ground. " << endl;
                int damage = p - cp.armorvalue;

                if (damage < 0)
                    damage = 0;

                cout << cp.name << "lose " << damage << " Health and are unable to escape" << endl;
                cout << "Press Enter to continue......" << endl;
                cin.ignore();

            }
            else
            {
                cout << cp.name << " uses crazy ninja moves to evade the " << n << " and " << cp.name << " successfully escaped.  " << endl;
                cout << "Press Enter to continue......" << endl;
                cin.ignore();
                // go to store
                myshop.loadshop(cp);



            }


        }

        else if (tolowercase(input) == "h" || tolowercase(input) == "heal")
        {
            //heal

            if (cp.potion == 0)
            {
                cout << "As " << cp.name << " desperatly grasp for a portion in bag, all that " << cp.name << " " << endl;
                cout << "feel are empty glass flasks.  " << endl;
                int damage = power - cp.armorvalue;
                if (damage < 0)
                    damage = 0;

                cp.health -= damage;

                cout << "The " << name << "  strikes " << cp.name << " with a mighty blow and " << cp.name << " lose " << damage << " health" << endl;

            }
            else
            {
                cout << cp.name << " reached  bag and pulled out a purple flask. " << endl;
                cout << "and takes a long drink! " << endl;
                int potionvalue = 3;
                cout << "" << cp.name << " gained " << potionvalue << " health. " << endl;
                cp.health += potionvalue;
                cp.potion--;

                cout << "as " << cp.name << " were occupied, the " << n << " advanced and struck." << endl;
                int damage = (power / 2 - cp.armorvalue);

                if (damage < 0)
                    damage = 0;

                cout << "" << cp.name << " lose " << damage << " Health." << endl;

            }
            cout << "Press Enter to continue......" << endl;
            cin.ignore();
        }

        if (cp.health <= 0)
        {
            //death code
            cout << "As the " << name << " stands tall and comes down to strike, " << cp.name << " have been slayed by the mighty " << name << endl;
            cout << "Thanks for playing, better luck next time" << endl;
            cout << "Press Enter to continue......" << endl;
            cin.ignore();
            exit(0);
        }
        cout << "Press Enter to continue......" << endl;
        cin.ignore();

    }

    srand(time(0));
    int c = rand() % 50 + 10;
    cout << "As " << cp.name << " stand victorius over the " << name << " it's body dissolve into  " << getcoins() << " Gold coins!" << endl;
    cout << "Press Enter to continue......" << endl;
    cin.ignore();




}

void afterfight1()
{
    cout << "Jake moves forward, leaving the defeated demon, on his way to get his sister back. " << endl;
    cout << "He moves forward, through day and night, crossing hills and rivers " << endl;
    cout << "and feeding on whatever he can find on his way. His watch finally beeped after 7 days and 20 hours," << endl;
    cout << "alerting player of the boss demon near him. " << endl;
    cout << "Press Enter twice to continue...... or Press Q to  quit......" << endl;
    cin.get(qui);
    if (tolower(qui) == 'q')
    {
        quit();
    }
    cin.ignore();
}
void afterfight2()
{
     cout << "At last, Jake won and fell to the ground when his sister came running towards him." << endl;
    cout << "She held his face up and placed him in his lap." << endl;
    cout <<"Tears rolled down her cheeks as she kept murmuring her brother's name" << endl;
    cout <<"to keep him conscious. He gets up and hugs his sister and they head back towards their village."<< endl;
    cout <<"                                 The End." <<endl;
    cin.ignore();
}
