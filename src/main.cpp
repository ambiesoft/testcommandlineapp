#include <iostream>
#include <string>



#include "../../lsMisc/CommandLineParser.h"

using namespace Ambiesoft;
using namespace std;

const char* gLine = "This is a testcommandlineapp";

int main()
{
    CCommandLineParser parser;

    bool bLongOutput = false;
    parser.AddOption(L"-L", 0, &bLongOutput);

    bool bPause = false;
    parser.AddOption(L"-p", 0, &bPause);

    bool bInteractive=false;
    parser.AddOption(L"-i", 0, &bInteractive);

    parser.Parse();

    if(bLongOutput)
    {
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
        cout << gLine << endl;
    }
    else
    {
        cout << gLine << endl;
    }

    if(bPause)
    {
        cout << "Hit any key to quit...";
        _getwch();
    }

    if(bInteractive)
    {
        for(;;)
        {
            if(!cin)
                break;

            cout << "> " ;
            string command ;

            cin >> command;

            if(!cin)
                break;
            if(command=="exit")
                break;

            cout << "You entered '" << command << "'" << " (Enter 'exit' to exit)";
        }



    }
    return 0;
}
