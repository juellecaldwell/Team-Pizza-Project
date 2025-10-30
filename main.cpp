#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <utility>
using namespace std;

// Team Members: Juelle Caldwell, Xander Mills, Richard Benji Priela
int main()
{
    const int limit = 8;
    unordered_set<string> unordered_ingredientSet;
    vector<string> distinctIngredients;
    unordered_set<string> seenOut;
    const vector<vector<string>> measureOptions = {
        {"", ""},
        {"1/2 cup", "1/4 cup"},                           // 1. pizza cheese
        {"1/2 cup", "1/4 cup"},                           // 2. diced onion
        {"1/2 cup", "1/4 cup"},                           // 3. diced green pepper
        {"2 pieces", "3 pieces", "6 pieces", "8 pieces"}, // 4. pepperoni
        {"1/2 cup", "1/4 cup"},                           // 5. sliced mushroom
        {"1/2 cup", "1/4 cup"},                           // 6. diced jalapeno
        {"2 pieces", "3 pieces", "6 pieces", "8 pieces"}, // 7. sardines
        {"2 pieces", "3 pieces", "6 pieces", "8 pieces"}, // 8. pineapple chunks
        {"1/2 cup", "1/4 cup"},                           // 9. tofu
        {"2 pieces", "3 pieces", "6 pieces", "8 pieces"}, // 10. ham chunks
        {"sprinkle", "generous sprinkle"},                // 11. dry red pepper
        {"sprinkle", "generous sprinkle"}                 // 12. dry basil
    };

    cout << "Please choose crust option:\n"
         << "1. Regular crust\n"
         << "2. Gluten-free crust\n";

    int crustPick;
    cin >> crustPick;
    string crust = "";
    while (crust == "")
    {
        switch (crustPick)
        {
        case 1:
            crust = "Regular crust";
            break;
        case 2:
            crust = "Gluten-free crust";
            break;
        default:
            cout << "Invalid option. Enter 1 or 2: ";
            cin >> crustPick;
            break;
        }
    }

    cout << "You have selected: " << crust << "\n";
    distinctIngredients.push_back(crust);
    unordered_ingredientSet.insert(crust);

    cout << "Please choose one sauce option:\n"
         << "1. red sauce\n"
         << "2. no red sauce\n";

    int saucePick;
    cin >> saucePick;

    string sauce = "";
    while (sauce == "")
    {
        switch (saucePick)
        {
        case 1:
            sauce = "red sauce";
            distinctIngredients.push_back("red sauce");
            unordered_ingredientSet.insert("red sauce");
            break;
        case 2:
            sauce = "no red sauce";
            unordered_ingredientSet.insert("no red sauce");
            break;
        default:
            cout << "Invalid option. Enter 1 or 2: ";
            cin >> saucePick;
            break;
        }
    }
    cout << "You have selected: " << sauce << "\n";

    cout << "Please choose one amount:\n"
         << "1. 1/4 cup\n"
         << "2. 1/2 cup\n";
    int amountPick;
    cin >> amountPick;
    while (amountPick != 1 && amountPick != 2)
    {
        cout << "Invalid option. Enter 1 or 2: ";
        cin >> amountPick;
    }
    string amount = (amountPick == 1) ? "1/4 cup" : "1/2 cup";
    cout << "You chose: " << amount << "\n";

    vector<string> ingredients;

    int pick;
    bool picked = false;

    while (!picked)
    {
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

        cin >> pick;

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
    }

    unordered_ingredientSet.insert(ingredients.back());

    while (picked)
    {
        cout << "Enter an amount:\n"
             << "1. 2 pieces\n2. 4 pieces\n3. 6 pieces\n4. 8 pieces\n";
        int ingAmount;
        cin >> ingAmount;
        while (ingAmount < 1 || ingAmount > 4)
        {
            cout << "Invalid option. Enter 1-4: ";
            cin >> ingAmount;
        }
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
        }
        cout << "You have selected: " << ingAmountStr
             << " of " << ingredients.back() << '\n';
        picked = false;
    }

    char more = 'y';

    while (more == 'y' || more == 'Y')
    {

        if (more == 'y' || more == 'Y')
        {
            cout << "Would you like to add more ingredients? (y/n): \n";
            cout << "(y) Continue\n";
            cout << "(n) Finished\n";
            cin >> more;
        }

        while (more != 'y' && more != 'Y' && more != 'n' && more != 'N')
        {
            cout << "Invalid option. Enter y or n: ";
            cin >> more;
        }
        if (more == 'n' || more == 'N')
            break;

        cout << "Please choose one ingredient option: \n"
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

        cin >> pick;
        while (pick < 1 || pick > 12)
        {
            cout << "Invalid option. Enter 1-12: ";
            cin >> pick;
        }

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
        }

        unordered_ingredientSet.insert(ingredients.back());

        if (unordered_ingredientSet.size() >= limit)
        {
            cout << "You have reached the maximum number of ingredients (" << limit << ").\n";

            more = 'n';
        }

        cout << "Please choose one amount\n"
             << "1. generous sprinkle\n"
             << "2. generous sprinkles\n";
        int sprinklePick;
        cin >> sprinklePick;
        while (sprinklePick != 1 && sprinklePick != 2)
        {
            cout << "Invalid option. Enter 1 or 2: ";
            cin >> sprinklePick;
        }
        vector<string> sprinkleAmount;
        if (sprinklePick == 1)
            sprinkleAmount.push_back("generous sprinkle");
        else
            sprinkleAmount.push_back("generous sprinkles");

        cout << "You have selected: " << sprinkleAmount.back()
             << " of " << ingredients.back() << endl;
    }

    distinctIngredients.clear();
    seenOut.insert(crust);
    distinctIngredients.push_back(crust);
    if (seenOut.insert(sauce).second)
        distinctIngredients.push_back(sauce);

    for (const auto &ing : ingredients)
    {
        if (seenOut.insert(ing).second)
        {
            distinctIngredients.push_back(ing);
            if ((int)distinctIngredients.size() >= limit)
                break;
        }
    }

    cout << "\n********************************\n";
    cout << "*      Your pizza recipe       *\n";
    cout << "********************************\n";

    for (const auto &ing : distinctIngredients)
    {
        cout << "- " << ing << "\n";
    }

    cout << "Pizza is to be appropriately cooked until crust is cooked and toppings are fully warmed.\n";

    size_t distinctCount = distinctIngredients.size();

    return 0;
}
