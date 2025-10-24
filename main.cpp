#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Team Members: Juelle Caldwell, Xander Mills, Richard Benji Priela
int main()
{

    cout << "Please choose crust option:\n"
         << "1. Regular crust\n"
         << "2. Gluten-free crust\n";
    int crustPick;
    cin >> crustPick;
    string crust;
    switch (crustPick)
    {
    case 1:
        crust = "Regular crust";
        break;
    case 2:
        crust = "Gluten-free crust";
        break;
    default:
        crust = "Invalid option selected";
        break;
    }
    cout << "You have selected: " << crust << "\n";

    cout << "Please choose one sauce option:\n"
         << "1. red sauce\n"
         << "2. no red sauce\n";
    int saucePick;
    cin >> saucePick;
    string sauce = (saucePick == 1) ? "red sauce" : (saucePick == 2) ? "no red sauce"
                                                                     : "Invalid option selected";
    cout << "You have selected: " << sauce << "\n";

    cout << "Please choose one amount:\n"
         << "1. 1/4 cup\n"
         << "2. 1/2 cup\n";
    int amountPick;
    cin >> amountPick;
    string amount = (amountPick == 1) ? "1/4 cup" : (amountPick == 2) ? "1/2 cup"
                                                                      : "Invalid option selected";
    cout << "You chose: " << amount << "\n";

    vector<string> ingredients;

    cout << "Please choose one ingredient option:\n"
         << "1. pizza cheese\n"
         << "2. diced onion\n"
         << "3. diced green pepper\n"
         << "4. pepperoni\n"
         << "5. sliced mushroom\n"
         << "6. diced jalapeno\n"
         << "7. sardines\n"
         << "8. pineapple chunks\n"
         << "9. tofu\n"
         << "10. ham chunks\n"
         << "11. dry red pepper\n"
         << "12. dry basil\n";
    int pick;
    cin >> pick;
    bool picked = false;

    switch (pick)
    {
    case 1:
        ingredients.push_back("pizza cheese");
        picked = true;
        break;
    case 2:
        ingredients.push_back("diced onion");
        picked = true;
        break;
    case 3:
        ingredients.push_back("diced green pepper");
        picked = true;
        break;
    case 4:
        ingredients.push_back("pepperoni");
        picked = true;
        break;
    case 5:
        ingredients.push_back("sliced mushroom");
        picked = true;
        break;
    case 6:
        ingredients.push_back("diced jalapeno");
        picked = true;
        break;
    case 7:
        ingredients.push_back("sardines");
        picked = true;
        break;
    case 8:
        ingredients.push_back("pineapple chunks");
        picked = true;
        break;
    case 9:
        ingredients.push_back("tofu");
        picked = true;
        break;
    case 10:
        ingredients.push_back("ham chunks");
        picked = true;
        break;
    case 11:
        ingredients.push_back("dry red pepper");
        picked = true;
        break;
    case 12:
        ingredients.push_back("dry basil");
        picked = true;
        break;
    default:
        cout << "Invalid option.\n";
    }

    if (picked)
    {
        cout << "Enter an amount:\n"
             << "1. 2 pieces\n2. 4 pieces\n3. 6 pieces\n4. 8 pieces\n";
        int ingAmount;
        cin >> ingAmount;
        string ingAmountStr;
        switch (ingAmount)
        {
        case 1:
            ingAmountStr = "2 pieces";
            break;
        case 2:
            ingAmountStr = "4 pieces";
            break;
        case 3:
            ingAmountStr = "6 pieces";
            break;
        case 4:
            ingAmountStr = "8 pieces";
            break;
        default:
            ingAmountStr = "Invalid option selected";
            break;
        }
        cout << "You have selected: " << ingAmountStr
             << " of " << ingredients.back() << '\n';
    }
    else
    {
        cout << "No valid ingredient selected.\n";
    }

    char more = 'y';

    while (more == 'y' || more == 'Y')
    {
        cout << "Would you like to add more ingredients? (y/n): ";
        cout << "(y) Continue" << endl;
        cout << "(n) Finished" << endl;

        cin >> more;

        if (more == 'y' || more == 'Y')
        {
            cout << "Please choose one ingredient option: " << endl;

            cout << "1. pizza cheese\n";
            cout << "2. diced onion\n";
            cout << "3. diced green pepper\n";
            cout << "4. pepperoni\n";
            cout << "5. sliced mushroom\n";
            cout << "6. diced jalapeno\n";
            cout << "7. sardines\n";
            cout << "8. pineapple chunks\n";
            cout << "9. tofu\n";
            cout << "10. ham chunks\n";
            cout << "11. dry red pepper\n";
            cout << "12. dry basil\n";

            cin >> pick;
            switch (pick)
            {
            case 1:
                ingredients.push_back("pizza cheese");
                break;
            case 2:
                ingredients.push_back("diced onion");
                break;
            case 3:
                ingredients.push_back("diced green pepper");
                break;
            case 4:
                ingredients.push_back("pepperoni");
                break;
            case 5:
                ingredients.push_back("sliced mushroom");
                break;
            case 6:
                ingredients.push_back("diced jalapeno");
                break;
            case 7:
                ingredients.push_back("sardines");
                break;
            case 8:
                ingredients.push_back("pineapple chunks");
                break;
            case 9:
                ingredients.push_back("tofu");
                break;
            case 10:
                ingredients.push_back("ham chunks");
                break;
            case 11:
                ingredients.push_back("dry red pepper");
                break;
            case 12:
                ingredients.push_back("dry basil");
                break;
            default:
                cout << "Invalid option.\n";
            }

            cout << "Please choose one amount\n";
            cout << "1. generous sprinkle\n";
            cout << "2. generous sprinkles\n";
            vector<string> sprinkleAmount;

            cin >> amountPick;
            switch (amountPick)
            {
            case 1:
                sprinkleAmount.push_back("generous sprinkle");
                break;
            case 2:
                sprinkleAmount.push_back("generous sprinkles");
                break;
            default:
                cout << "Invalid option selected" << endl;
                break;
            }
            cout << "You have selected: " << sprinkleAmount.back() << " of " << ingredients.back() << endl;
        }
    }
    cout << "Your pizza recipe:\n";
    cout << "- " << crust << "\n";
    cout << "- " << sauce << " (" << amount << ")\n";
    for (const auto &ingredient : ingredients)
    {
        cout << "- " << ingredient << "\n";
    }

    return 0;
}