#include <iostream>
#include <string>



#include "../../lsMisc/CommandLineParser.h"

using namespace Ambiesoft;
using namespace std;

const char gLine[] = "This is a testcommandlineapp";

int main()
{
    CCommandLineParser parser;

    bool bLongOutput = false;
    parser.AddOption(L"-L", 0, &bLongOutput);

    bool bPause = false;
    parser.AddOption(L"-p", 0, &bPause);

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
    return 0;
}
