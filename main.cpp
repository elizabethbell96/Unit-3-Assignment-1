//Student Name:Liz Bell

//Teacher: Dr. Tyson McMillan

//Date: 04-11-2024

//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;

/*

Research Input data: go to http://www.weather.comLinks to an external site.

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//Key West, FL = 1, Aspen, CO = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp

City 1, Day 1: 77

City 1, Day 2: 74

City 1, Day 3: 76

City 1, Day 4: 79

City 1, Day 5: 81

City 1, Day 6: 82

City 1, Day 7: 80

City 2, Day 1: 62

City 2, Day 2: 61

City 2, Day 3: 49

City 2, Day 4: 48

City 2, Day 5: 50

City 2, Day 6: 62

City 2, Day 7: 59

*/



int main()

{

      const int CITY = 2;

      const int WEEK = 7;

    int cityOne[WEEK];
    int cityTwo[WEEK];
  
    int temperature[CITY][WEEK];

    //Note your input data from the above

    cout << "Enter all temperatures for a week of first city and then second city. \n";



    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";

            cin >> temperature[i][j];

        }

    }



    cout << "\n\nDisplaying Values:\n";



    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

        }

    }

/*

      Expand this program:

      1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....


      2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....

      3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.

      4. print the results of temperature[i][j]; to the screen.

    */

cout << "Please enter a week of temperatures from the first city:\n";
  for(int i = 0; i < WEEK; ++i)
    {
      
      cout << "Day " << i + 1 << " : ";
      cin >> cityOne[i];
      
    }
cout << "Please enter a week of temperatures from the second city:\n";
  for (int i = 0; i < WEEK; ++i)
    {
      cout << "Day " << i + 1 << " : ";
      cin >> cityTwo[i];
    }



  for (int i = 0; i < WEEK; ++i)
    {
      temperature[0][i] = cityOne[i];
      temperature[1][i] = cityTwo[i];

    }

  cout << "\nHere are your temperature values:\n";
  for (int i = 0; i < CITY; ++i)
    {
      for (int j = 0; j < WEEK; ++j)
        {
          cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j]<<endl;
        }
    }

    return 0;

}