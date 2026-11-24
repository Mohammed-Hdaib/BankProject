#include <iostream>
#include "clsMainScreen.h"
#include "clsUser.h"
#include "clsLoginScreen.h"

int main()

{
    while (!clsLoginScreen::ShowLoginScreen())
    {
        break;
    }

    return 0;
}