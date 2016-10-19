// Normandy in C++
// a text driven walkthrough of the SS Normandy from Mass Effect
// intended soley for educational purposes

#include <cstdlib>
#include <iostream>

using namespace std;

/* laying out the parts of the ship */
/* the turbo lift will connect all levels */
int TurboLift();

/* level one */
int ssCaptQTRS();

/* level two */
int ssBridge(), ssAirLock(), ssCIC();
int ssTechLab(), ssArmory(), ssFoyerBR();
int ssBriefingRoom();

/* level three */
int ssGunBattery(), ssMedBay(), ssCompCore();
int ssMessHall(), ssFirstQTRS();
int ssWomensRR(), ssMensRR();
int ssStarBrdOBS(), ssPortOBS();
int ssCrewDeck(), ssCrewQTRS(), ssLifeSupport();

/* level four */
int ssEngDeck(), ssEngSB(), ssEngBow(), ssEngPR();
int ssStairsESB(), ssStairsEPR();
int ssCargoSB(), ssCargoPR();

/* a way to exit the ship */
void fnExitShip();


/* engineering sublevel */
/* can only be reached by the stairs */
int ssEngSub();

/* generic part for replication */
/* int ssPart(); */

/* main to tie everything together */
int main(int argc, char *argv[])
{
	cout << "Welcome Aboard!" << endl;
	ssAirLock();
	cout << "\n";
	
	return EXIT_SUCCESS;
}


int TurboLift()
{
    int input;

    cout <<"\n";
    cout <<"You're in the Turbo Lift.\n";
    cout <<"=========================\n";
    cout <<"1. Level One - Captain's Quarters\n";
    cout <<"2. Level Two - CIC\n";
    cout <<"3. Level Three - Crew Deck\n";
    cout <<"4. Level Four - Engineering\n";
    cout <<"-------------------------\n";
    cout <<"Selection: ";

    cin >>input;

    switch (input) {
        case 1:
            ssCaptQTRS();
            break;
        case 2:
            ssCIC();
            break;
        case 3:
            ssCrewDeck();
            break;
        case 4:
            ssEngDeck();
            break;
        default:
            cout <<"INVALID SELECTION\n";
            break;
    }

    return 0;
}



int ssCaptQTRS()
{
    int input;

    cout <<"\n";
    cout << "You're in the Captain's Quarters.\n";
    cout <<"=========================\n";
    cout <<"1. Turbo Lift\n";
    cout <<"-------------------------\n";
    cout <<"Selection: ";

    cin >>input;

    switch (input) {
        case 1:
            TurboLift();
            break;
        default:
            cout <<"INVALID SELECTION\n";
            break;
    }

    return 0;
}



 int ssBridge()
 {
    int input;

    cout <<"\n";
    cout <<"You're on the Bridge.\n";
    cout <<"=========================\n";
    cout <<"1. CIC\n";
    cout <<"2. Air Lock\n";
    cout <<"-------------------------\n";
    cout <<"Selection: ";

    cin >>input;

    switch (input) {
        case 1:
            ssCIC();
            break;
        case 2:
            ssAirLock();
            break;
        default:
            cout <<"INVALID SELECTION\n";
            break;
    }

    return 0;
 }



 int ssCIC()
 {
    int input;

    cout <<"\n";
    cout <<"You're in CIC.\n";
    cout <<"=========================\n";
    cout <<"1. Bridge\n";
    cout <<"2. Tech Lab\n";
    cout <<"3. Turbo Lift\n";
    cout <<"4. Armory\n";
    cout <<"-------------------------\n";
    cout <<"Selection: ";

    cin >>input;

    switch (input) {
        case 1:
            ssBridge();
            break;
        case 2:
            ssTechLab();
            break;
        case 3:
            TurboLift();
            break;
        case 4:
            ssArmory();
            break;
        default:
            cout <<"INVALID SELECTION\n";
            break;
    }

    return 0;
 }


 int ssAirLock()
 {
    int input;

    cout <<"\n";
    cout <<"You're in the AirLock." << endl;
    cout <<"=========================\n";
    cout <<"1. Bridge\n";
    cout <<"2. Exit the ship\n";
    cout <<"-------------------------\n";
    cout <<"Selection: ";

    cin >>input;

    switch (input) {
        case 1:
            ssBridge();
            break;
        case 2:
            atexit(fnExitShip);
            break;
        default:
            cout <<"INVALID SELECTION\n";
            break;
    }

    return 0;
 }


void fnExitShip(void)
{
    cout <<"Exiting the ship -- Goodbye!\n";
}


 int ssTechLab()
 {
    int input;

    cout <<"\n";
    cout <<"You're in the Tech Lab." << endl;
    cout <<"=========================\n";
    cout <<"1. CIC\n";
    cout <<"2. Armory - Briefing Room Foyer\n";
    cout <<"-------------------------\n";
    cout <<"Selection: ";

    cin >>input;

    switch (input) {
        case 1:
            ssCIC();
            break;
        case 2:
            ssFoyerBR();
            break;
        default:
            cout <<"INVALID SELECTION\n";
            break;
    }

    return 0;
 }


 int ssArmory()
 {
    int input;

    cout <<"\n";
    cout << "You're in the Armory." << endl;
    cout <<"=========================\n";
    cout <<"1. CIC\n";
    cout <<"2. Tech Lab - Briefing Room Foyer\n";
    cout <<"-------------------------\n";
    cout <<"Selection: ";

    cin >>input;

    switch (input) {
        case 1:
            ssCIC();
            break;
        case 2:
            ssFoyerBR();
            break;
        default:
            cout <<"INVALID SELECTION\n";
            break;
    }

    return 0;
 }


 int ssFoyerBR()
 {
    int input;

    cout <<"\n";
    cout <<"You're in the Foyer just outside the Briefing Room." << endl;
    cout <<"=========================\n";
    cout <<"1. Tech Lab\n";
    cout <<"2. Briefing Room\n";
    cout <<"3. Armory\n";
    cout <<"-------------------------\n";
    cout <<"Selection: ";
    cin >>input;

    switch (input) {
        case 1:
            ssTechLab();
            break;
        case 2:
            ssBriefingRoom();
            break;
        case 3:
            ssArmory();
            break;
        default:
            cout <<"INVALID SELECTION\n";
            break;
    }

    return 0;
 }


 int ssBriefingRoom()
 {
    int input;

    cout <<"\n";
    cout << "You're in the Briefing Room.\n";
    cout <<"=========================\n";
    cout <<"1. Tech Lab - Armory Foyer\n";
    cout <<"-------------------------\n";
    cout <<"Selection: ";

    cin >>input;

    switch (input) {
        case 1:
            ssFoyerBR();
            break;
        default:
            cout <<"INVALID SELECTION\n";
            break;
    }

    return 0;
 }


 int ssCrewDeck()
 {
    int input;

	cout <<"\n";
    cout << "You're on the Crew Deck.\n";
    cout <<"=========================\n";
    cout <<"1. Turbo Lift\n";
    cout <<"(the rest of this deck is under construction)\n";
    cout <<"-------------------------\n";
    cout <<"Selection: ";

    cin >>input;

    switch (input) {
        case 1:
            TurboLift();
            break;
        default:
            cout <<"INVALID SELECTION\n";
            break;
    }

    return 0;
 }


  int ssEngDeck()
 {
    int input;

    cout <<"\n";
    cout << "You're on the Engineering Deck.\n";
    cout <<"=========================\n";
    cout <<"1. Turbo Lift\n";
    cout <<"(the rest of this deck is under construction)\n";
    cout <<"-------------------------\n";
    cout <<"Selection: ";

    cin >>input;

    switch (input) {
        case 1:
            TurboLift();
            break;
        default:
            cout <<"INVALID SELECTION\n";
            break;
    }

    return 0;
 }


 /* generic part for replication */
 /* naming convention note: ss for space ship */
 /*
 int ssPart()
 {
    cout << "You're on the Part." << endl;
    return 0;
 }
 */
