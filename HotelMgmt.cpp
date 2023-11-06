#include <iostream>
using namespace std;

int main()
{
    // quantity of all items in hotel
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken_roll = 0;

    // sold items in hotel
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken_roll = 0;

    // Total of every item sold in hotel for the particular day
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken_roll = 0;

    // global variables
    int choice, quantity_user_desired;

    // availability of items in the hotel
    cout << "\n\t\t Quantity of items we have in the hotel";
    cout << "\n Rooms available : ";
    cin >> Qrooms;
    cout << "\n Quantity of Pasta : ";
    cin >> Qpasta;
    cout << "\n Quantity of Burger : ";
    cin >> Qburger;
    cout << "\n Quantity of Noodles : ";
    cin >> Qnoodles;
    cout << "\n Quantity of Shake : ";
    cin >> Qshake;
    cout << "\n Quantity of Chicken-roll : ";
    cin >> Qchicken_roll;
    cout << "\n\n";

    // menu for selecting item for the user
    m:

    cout << "\n\t\t\tPlease select from the given menu options";
    cout << "\n\n 1) Rooms";
    cout << "\n 2) Pasta";
    cout << "\n 3) Burger";
    cout << "\n 4) Noodles";
    cout << "\n 5) Shake";
    cout << "\n 6) Chicken-roll";
    cout << "\n 7) Information regarding sales and collection";
    cout << "\n 8) Exit";
    cout << "\n\n Please enter Your Choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n\t Enter the Number of rooms you want: ";
        cin >> quantity_user_desired;  //user input 

        if (Qrooms - Srooms >= quantity_user_desired) //check if rooms are present that user wants in hotel
        {
            Srooms += quantity_user_desired; //updating sold rooms in hotel 
            Total_rooms = Total_rooms + (quantity_user_desired * 1200); //total cost of rooms sold 
            cout << "\n\n\t\t" << quantity_user_desired << " room / rooms have been allotted to you!";
        }
        else
        {
            cout << "\n\t Only " << Qrooms - Srooms << " rooms remaining in hotel.";
        }
        break;

    case 2:
        cout << "\n\n\t Enter Pasta Quantity you wish: ";
        cin >> quantity_user_desired; //user input 
        if (Qpasta - Spasta >= quantity_user_desired) //check no. of pasta user entered is present in stock or not 
        {
            Spasta += quantity_user_desired; //updating sold pastas 
            Total_pasta = Total_pasta + (quantity_user_desired * 250); //total cost of pastas sold 
            cout << "\n\n\t\t " << quantity_user_desired << " Pasta is the order";
        }
        else
        {
            cout << "\n\n\t\tOnly " << Qpasta - Spasta << " pastas remaining in stock!";
        }
        break;

    case 3:
        cout << "\n\n\t Enter Burger Quantity you wish: ";
        cin >> quantity_user_desired; //user input  
        if (Qburger - Sburger >= quantity_user_desired) //check no. of burgers available in stock 
        {
            Sburger += quantity_user_desired; //updating sold burgers 
            Total_burger = Total_burger + (quantity_user_desired * 60); //Total cost of burgers sold 
            cout << "\n\n\t\t" << quantity_user_desired << " Burger is the order";
        }
        else
        {
            cout << "\n\t Only " << Qburger - Sburger << " Burgers Remaining in stock!";
        }
        break;

    case 4:
        cout << "\n\n\t Enter Noodles Quantity you wish: ";
        cin >> quantity_user_desired; //user input 
        if (Qnoodles - Snoodles >= quantity_user_desired) //check no. of noodles available in stock
        {
            Snoodles += quantity_user_desired; // updating sold noodles 
            Total_noodles = Total_noodles + (quantity_user_desired * 200); //Total cost of noodles sold 
            cout << "\n\n\t\t" << quantity_user_desired << " Noodles is the order";
        }
        else
        {
            cout << "\n\tOnly " << Qnoodles - Snoodles << " Noodles Remaining in stock!";
        }
        break;

    case 5:
        cout << "\n\n\t Enter Shakes Quantity you wish: ";
        cin >> quantity_user_desired; //user input
        if (Qshake - Sshake >= quantity_user_desired) //check no. of shakes present in stock
        {
            Sshake += quantity_user_desired; //updating sold shakes 
            Total_shake = Total_shake + (quantity_user_desired * 170); //Total price of shakes sold 
            cout << "\n\n\t\t" << quantity_user_desired << " shakes is the order";
        }
        else
        {
            cout << "\n\tOnly " << Qshake - Sshake << " shakes Remaining in stock!";
        }
        break;

    case 6:
        cout << "\n\n\t Enter Chicken-roll Quantity you wish: ";
        cin >> quantity_user_desired; //user input 
        if (Qchicken_roll - Schicken_roll >= quantity_user_desired) //check no. of chicken rolls available in stock
        {
            Schicken_roll += quantity_user_desired; //updating sold chicken rolls 
            Total_chicken_roll = Total_chicken_roll + (quantity_user_desired * 150); //Total cost of chicken rolls sold 
            cout << "\n\n\t\t" << quantity_user_desired << " Chicken-rolls is the order";
        }
        else
        {
            cout << "\n\tOnly " << Qchicken_roll - Schicken_roll << " Chicken-roll Remaining in stock!";
        }
        break;

    case 7: //this option signifies details of per day collection of hotel for every item 
        cout << "\n\t\tDetails of sales and collection ";
        cout << "\n";
        cout << "\n\n Number of Rooms we had : " << Qrooms;
        cout << "\n Number of Rooms we gave for rent : " << Srooms;
        cout << "\n Remaining Rooms : " << Qrooms - Srooms;
        cout << "\n\n Total Rooms collection for the Day : " << Total_rooms;

        cout << "\n\n Number of Pastas we had : " << Qpasta;
        cout << "\n Number of Pastas we sold : " << Spasta;
        cout << "\n Remaining Pastas : " << Qpasta - Spasta;
        cout << "\n\n Total Pasta collection for the Day : " << Total_pasta;

        cout << "\n\n Number of burgers we had : " << Qburger;
        cout << "\n Number of burgers we sold : " << Sburger;
        cout << "\n Remaining Burgers : " << Qburger - Sburger;
        cout << "\n\n Total Burger collection for the Day : " << Total_burger;

        cout << "\n\n Number of Noodles we had : " << Qnoodles;
        cout << "\n Number of Noodles we sold : " << Snoodles;
        cout << "\n Remaining Noodles : " << Qnoodles - Snoodles;
        cout << "\n\n Total Noodles collection for the Day : " << Total_noodles;

        cout << "\n\n Number of shakes we had : " << Qshake;
        cout << "\n Number of Shakes we sold : " << Sshake;
        cout << "\n Remaining Shakes : " << Qshake - Sshake;
        cout << "\n\n Total Shakes collection for the Day : " << Total_shake;

        cout << "\n\n Number of Chicken-roll we had : " << Qchicken_roll;
        cout << "\n Number of Chicken-roll we sold : " << Schicken_roll;
        cout << "\n Remaining Chicken-roll : " << Qchicken_roll - Schicken_roll;
        cout << "\n\n Total Chicken-roll collection for the Day : " << Total_chicken_roll;
        cout << "\n\n";
        cout << "\n\n\n Total Collection for the day : " << Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken_roll;
        break;

    case 8:
        exit(0);    

    default:
        cout << "\n Please select a valid choice from the above menu!";
        break;
    }

    goto m; // jumping statement to start the function
}