#include <iostream>
#include <string>
using namespace std;

class Plant
{
private:
    string name;
    int waterDays;
    int daysPassed;
    string health;

public:
    // Constructor
    Plant()
    {
        name = "";
        waterDays = 0;
        daysPassed = 0;
        health = "Good";
    }

    // Destructor
    ~Plant()
    {
        // Cleanup
    }

    // Function to add plant information
    void addPlant()
    {
        cout << "\nEnter Plant Name: ";
        getline(cin >> ws, name);

        cout << "Enter watering interval in days: ";
        cin >> waterDays;

        cout << "Enter plant health (Good/Average/Poor): ";
        getline(cin >> ws, health);

        daysPassed = 0;

        cout << "\nPlant added successfully!\n";
    }

    // Function to display plant details
    void display()
    {
        cout << "\nPlant Name: " << name;
        cout << "\nWatering Interval: " << waterDays << " days";
        cout << "\nDays Passed Since Watering: " << daysPassed;
        cout << "\nPlant Health: " << health;

        if (waterDays > 0 && daysPassed >= waterDays)
        {
            cout << "\nStatus: NEEDS WATER!";
        }
        else
        {
            cout << "\nStatus: Watering is not yet required.";
        }

        cout << "\n-----------------------------\n";
    }

    // Function to water the plant
    void waterPlant()
    {
        if (name == "")
        {
            cout << "\nNo plant information available.\n";
            return;
        }

        daysPassed = 0;

        cout << "\n" << name << " has been watered successfully!\n";
    }

    // Function to pass one day
    void passDay()
    {
        if (name != "")
        {
            daysPassed++;
        }
    }

    // Check whether a plant exists
    bool isAdded()
    {
        return name != "";
    }
};

int main()
{
    Plant p[5];
    int n = 0;
    int choice;
    int plantNumber;

    do
    {
        cout << "\n===== PLANT CARE MANAGER =====\n";
        cout << "1. Add Plant\n";
        cout << "2. Display Plants\n";
        cout << "3. Water Plant\n";
        cout << "4. Pass One Day\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (n < 5)
            {
                p[n].addPlant();
                n++;
            }
            else
            {
                cout << "\nMaximum limit of 5 plants reached!\n";
            }
            break;

        case 2:
            if (n == 0)
            {
                cout << "\nNo plants added yet.\n";
            }
            else
            {
                cout << "\n===== PLANT DETAILS =====\n";

                for (int i = 0; i < n; i++)
                {
                    cout << "\nPlant " << i + 1;
                    p[i].display();
                }
            }
            break;

        case 3:
            if (n == 0)
            {
                cout << "\nNo plants available to water.\n";
            }
            else
            {
                cout << "\nEnter plant number (1-" << n << "): ";
                cin >> plantNumber;

                if (plantNumber >= 1 && plantNumber <= n)
                {
                    p[plantNumber - 1].waterPlant();
                }
                else
                {
                    cout << "\nInvalid plant number!\n";
                }
            }
            break;

        case 4:
            if (n == 0)
            {
                cout << "\nNo plants added yet.\n";
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    p[i].passDay();
                }

                cout << "\nOne day has passed for all plants.\n";
            }
            break;

        case 5:
            cout << "\nExiting Plant Care Manager. Goodbye!\n";
            break;

        default:
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}