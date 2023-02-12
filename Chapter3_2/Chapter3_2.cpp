#include <iostream>
#include <stdio.h>

using namespace std;

enum OptionTypes {
    EUROPEAN,
    AMERICAN,
    BERMUDAN,
    ASIAN,
};

enum Football {
    QUARTERBACK,
    CENTER,
    TIGHT_END,
    WIDE_RECEIVER,
    RUNNING_BACK
};


enum Baseball {
    PITCHER,
    CATCHER,
    FIRST_BASEMAN,
    SECOND_BASEMAN,
    THIRD_BASEMAN
};


enum Football_new {
    QUARTERBACK_n = 1,
    CENTER_n,
    TIGHT_END_n,
    WIDE_RECEIVER_n,
    RUNNING_BACK_n
};

enum Baseball_new {
    PITCHER_n = 6,
    CATCHER_n,
    FIRST_BASEMAN_n,
    SECOND_BASEMAN_n,
    THIRD_BASEMAN_n
};


enum class n_FOOTBALL {
    n_QUARTERBACK, n_CENTER, n_TIGHT_END, n_WIDE_RECEIVER, n_RUNNING_BACK
};

enum class n_BASEBALL {
    n_PITCHER, n_CATCHER, n_FIRST_BASEMAN, n_SECOND_BASEMAN, n_THIRD_BASEMAN
};



int main()
{
    cout << "EUROPEAN = " << EUROPEAN << endl;
    cout << "AMERICAN = " << AMERICAN << endl;
    cout << "BERMUDAN = " << BERMUDAN << endl;
    cout << "ASIAN = " << ASIAN << endl;

    cout << endl;

    OptionTypes ot;
    ot = AMERICAN;


    if (ot == EUROPEAN) {
        cout << "EUROPEAN: Use Black-Scholes" << endl;
    }
    else if (ot == AMERICAN) {
        cout << "AMERICAN: Use a lattice model" << endl;
    }
    else if (ot == BERMUDAN) {
        cout << "BERMUDAN: Use a Longstaff-Schwartz LSMC" << endl;
    }
    else if (ot == ASIAN) {
        cout << "ASIAN: Calculate average of returns time series" << endl;
    }
    else {
        cout << "The SEC wants to talk with you" << endl;
    }


    ot = EUROPEAN;
    switch (ot) {
    case EUROPEAN:
        cout << "EUROPEAN: Use Black-Scholes" << endl;
        break;
    case AMERICAN:
        cout << "AMERICAN: Use a lattice model" << endl;
        break;
    case BERMUDAN:
        cout << "BERMUDAN: Use a Longstaff-Schwartz LSMC" << endl;
        break;
    case ASIAN:
        cout << "ASIAN: Calculate average of returns time series" << endl;
        break;
    default:
        cout << "The SEC wants to talk with you" << endl;
        break;

    }


    Football fb = TIGHT_END;
    Baseball bb = FIRST_BASEMAN;

    if (TIGHT_END == FIRST_BASEMAN) {
        cout << "TIGHT_END == FIRST_BASEMAN is true" << endl;
    }



    Football_new n_fb = TIGHT_END_n;
    Baseball_new n_bb = FIRST_BASEMAN_n;

    if (TIGHT_END_n == FIRST_BASEMAN_n) {
        cout << "TIGHT_END_n == FIRST_BASEMAN_n is true" << endl;
    }
    else {
        cout << "TIGHT_END = " << TIGHT_END_n << endl;
        cout << "FIRST_BASEMAN = " << FIRST_BASEMAN_n << endl;
    }



    // This won't compile as the operator '==' is only defined for same types 
     //   if (n_FOOTBALL::n_TIGHT_END == n_BASEBALL::n_FIRST_BASEMAN) {
     //       cout << "TIGHT_END_n == FIRST_BASEMAN_n is true" << endl;
     //   }

    Baseball p = PITCHER;
    n_FOOTBALL qb = n_FOOTBALL::n_QUARTERBACK;
    string qbStr = "QUARTERBACK";

    cout << "size of enum bb = " << sizeof(p) << endl;
    cout << "size of class enum qb = " << sizeof(qb) << endl;
    cout << "size of qbStr = " << sizeof(qbStr) << endl;

    return 0;


    enum class n_FOOTBALL {
        n_QUARTERBACK, n_CENTER, n_TIGHT_END, n_WIDE_RECEIVER, n_RUNNING_BACK
    };

    enum class n_BASEBALL {
        n_PITCHER, n_CATCHER, n_FIRST_BASEMAN, n_SECOND_BASEMAN, n_THIRD_BASEMAN
    };

// This won't compile as the operator '==' is only defined for same types 
 //   if (n_FOOTBALL::n_TIGHT_END == n_BASEBALL::n_FIRST_BASEMAN) {
 //       cout << "TIGHT_END_n == FIRST_BASEMAN_n is true" << endl;
 //   }

    Baseball p = PITCHER;
    n_FOOTBALL qb = n_FOOTBALL::n_QUARTERBACK;
    string qbStr = "QUARTERBACK";

    cout << "size of enum bb = " << sizeof(p) << endl;
    cout << "size of class enum qb = " << sizeof(qb) << endl;
    cout << "size of qbStr = " << sizeof(qbStr) << endl;

}
