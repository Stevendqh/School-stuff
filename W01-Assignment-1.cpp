/******************************************************************************
# Author:           Steven Hoang
# Assignment:       Assignment 1
# Date:             3/25/23
# Description:      This program prompts the user for the guest's name, 
                    reservation date, reservation time, and number of guests. 
                    It then calculates the estimated dining time based on the 
                    number of guests and displays the reservation details along 
                    with the estimated dining time in hours and minutes.

# Sources:          C++ Style Guide
                    https://cplusplus.com/reference/
#******************************************************************************/

// Sample Run:

// Enter the guest's name: John Denver
// Enter the reservation date (MM/DD/YYYY): 04/07/23
// Enter the reservation time (HH:MM): 06:00
// Enter the number of guests: 4

// Reservation confirmed for John Denver on 04/07/23 at 06:00 for 4 guests
// Estimated dining time: 1 hour(s) and 20 minutes

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Reservation details
    string name = "name";
    string date = "MM/DD/YYYY";
    string time = "HH:MM";
    int num_guests = 0;
    const int AVG_DINER_TIME = 20;
    
    // Get user input
    cout << "Enter the guest's name: ";
    getline(cin, name);
    cout << "Enter the reservation date (MM/DD/YYYY): ";
    getline(cin, date);
    cout << "Enter the reservation time (HH:MM): ";
    getline(cin, time);
    cout << "Enter the number of guests: ";
    cin >> num_guests;
    
    // Calculate average dining time
    int dining_time_minutes = AVG_DINER_TIME * num_guests;
    int dining_time_hours = dining_time_minutes / 60;
    int dining_time_remaining_minutes = dining_time_minutes % 60;

    // Show reservation details
    cout << endl << "Reservation confirmed for " << name << " on " << date << " at " << time << " for " << num_guests << " guests." << endl;
    cout << "Estimated dining time: " << dining_time_hours << " hour(s) and " << dining_time_remaining_minutes << " minute(s)." << endl;

    return 0;
}