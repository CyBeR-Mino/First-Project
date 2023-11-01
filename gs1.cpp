#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>

char end;
char &again = end;
std::string namebase;
std::vector<std::string> elemetalpower;
std::string power;
std::vector<std::string> Inventory;
std::string item;
void nameX(std::string name) {
    char sure = 'n';

    while (sure != 'y') {
        std::cout << "What do you want your " << name << " to be?\n";
        std::cin >> namebase;
        std::cout << "Are you sure your character's name should be \"" << namebase << "\"?\n" << "y/n: ";
        std::cin >> sure;
    }
}
void relation_c(int point = 0) {
point++;
}
std::string charbase;

void option2(std::string op) {
    std::cout << "Since you ignored the main event of your travel companion, you end up feeling lonely and decide to halt your journey.\n";
    std::cout << "Game Over!\n";
    std::cout << "Your journey will soon restart.\n";

};

void loadingAnimation(int duration) {
    const int ticksPerSecond = CLOCKS_PER_SEC;
    const int waitTimeInSeconds = 1; // Adjust this value to control the animation speed

    for (int i = 0; i < duration; ++i) {
        std::cout << ".";
        std::cout.flush();

        clock_t startTime = clock();
        while ((clock() - startTime) / ticksPerSecond < waitTimeInSeconds) {
            // Waiting...
        }
    }
}

int main() {
    again = 'y';

    while (again == 'y') {
        
        std::cout << "Welcome to TERVAT, a world full of magic and adventure!\n";
        std::cout << "You and your sister have been traveling across multiple universes,\n";
        std::cout << "but a mysterious event separates you two, leaving you alone in this mystical realm.\n";
        std::cout << "Your journey to find your missing sibling begins now!\n\n";

        nameX("character name");
        std::cout << "\nExcellent! Your character's name is \"" << namebase << "\".\n";
        std::cout << "Prepare yourself, " << namebase << ", for an extraordinary adventure!\n";

        loadingAnimation(3);

        std::cout << "As you traverse a path alongside a shimmering lake, you hear a faint, desperate cry for help!\n";
        std::cout << "What will you do?\n";
        std::cout << "1. Rush to the source of the voice to investigate.\n";
        std::cout << "2. Decide it's best to mind your own business and continue your journey.\n";
        std::cout << "Enter the number of your choice: ";
        int option;
        std::cin >> option;
        loadingAnimation(2);

        if (option == 2) {
            option2(namebase);
            loadingAnimation(5);
            again = 'y';
        }
        else if (option == 1) {
            std::cout << "\nYou rush towards the voice and find a small, silver fairy struggling to stay afloat in the lake!\n";
            std::cout << "Without hesitation, you dive into the water and rescue the fairy from its plight.\n";
            std::cout << "Grateful and tearful, the fairy introduces herself as Paimon, but she seems to have lost her memories.\n";
            std::cout << "What will you do?\n";
            std::cout << "1. Comfort Paimon and try to learn more about her past.\n";
            std::cout << "2. Decide to continue your journey alone, leaving Paimon by the campfire.\n";
            std::cout << "Enter the number of your choice: ";
            int option1;
            std::cin >> option1;
            if (option1 == 2) {
                  option2(namebase);
            loadingAnimation(5);
            again = 'y';

            }

            else if (option1 == 1) {
                loadingAnimation(3);
                std::cout << "\nYou spend time talking with Paimon, who tells you she's not from this world.\n";
                std::cout << "She's a magical being with extraordinary powers, just like you!\n";
                std::cout << "After a heartfelt conversation, she finally reveals her name - Paimon.\n";
                std::cout << "To show her gratitude, Paimon presents you with a glowing cube adorned with intricate patterns.\n";
                std::cout << "As you touch the cube, a brilliant light envelops you, and an ancient and elegant lady appears before you.\n";
                std::cout << "She offers you four distinct choices of elemental powers:\n"; 
                loadingAnimation(1);              
                std::cout << " Pyro - Harness the power of fire to scorch your enemies.\n";
                loadingAnimation(1);
                std::cout << " Aqua - Control the flow of water and command the seas.\n";
                loadingAnimation(1);
                std::cout << " Geo - Manipulate the earth and harness the forces of nature.\n";
                loadingAnimation(1);
                std::cout << " Anemo - Control the wind and soar through the skies.\n";
                loadingAnimation(1);
                char pow = 'n';
                while(pow == 'n') {
                std::cout << "Which elemental power do you choose, " << namebase << "? Enter the element name: ";
                std::cin >> power;
                std::transform(power.begin(), power.end(), power.begin(), ::tolower);
                std::cout << "\nAre you certain you want your elemental power to be " << power << "?\n";
                std::cout << "y/n: \n";
                std::cin >> pow;
                if(pow == 'y') {
                    elemetalpower.push_back(power);
                    
                }
                std::cout << "U have unlock a new system called inventory!\n";
                std::cout << "U can now kepp item in ur bag\n";
                continue;
                }
                std::cout << "Paimon said that  inorder to use your power u have go to city called monstalt existing on the north side of the tayvat\n ";
                std::cout << "Do u wanna start the adventure?\n" << "y/n:";
                char option2 = 'n';
                std::cin >> option2;
                 while (option2 == 'a') {
                if (option2 == 'n') {
                std::cout << "Nah U can said no,Paimon would cry out loud and u would feel guilty\n";
                option2 == 'a';
               }
               else if (option2 == 'y'  ) {
                  std::cout << "U ARE NOW TELEPORTING TO MONSTALT.";
                loadingAnimation(5);
                std::cout << "\n";
                std::cout << "Welcome to Monstalt, a bustling metropolis with a blend of ancient elegance and modern innovation. Enchanting music fills the air as diverse beings mingle in colorful marketplaces. Explore the Great Library, seek wisdom, and join elemental guilds. But beware, darkness lurks as malevolent forces plot to disrupt the realms. Your chosen elemental power will be tested as you uncover secrets and prepare for an epic showdown that will shape TERVAT's destiny.\n";
                continue;
               }
            }
            std::cout << "As U step into city,\n";
            std::cout << "Amidst the crowd, a young local girl caught the traveler's eye. She had a radiant smile that lit up the world around her. As if drawn by an invisible force, she approached the traveler, holding a simple dandelion flower in her hand\n";

            std::cout << "Welcome to Monstalt, the girl said, her voice as melodious as a songbird. This is a gift for you, a symbol of friendship and warmth.\n";
            int option3;
            option3 = 3;
            std::cout << "1. U decline the gift as u don't know about city\n";
            std::cout << "2. U accept the gift and give her a friendly-smile\n";
            std::cout << "what ur choice 1 or 2? :";
            std::cin >> option3;
             
                if (option3 == 1 ) {
                 std::cout << "The girl give u the most watery look with sadness and run away\n" << "RESEULT: " << "Local doesn't feel welcome to U\n";
                } 
                else if (option3 == 2) {
                    std::string dendelion = "Dendelion";
                    Inventory.push_back(dendelion);
                std::cout << "U got (" << Inventory[0] << ") in your bag!\n";
                 relation_c(0);
                
                continue;
                
                }
                

        }

        }

    }

    return 0;
}

    

